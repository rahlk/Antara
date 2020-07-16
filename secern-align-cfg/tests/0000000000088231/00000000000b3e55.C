#include<cstring>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i;
	cin >> t;
	long long int j;
	string a[t],A[t],B[t];
	for(i=0;i<t;i++)
	cin >> a[i];
	for(i=0;i<t;i++)
	{
		
		for(j=0;a[i][j]!='\0';j++)
		{	
			if(a[i][j]=='4')
			{
				a[i][j]='2';
				B[i][j]='2';
			}
			else
			{
				B[i][j]='0';
			}	
		}
		A[i]=a[i];

	}
	for(i=0;i<t;i++)
	{
		cout << "Case #" << i+1 << ": " << A[i] << " ";
		for(j=0;a[i][j]!='\0';j++)
		{	
			cout << B[i][j];
		}
		cout << endl;
	}
}
