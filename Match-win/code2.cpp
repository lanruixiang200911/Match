#include"file/myhead.h"
using namespace std;
namespace code{
    int main(){
        
        return 0;
    }
}
int main(int argc,char* argv[]){
    string d="test\\"+tostr(argv[1])+"\\";
    freopen((d+"input.in").c_str(),"r",stdin);
    freopen((d+"code2.out").c_str(),"w",stdout);
    return code::main();
}
