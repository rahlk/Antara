#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        cin>>n;
        char s[n*2-1];
        cout<<endl;
        cin>>s;
        int j=1;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='S' || s[i]=='s')
                s[i]='E';
            else
                s[i]='S';
        }
        cout<<"case #"<<j<<" "<<s;
        j++;
    }
return 0;
}