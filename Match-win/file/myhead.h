#include<bits/stdc++.h>
#define del Delete()
using namespace std;
int toint(char* c){
    int s=0;
    for(int i=0;c[i];i++){
        s=s*10+c[i]-'0';
    }
    return s;
}
char Delete(){
	char c=13;
	putchar(c);
	for(int i=1;i<=30;i++){
		putchar(' ');
	}
	putchar(c);
	return 0;
}
string tostr(char* c){
    string s;
    for(int i=0;c[i];i++){
        s+=c[i];
    }
    return s;
}
