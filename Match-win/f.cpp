#include"file/myhead.h"
using namespace std;
int main(int argc,char* argv[]){
    int n=toint(argv[1]);
    cout<<del<<"�����½� test";
    system("md test");
    for(int i=1;i<=n;i++){
    	cout<<del<<"�����½� test\\"+to_string(i);
        system(("md test\\"+to_string(i)).c_str());
    }
    cout<<"\n";
    return 0;
}
