#include"file/myhead.h"
using namespace std;
namespace data{
    int main(){

        return 0;
    }
}
signed main(int argc,char* argv[]){
    string d="test\\"+tostr(argv[1])+"\\";
    freopen((d+"input.in").c_str(),"w",stdout);
    return data::main();
}
