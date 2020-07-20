#include<bits/stdc++.h>
using namespace std;
void _main(string S)
{
    int N=S.length();
    for(int i=0;i<N;i++)
    {
        if(S[i] == 'S')
            S[i] = 'E';
        else
            S[i] = 'S';
    }
    cout<<S<<"\n";
}

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
    	int x;
    	cin>>x;
        cout<<"Case #"<<i<<": ";
        string S;
        cin>>S;
        _main(S);
    }
}