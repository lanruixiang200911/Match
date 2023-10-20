#include<bits/stdc++.h>
using namespace std;
namespace code{
    int main(){
        
        return 0;
    }
}
string tostr(char* c){
    string s;
    for(int i=0;c[i];i++){
        s+=c[i];
    }
    return s;
}
int main(int argc,char* argv[]){
    string d="test/"+tostr(argv[1])+"/";
    freopen((d+"input.in").c_str(),"r",stdin);
    freopen((d+"code1.out").c_str(),"w",stdout);
    return code::main();
}