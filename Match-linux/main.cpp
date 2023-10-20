#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
vector<int>vec,vec2;
void fun(int num,int n){
    cout<<"正在对拍 "<<num<<"/"<<n<<"\n";
    system(("./data "+to_string(num)).c_str());
    system(("./code1 "+to_string(num)).c_str());
    system(("./code2 "+to_string(num)).c_str());
    bool f=system(("diff test/"+to_string(num)+"/code1.out test/"+to_string(num)+"/code2.out > /dev/null").c_str());    
    if(f){
        vec.push_back(num);
        cout<<"!! 有差异  !!\n\n";
    }else{
        vec2.push_back(num);
        cout<<"无差异\n\n";
    }
    return;
}
int main(){
    int n;
    cout<<"对拍次数: ";
    cin>>n;
    system("rm -r test");
    cout<<"正在编译 data.cpp\n";
    system("g++ data.cpp -o data");
    cout<<"正在编译 code1.cpp\n";
    system("g++ code1.cpp -o code1");
    cout<<"正在编译 code2.cpp\n";
    system("g++ code2.cpp -o code2");
    cout<<"正在编译 f.cpp\n";
    system("g++ f.cpp -o f");
    system(("./f "+to_string(n)).c_str());
    for(int i=1;i<=n;i++){
        fun(i,n);
        sleep(1);
    }
    system("rm data code1 code2 f");
    char c;
    if(vec.empty()){
        printf("没有错误.\n");
        cout<<"\n\n是否将对拍数据删除? (Y/N): ";
        cin>>c;
        if(c=='Y'||c=='y'){
            for(int i:vec2){
                system(("rm -r test/"+to_string(i)).c_str());
            }
        }else{
        	cout<<"\n是否打开对拍数据目录? (Y/N): ";
        	cin>>c;
        	if(c=='Y'||c=='y'){
        		system("nautilus test");
			}
		} 
        return 0;
    }
    printf("错误测试点: ");
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<"\n\n是否要将正确的测试数据删除? (Y/N): ";
    cin>>c;
    if(c=='y'||c=='Y'){
        for(int i:vec2){
            system(("rm -r test/"+to_string(i)).c_str());
        }
    }
    cout<<"\n是否要打开对拍数据目录? (Y/N): ";
    cin>>c;
    if(c=='y'||c=='Y'){
        system("nautilus test");
    }
    return 0;
}