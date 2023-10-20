#include<bits/stdc++.h>
using namespace std;
int toint(char* c){
    int s=0;
    for(int i=0;c[i];i++){
        s=s*10+c[i]-'0';
    }
    return s;
}
int main(int argc,char* argv[]){
    int n=toint(argv[1]);
    system("mkdir test");
    for(int i=1;i<=n;i++){
        system(("mkdir test/"+to_string(i)).c_str());
    }
    return 0;
}