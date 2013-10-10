#include "html/ParserDom.h"
#include "html/utils.h"
#include "html/wincstring.h"
#include "css/parser_pp.h"
#ifndef WIN32
#include "config.h"
#else
#define VERSION "0.6"
#endif

#include <cstdlib>
#include <fstream>
#include <stdexcept>
#include <iostream>
#include <cstdio>

#include "wingetopt.h"

using namespace std;
using namespace htmlcxx;

void usage(string prg) {
	cerr << "usage:\t" << prg << " [-h] [-V] file.html [file.css]" << endl;
	return;
}

void usage_long(string prg) {
	usage(prg);
	cerr << "Html and css parser" << endl << endl;
	cerr << "  -V\t print version number and exit" << endl;
	cerr << "  -h\t print this help text" << endl;
	cerr << "  -C\t disable css parsing" << endl;
	return;
}

int main(int argc, char **argv) 
{
	tree<HTML::Node> tr;
	bool parse_css = true;
	string css_code;
	try 
	{
		while (1) 
		{
			signed char c = getopt(argc, argv, "hVC");	
			if(c == -1) break;
			switch(c) {
				case 'h':
					usage_long(argv[0]);
					exit(0);
					break;
				case 'V':
					cerr << VERSION << endl;
					exit(0);
				case 'C':
					parse_css = false;
					break;
				default:
					usage(argv[0]);
					exit(1);
					break;
			}
		}

		if (argc != optind + 1 && argc != optind + 2) 
		{
			usage(argv[0]);
			exit(1);
		}

		ifstream file(argv[optind]);
		if (!file.is_open()) 
		{
			cerr << "Unable to open file " << argv[optind] << endl;
			exit(1);
		}
		string html;

		while (1)
		{
			char buf[BUFSIZ];
			file.read(buf, BUFSIZ);
			if(file.gcount() == 0) {
				break;
			}
			html.append(buf, file.gcount());
		}
		file.close();

		if(argc == optind + 2) //we have a separate css file
		{
			ifstream fcss(argv[optind + 1]);
			if(!fcss.is_open()) 
			{
				cerr << "Unable to open file " << argv[optind] << endl;
				exit(1);
			}
			while (1)
			{
				char buf[BUFSIZ];
				fcss.read(buf, BUFSIZ);
				if(fcss.gcount() == 0) {
					break;
				}
				css_code.append(buf, fcss.gcount());
			}
			fcss.close();
		}



		HTML::ParserDom parser;
		parser.parse(html);
		tr = parser.getTree();
		cout << tr << endl;

	} catch (exception &e) {
		cerr << "Exception " << e.what() << " caught" << endl;
		exit(1);
	} catch (...) {
		cerr << "Unknow exception caught " << endl;
	}

#ifdef WIN32
		if(parse_css)
		{
			cerr << "Css parsing not supported in win32" << endl;
			return 1;
		}
		return 0;
#else
	if (parse_css) try
	{
		if(!parse_css) exit(0);

		CSS::Parser css_parser;
		tree<HTML::Node>::iterator it = tr.begin();
		tree<HTML::Node>::iterator end = tr.end();
		if(css_code.length()) {
			css_parser.parse(css_code);
		}

		cout << "CSS attributes:" << endl;
		cout << endl;
		while (it != end) 
		{

			if (it->isTag()) 
			{

				it->parseAttributes();
				vector<CSS::Parser::Selector> v;
				tree<HTML::Node>::iterator k = it;
				while (k != tr.begin()) 
				{
					CSS::Parser::Selector s;
					s.setElement(k->tagName());
					s.setId(k->attribute("id").second);
					s.setClass(k->attribute("class").second);
					s.setPseudoClass(CSS::Parser::NONE_CLASS);
					s.setPseudoElement(CSS::Parser::NONE_ELEMENT);
					v.push_back(s);
					k = tr.parent(k);
				}

				map<string, string> attributes = css_parser.getAttributes(v);
				map<string, string>::const_iterator mit = attributes.begin();
				map<string, string>::const_iterator mend = attributes.end();

				string tag = it->tagName();
				for(unsigned int i = 0; i < tag.size(); ++i) tag[i] = ::toupper(tag[i]);
				cout << tag << "@[" << it->offset() << ":" << it->offset() + it->length() << ")" << endl;
				for(; mit != mend; ++mit) cout << mit->first << ": " << mit->second << endl;
				cout << endl;


				if (strcasecmp(it->tagName().c_str(), "STYLE") == 0) 
				{
					tree<HTML::Node>::iterator begin, end;
					begin = it;
					end = it;
					end.skip_children();
					++end;
					string css_snippet;

					for (; begin != end; ++begin)
					{
						if (!(begin->isTag())) css_snippet.append(begin->text());
					}

					css_parser.parse(css_snippet);
				}
			}
			++it;
		}

	} catch (exception &e) {
		cerr << "Exception " << e.what() << " caught" << endl;
		exit(1);
	} catch (...) {
		cerr << "Unknow exception caught " << endl;
	}

	exit(0);
#endif
}
