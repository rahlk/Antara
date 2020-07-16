#include<iostream>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		char s[2*n-2],an[2*n-2];
		for(int i=0;i<(2*n-2);i++)
		cin>>s[i];
		for(int i=0;i<(2*n-2);i++)
		{
			if(s[i]=='E')
			an[i]='S';
			if(s[i]=='S')
			an[i]='E';
		}
		for(int i=0;i<(2*n-2);i++)
		cout<<an[i];
		cout<<endl;
	}
	return 0;
}