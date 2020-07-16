#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tt;
    cin>>t;
    tt=t;
    while(t--){
        int n;
        cin>>n;
        string st,answer;
        cin>>st;
        for(int i=0;i<2*n-2;i++)
        {
            if(st[i]=='S')
                answer +='E';
            else
                answer +='S';
        }
        cout<<"Case #"<<tt-t<<": "<<answer<<endl;
    }
}
