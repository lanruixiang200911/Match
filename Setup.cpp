#include<bits/stdc++.h>
using namespace std;
string code1="#include<bits/stdc++.h>\nusing namespace std;\nnamespace code{\n    int main(){\n        \n        return 0;\n    }\n}\nstring tostr(char* c){\n    string s;\n    for(int i=0;c[i];i++){\n        s+=c[i];\n    }\n    return s;\n}\nint main(int argc,char* argv[]){\n    string d=\"test\\\\\"+tostr(argv[1])+\"\\\\\";\n    freopen((d+\"input.in\").c_str(),\"r\",stdin);\n    freopen((d+\"code1.out\").c_str(),\"w\",stdout);\n    return code::main();\n}";
string code2="#include<bits/stdc++.h>\nusing namespace std;\nnamespace code{\n    int main(){\n        \n        return 0;\n    }\n}\nstring tostr(char* c){\n    string s;\n    for(int i=0;c[i];i++){\n        s+=c[i];\n    }\n    return s;\n}\nint main(int argc,char* argv[]){\n    string d=\"test\\\\\"+tostr(argv[1])+\"\\\\\";\n    freopen((d+\"input.in\").c_str(),\"r\",stdin);\n    freopen((d+\"code2.out\").c_str(),\"w\",stdout);\n    return code::main();\n}";
string data="#include<bits/stdc++.h>\nusing namespace std;\nnamespace data{\n    int main(){\n        \n        return 0;\n    }\n}\nstring tostr(char* c){\n    string s;\n    for(int i=0;c[i];i++){\n        s+=c[i];\n    }\n    return s;\n}\nint main(int argc,char* argv[]){\n    string d=\"test\\\\\"+tostr(argv[1])+\"\\\\\";\n    freopen((d+\"input.in\").c_str(),\"w\",stdout);\n    return data::main();\n}";
string code_f="#include<bits/stdc++.h>\nusing namespace std;\nint toint(char* c){\n    int s=0;\n    for(int i=0;c[i];i++){\n        s=s*10+c[i]-'0';\n    }\n    return s;\n}\nint main(int argc,char* argv[]){\n    int n=toint(argv[1]);\n    system(\"md test\");\n    for(int i=1;i<=n;i++){\n        system((\"md test\\\\\"+to_string(i)).c_str());\n    }\n    return 0;\n}";
string code_html="<!DOCTYPE html>\n<html>\n<head>\n<title>markdown.md</title>\n<meta http-equiv=\"Content-type\" content=\"text/html;charset=GB2312\">\n\n<style>\n/* https://github.com/microsoft/vscode/blob/master/extensions/markdown-language-features/media/markdown.css */\n/*---------------------------------------------------------------------------------------------\n *  Copyright (c) Microsoft Corporation. All rights reserved.\n *  Licensed under the MIT License. See License.txt in the project root for license information.\n *--------------------------------------------------------------------------------------------*/\n\nbody {\n	font-family: var(--vscode-markdown-font-family, -apple-system, BlinkMacSystemFont, \"Segoe WPC\", \"Segoe UI\", \"Ubuntu\", \"Droid Sans\", sans-serif);\n	font-size: var(--vscode-markdown-font-size, 14px);\n	padding: 0 26px;\n	line-height: var(--vscode-markdown-line-height, 22px);\n	word-wrap: break-word;\n}\n\n#code-csp-warning {\n	position: fixed;\n	top: 0;\n	right: 0;\n	color: white;\n	margin: 16px;\n	text-align: center;\n	font-size: 12px;\n	font-family: sans-serif;\n	background-color:#444444;\n	cursor: pointer;\n	padding: 6px;\n	box-shadow: 1px 1px 1px rgba(0,0,0,.25);\n}\n\n#code-csp-warning:hover {\n	text-decoration: none;\n	background-color:#007acc;\n	box-shadow: 2px 2px 2px rgba(0,0,0,.25);\n}\n\nbody.scrollBeyondLastLine {\n	margin-bottom: calc(100vh - 22px);\n}\n\nbody.showEditorSelection .code-line {\n	position: relative;\n}\n\nbody.showEditorSelection .code-active-line:before,\nbody.showEditorSelection .code-line:hover:before {\n	content: \"\";\n	display: block;\n	position: absolute;\n	top: 0;\n	left: -12px;\n	height: 100%;\n}\n\nbody.showEditorSelection li.code-active-line:before,\nbody.showEditorSelection li.code-line:hover:before {\n	left: -30px;\n}\n\n.vscode-light.showEditorSelection .code-active-line:before {\n	border-left: 3px solid rgba(0, 0, 0, 0.15);\n}\n\n.vscode-light.showEditorSelection .code-line:hover:before {\n	border-left: 3px solid rgba(0, 0, 0, 0.40);\n}\n\n.vscode-light.showEditorSelection .code-line .code-line:hover:before {\n	border-left: none;\n}\n\n.vscode-dark.showEditorSelection .code-active-line:before {\n	border-left: 3px solid rgba(255, 255, 255, 0.4);\n}\n\n.vscode-dark.showEditorSelection .code-line:hover:before {\n	border-left: 3px solid rgba(255, 255, 255, 0.60);\n}\n\n.vscode-dark.showEditorSelection .code-line .code-line:hover:before {\n	border-left: none;\n}\n\n.vscode-high-contrast.showEditorSelection .code-active-line:before {\n	border-left: 3px solid rgba(255, 160, 0, 0.7);\n}\n\n.vscode-high-contrast.showEditorSelection .code-line:hover:before {\n	border-left: 3px solid rgba(255, 160, 0, 1);\n}\n\n.vscode-high-contrast.showEditorSelection .code-line .code-line:hover:before {\n	border-left: none;\n}\n\nimg {\n	max-width: 100%;\n	max-height: 100%;\n}\n\na {\n	text-decoration: none;\n}\n\na:hover {\n	text-decoration: underline;\n}\n\na:focus,\ninput:focus,\nselect:focus,\ntextarea:focus {\n	outline: 1px solid -webkit-focus-ring-color;\n	outline-offset: -1px;\n}\n\nhr {\n	border: 0;\n	height: 2px;\n	border-bottom: 2px solid;\n}\n\nh1 {\n	padding-bottom: 0.3em;\n	line-height: 1.2;\n	border-bottom-width: 1px;\n	border-bottom-style: solid;\n}\n\nh1, h2, h3 {\n	font-weight: normal;\n}\n\ntable {\n	border-collapse: collapse;\n}\n\ntable > thead > tr > th {\n	text-align: left;\n	border-bottom: 1px solid;\n}\n\ntable > thead > tr > th,\ntable > thead > tr > td,\ntable > tbody > tr > th,\ntable > tbody > tr > td {\n	padding: 5px 10px;\n}\n\ntable > tbody > tr + tr > td {\n	border-top: 1px solid;\n}\n\nblockquote {\n	margin: 0 7px 0 5px;\n	padding: 0 16px 0 10px;\n	border-left-width: 5px;\n	border-left-style: solid;\n}\n\ncode {\n	font-family: Menlo, Monaco, Consolas, \"Droid Sans Mono\", \"Courier New\", monospace, \"Droid Sans Fallback\";\n	font-size: 1em;\n	line-height: 1.357em;\n}\n\nbody.wordWrap pre {\n	white-space: pre-wrap;\n}\n\npre:not(.hljs),\npre.hljs code > div {\n	padding: 16px;\n	border-radius: 3px;\n	overflow: auto;\n}\n\npre code {\n	color: var(--vscode-editor-foreground);\n	tab-size: 4;\n}\n\n/** Theming */\n\n.vscode-light pre {\n	background-color: rgba(220, 220, 220, 0.4);\n}\n\n.vscode-dark pre {\n	background-color: rgba(10, 10, 10, 0.4);\n}\n\n.vscode-high-contrast pre {\n	background-color: rgb(0, 0, 0);\n}\n\n.vscode-high-contrast h1 {\n	border-color: rgb(0, 0, 0);\n}\n\n.vscode-light table > thead > tr > th {\n	border-color: rgba(0, 0, 0, 0.69);\n}\n\n.vscode-dark table > thead > tr > th {\n	border-color: rgba(255, 255, 255, 0.69);\n}\n\n.vscode-light h1,\n.vscode-light hr,\n.vscode-light table > tbody > tr + tr > td {\n	border-color: rgba(0, 0, 0, 0.18);\n}\n\n.vscode-dark h1,\n.vscode-dark hr,\n.vscode-dark table > tbody > tr + tr > td {\n	border-color: rgba(255, 255, 255, 0.18);\n}\n\n</style>\n\n<style>\n/* Tomorrow Theme */\n/* http://jmblog.github.com/color-themes-for-google-code-highlightjs */\n/* Original theme - https://github.com/chriskempson/tomorrow-theme */\n\n/* Tomorrow Comment */\n.hljs-comment,\n.hljs-quote {\n	color: #8e908c;\n}\n\n/* Tomorrow Red */\n.hljs-variable,\n.hljs-template-variable,\n.hljs-tag,\n.hljs-name,\n.hljs-selector-id,\n.hljs-selector-class,\n.hljs-regexp,\n.hljs-deletion {\n	color: #c82829;\n}\n\n/* Tomorrow Orange */\n.hljs-number,\n.hljs-built_in,\n.hljs-builtin-name,\n.hljs-literal,\n.hljs-type,\n.hljs-params,\n.hljs-meta,\n.hljs-link {\n	color: #f5871f;\n}\n\n/* Tomorrow Yellow */\n.hljs-attribute {\n	color: #eab700;\n}\n\n/* Tomorrow Green */\n.hljs-string,\n.hljs-symbol,\n.hljs-bullet,\n.hljs-addition {\n	color: #718c00;\n}\n\n/* Tomorrow Blue */\n.hljs-title,\n.hljs-section {\n	color: #4271ae;\n}\n\n/* Tomorrow Purple */\n.hljs-keyword,\n.hljs-selector-tag {\n	color: #8959a8;\n}\n\n.hljs {\n	display: block;\n	overflow-x: auto;\n	color: #4d4d4c;\n	padding: 0.5em;\n}\n\n.hljs-emphasis {\n	font-style: italic;\n}\n\n.hljs-strong {\n	font-weight: bold;\n}\n</style>\n\n<style>\n/*\n * Markdown PDF CSS\n */\n\n body {\n	font-family: -apple-system, BlinkMacSystemFont, \"Segoe WPC\", \"Segoe UI\", \"Ubuntu\", \"Droid Sans\", sans-serif, \"Meiryo\";\n	padding: 0 12px;\n}\n\npre {\n	background-color: #f8f8f8;\n	border: 1px solid #cccccc;\n	border-radius: 3px;\n	overflow-x: auto;\n	white-space: pre-wrap;\n	overflow-wrap: break-word;\n}\n\npre:not(.hljs) {\n	padding: 23px;\n	line-height: 19px;\n}\n\nblockquote {\n	background: rgba(127, 127, 127, 0.1);\n	border-color: rgba(0, 122, 204, 0.5);\n}\n\n.emoji {\n	height: 1.4em;\n}\n\ncode {\n	font-size: 14px;\n	line-height: 19px;\n}\n\n/* for inline code */\n:not(pre):not(.hljs) > code {\n	color: #C9AE75; /* Change the old color so it seems less like an error */\n	font-size: inherit;\n}\n\n/* Page Break : use <div class=\"page\"/> to insert page break\n-------------------------------------------------------- */\n.page {\n	page-break-after: always;\n}\n\n</style>\n<link rel=\"stylesheet\" href=\"file:///d%3A/css-theme/light.css\" type=\"text/css\">\n<script src=\"https://unpkg.com/mermaid/dist/mermaid.min.js\"></script>\n</head>\n<body>\n  <script>\n    mermaid.initialize({\n      startOnLoad: true,\n      theme: document.body.classList.contains('vscode-dark') || document.body.classList.contains('vscode-high-contrast')\n          ? 'dark'\n          : 'default'\n    });\n  </script>\n<h1 id=\"%E5%AF%B9%E6%8B%8D%E5%99%A8%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E\">������ʹ��˵��</h1>\n<h2 id=\"1-%E4%BA%A7%E5%93%81%E4%BF%A1%E6%81%AF\">1. ��Ʒ��Ϣ</h2>\n<p>�����ߣ�<a href=\"https://github.com/lanruixiang\">lanruixiang</a></p>\n<p>����ʱ�䣺2023.10.19</p>\n<h2 id=\"2-%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E\">2. ʹ��˵��</h2>\n<p>�ҵ� <code>code1.cpp</code> �� <code>code2.cpp</code>����������������һ�δ��룺</p>\n<pre class=\"hljs\"><code><div><span class=\"hljs-keyword\">namespace</span> code{\n    <span class=\"hljs-function\"><span class=\"hljs-keyword\">int</span> <span class=\"hljs-title\">main</span><span class=\"hljs-params\">()</span></span>{\n\n        <span class=\"hljs-keyword\">return</span> <span class=\"hljs-number\">0</span>;\n    }\n}\n</div></code></pre>\n<p>�ѱ����ĵ����δ���ֱ���� <code>code1.cpp</code> �� <code>code2.cpp</code> �� <code>namespace</code> �м���.</p>\n<hr>\n<p>���������ҵ� <code>data.cpp</code>���������������ݵ�.</p>\n<p>Ҳ���ҵ� <code>namespace</code> ���֣����������ݵĴ����������.</p>\n<hr>\n<p>�������������ļ���������ע��㣺</p>\n<ul>\n<li>���� <code>namespace</code>����������ǧ��Ҫ����</li>\n<li><code>namespace</code> ������ʹ���κ��ļ���д</li>\n</ul>\n<hr>\n<p>��������ֻҪ������Щ�ļ��������� <code>main.exe</code> ����.</p>\n<p>���к�ֻҪ��Ĵ��벻 CE����������һ�� <code>test</code> ���ļ��У����������ÿһ��Ĳ������ݼ����.</p>\n<p><strong>��Ҫ��Ƿ�� <code>main.cpp</code> �� <code>f.cpp</code> �����ݸ���</strong></p>\n\n</body>\n</html>\n";
int main(){
    string way,g_way;
    cout<<"�����밲װ·���������� D:\\�� ";
    cin>>way;
    string key;
    cout<<"��ע�⣬��װ��ʹ�ù��̱���Ҫ�� g++ ���������Ĳ���\n����������ã������� Yes���������� No���һ���������û��������ķ����� ";
    cin>>key;
    for(int i=0;key[i];i++){
        if(key[i]>='A'&&key[i]<='Z'){
            key[i]=key[i]-'A'+'a';
        }
    }
    if(key=="no"){
    	cout<<"\n1. �ڴ˵��Դ��Ҽ���������ԣ�����ֱ�Ӵ����ã�\n";
    	system("pause");
    	cout<<"\n2. �������鿴�߼�ϵͳ���á�\n";
    	system("pause");
    	cout<<"\n3. �ҵ������������������\n";
    	system("pause");
    	cout<<"\n4. �ҵ���˫����PATH��\n";
    	system("pause");
    	cout<<"\n5. �����������ı�������Ŀ¼��������ı������� D:\\MinGW\\bin\\g++.exe����ôҪ�ڻ��������м��� ;D:\\MinGW\\bin\n";
    	system("pause");
    	cout<<"\n6. ���ȷ�������ҽ��������д��ڶ�Ҫ��ȷ��������ֱ���˳�\n";
    	system("pause");
    	cout<<"\n���ڻ����������ĺ��޷�������Ӧ�����ڣ�������������Ҫ�˳��˰�װ���򣬲����´�\n";
    	system("pause");
    	return 0;
	}
    g_way="g++";
    way+="\\Match\\";
    system(("md "+way).c_str());
    freopen("CON","w",stdout);
    cout<<"���ڰ�װ code1.cpp\n";
    freopen((way+"code1.cpp").c_str(),"w",stdout);
    cout<<code1;
    freopen("CON","w",stdout);
    cout<<"���ڰ�װ code2.cpp\n";
    freopen((way+"code2.cpp").c_str(),"w",stdout);
    cout<<code2;
    freopen("CON","w",stdout);
    cout<<"���ڰ�װ data.cpp\n";
    freopen((way+"data.cpp").c_str(),"w",stdout);
    cout<<data;
    freopen("CON","w",stdout);
    cout<<"���ڰ�װ f.cpp\n";
    freopen((way+"f.cpp").c_str(),"w",stdout);
    cout<<code_f;
    freopen("CON","w",stdout);
    cout<<"���ڰ�װ main.cpp\n";
    freopen((way+"main.cpp").c_str(),"w",stdout);
    cout<<"#include<bits/stdc++.h>\nusing namespace std;\nvector<int>vec,vec2;\nvoid fun(int num){\n    system((\"data \"+to_string(num)).c_str());\n    system((\"code1 \"+to_string(num)).c_str());\n    system((\"code2 \"+to_string(num)).c_str());\n    bool f=system((\"fc test\\\\\"+to_string(num)+\"\\\\code1.out test\\\\\"+to_string(num)+\"\\\\code2.out\").c_str());    \n    if(f)vec.push_back(num);\n    else vec2.push_back(num);\n    return;\n}\nint main(){\n    int n;\n    cout<<\"���Ĵ���: \";\n    cin>>n;\n    system(\"rmdir /S /Q test\");\n    cout<<\"���ڱ��� data.cpp\\n\";\n    system(\"";
    cout<<g_way;
    cout<<" data.cpp -o data\");\n    cout<<\"���ڱ��� code1.cpp\\n\";\n    system(\"";
    cout<<g_way;
    cout<<" code1.cpp -o code1\");\n    cout<<\"���ڱ��� code2.cpp\\n\";\n    system(\"";
    cout<<g_way;
    cout<<" code2.cpp -o code2\");\n    cout<<\"���ڱ��� f.cpp\\n\";\n    system(\"";
    cout<<g_way;
    cout<<" f.cpp -o f\");\n    system((\"f \"+to_string(n)).c_str());\n    for(int i=1;i<=n;i++){\n        fun(i);\n        _sleep(1000);\n    }\n    system(\"del data.exe code1.exe code2.exe f.exe input.in code1.out code2.out\");\n    char c;\n    if(vec.empty()){\n        printf(\"û�д���.\\n\");\n        cout<<\"\\n\\n�Ƿ񽫶�������ɾ��? (Y/N): \";\n        cin>>c;\n        if(c=='Y'||c=='y'){\n            for(int i:vec2){\n                system((\"rmdir /S /Q test\\\\\"+to_string(i)).c_str());\n            }\n        }else{\n        	cout<<\"\\n�Ƿ�򿪶�������Ŀ¼? (Y/N): \";\n        	cin>>c;\n        	if(c=='Y'||c=='y'){\n        		system(\"start test\");\n			}\n		} \n        return 0;\n    }\n    printf(\"������Ե�: \");\n    for(int i:vec){\n        cout<<i<<\" \";\n    }\n    cout<<\"\\n\\n�Ƿ�Ҫ����ȷ�Ĳ�������ɾ��? (Y/N): \";\n    cin>>c;\n    if(c=='y'||c=='Y'){\n        for(int i:vec2){\n            system((\"rmdir /S /Q test\\\\\"+to_string(i)).c_str());\n        }\n    }\n    cout<<\"\\n�Ƿ�Ҫ�򿪶�������Ŀ¼? (Y/N): \";\n    cin>>c;\n    if(c=='y'||c=='Y'){\n        system(\"start test\");\n    }\n    return 0;\n}";
	freopen("CON","w",stdout);
	cout<<"���ڰ�װ ʹ��˵��.html\n";
	freopen((way+"ʹ��˵��.html").c_str(),"w",stdout);
	cout<<code_html;
	freopen("CON","w",stdout);
    system((g_way+" -w "+way+"main.cpp -o "+way+"main").c_str());
    cout<<"��װ������5 ����ʹ��˵��\n";
    _sleep(5000);
    system(("start "+way+"ʹ��˵��.html").c_str());
    return 0;
}
