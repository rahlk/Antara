#include<bits/stdc++.h>
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
        cout<<"Case #"<<i++<<": "<<b<<" "<<a<<endl;
    }
    return 0;
}