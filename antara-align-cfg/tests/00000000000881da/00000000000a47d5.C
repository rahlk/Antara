#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    
    for(int i=0; i<T; i++)
    {
        long long N;
        cin>>N;
        char P[2*N-2];
        cin>>P;
        cout<<"Case #1: ";
        for(int j=0; j<2*N-2; j++)
        {
            if(P[j]=='S')
                cout<<"E";
            else
                cout<<"S";
        }
        
    }
    
    return 0;
}