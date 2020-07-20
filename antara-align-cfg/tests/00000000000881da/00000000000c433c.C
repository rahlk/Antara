#include<bits/stdc++.h>
using namespace std;
int i;
int j=1;
int main()
{
    int t; int n;
    char str[10000],str1[10000];
    cin>>t;
    cout<<endl;
    while(t--){
        cin>>n;
        cout<<endl;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin.get(str,10000);
        for(i=0;i<(2*n-2);i++)
        {
            if(str[i]=='S'){
                str1[i]='E';
            }
            else if(str[i]=='E'){
                str1[i]='S';
            }
        }
        cout<<"Case #";

        cout<<j<<":"<<" ";
        for(i=0;i<(2*n-2);i++)
        {
            cout<<str1[i];
        }

        cout<<endl;
        j++;
    }
}