#include"file/myhead.h"
using namespace std;
vector<int>vec,vec2;
void fun(int num){
    system(("data "+to_string(num)).c_str());
    system(("code1 "+to_string(num)).c_str());
    system(("code2 "+to_string(num)).c_str());
    bool f=system(("fc test\\"+to_string(num)+"\\code1.out test\\"+to_string(num)+"\\code2.out").c_str());    
    if(f)vec.push_back(num);
    else vec2.push_back(num);
    return;
}
int main(){
    int n;
    cout<<"���Ĵ���: ";
    cin>>n;
    system("rmdir /S /Q test");
    cout<<del<<"���ڱ��� data.cpp";
    system("g++ -w -std=c++14 -O2 data.cpp -o data");
    cout<<del<<"���ڱ��� code1.cpp";
    system("g++ -w -std=c++14 -O2 code1.cpp -o code1");
    cout<<del<<"���ڱ��� code2.cpp";
    system("g++ -w -std=c++14 -O2 code2.cpp -o code2");
    cout<<del<<"���ڱ��� f.cpp";
    system("g++ -w -std=c++14 -O2 f.cpp -o f");
    system(("f "+to_string(n)).c_str());
    for(int i=1;i<=n;i++){
        fun(i);
        _sleep(1000);
    }
    system("del data.exe code1.exe code2.exe f.exe input.in code1.out code2.out");
    char c;
    if(vec.empty()){
        printf("û�д���.\n");
        cout<<"\n\n�Ƿ񽫶�������ɾ��? (Y/N): ";
        cin>>c;
        if(c=='Y'||c=='y'){
            for(int i:vec2){
                system(("rmdir /S /Q test\\"+to_string(i)).c_str());
            }
        }else{
        	cout<<"\n�Ƿ�򿪶�������Ŀ¼? (Y/N): ";
        	cin>>c;
        	if(c=='Y'||c=='y'){
        		system("start test");
			}
		} 
        return 0;
    }
    printf("������Ե�: ");
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<"\n\n�Ƿ�Ҫ����ȷ�Ĳ�������ɾ��? (Y/N): ";
    cin>>c;
    if(c=='y'||c=='Y'){
        for(int i:vec2){
            system(("rmdir /S /Q test\\"+to_string(i)).c_str());
        }
    }
    cout<<"\n�Ƿ�Ҫ�򿪶�������Ŀ¼? (Y/N): ";
    cin>>c;
    if(c=='y'||c=='Y'){
        system("start test");
    }
    return 0;
}