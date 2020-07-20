#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unsigned long long n,j;
    char c;
    int t,l,i,k;
    cin>>t;

    for(i=0;i<t;i++)
    {
        while(1)
        {
            c=getchar();
            if(c==' ')
                break;
        }
        cin>>l;
        vector <unsigned long long> ele,num,val,ar;
        for(j=0;j<l;j++)
        {
            cin>>n;
            ele.push_back(n);
        }
        if(sqrt(ele[0])==ceil(sqrt(ele[0])))
        {
            num.push_back(sqrt(ele[0]));
            num.push_back(num[0]);
        }
        else
        {
            num.push_back(0);
            num.push_back(__gcd(ele[0],ele[1]));
            num[0]=ele[0]/num[1];
        }
        val.push_back(num[0]);
        val.push_back(num[1]);
        for(j=1;j<l;j++)
        {
            num.push_back(ele[j]/num[j]);
            val.push_back(num[j+1]);
        }

        sort(val.begin(),val.end());

        n=val.size();
        ar.push_back(val[0]);
        for(j=1;j<n;j++)
            if(val[j]!=val[j-1])
                ar.push_back(val[j]);

        map <unsigned long long,char> mp;
        for(j=0;j<26;j++)
            mp[ar[j]]='A'+j;
        cout<<"Case #"<<i+1<<": ";
        n=num.size();
        for(j=0;j<n;j++)
            cout<<mp[num[j]];
        cout<<"\n";
    }

    return 0;
}
