#include<iostream>
using namespace std;
int main(){
    int t;
    int i=1;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        b=a;
        for(int i=0;i<a.length();i++){
            if(a[i]=='4'){
                b[i]='2';
                a[i]='2';
            }else
            {
                a[i]='0';
            }
        }
        int flag=0;
        int bl=a.length();
        for(int i=0;i<bl;i++){
            if(a[i]!='0'){
                flag=i;
                break;
            }
        }
        cout<<"Case #"<<i++<<": "<<b<<" ";
        for(int i=flag;i<bl;i++){
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}