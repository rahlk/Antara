#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	int ps=1;
	while(tc--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='E')
			s[i]='S';
			else
			s[i]='E';
		}
		cout<<"Case #"<<ps<<": "<<s<<endl;
		ps++;
	}
	return 0;
}