#include<stdio.h>
#include<string.h>
char str[2000];
char str1[2000];
int a[1000][1000];
int n;
void path(int i,int j,int n,int c,int prev5)
{
	if(i==n-1 && j==n-1)
	{
		printf("%s",str1);
		
		
		
		
		
		printf("\n");
	}
	if(i<n-1 && j<n-1)
	{
		if(!a[i][j+1] || !a[i][j])
		{
			str1[c]='S';
			if(a[i][j])
			path(i,j+1,n,c+1,1);
			else
			path(i,j+1,n,c+1,0);
		}
		if(!a[i+1][j] || !a[i][j])
		{
			str1[c]='E';
			if(a[i][j])
			path(i+1,j,n,c+1,1);
			else
			path(i+1,j,n,c+1,0);
		}
	}
	if(i<n-1 && j==n-1)
	{
		if(!a[i+1][j] || !a[i][j])
		{
			str1[c]='E';
			if(a[i][j]=1)
			path(i+1,j,n,c+1,1);
			else
			path(i+1,j,n,c+1,0);
		}
		
	}
	if(i==n-1 && j<n-1)
	{
		if(!a[i][j+1] || !a[i][j])
		{
			str1[c]='S';
			if(a[i][j])
			path(i,j+1,n,c+1,1);
			else
			path(i,j+1,n,c+1,0);
		}
	}
}
main()
{
	int l,t,i,t1=1,p=0,q=0;
	scanf("%d",&t);
	while(t1<=t)
	{	
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j]=0;
			}
		}
		scanf("%s",str);
		l=strlen(str);
		a[0][0]=1;
		for(i=0;i<l;i++)
		{
			if(str[i]=='S')
			{
				a[p][q+1]=1;
				q++;
			}
			else
			{
				a[p+1][q]=1;
				p++;
			}
		}
		path(0,0,n,0,1);
		t1++;
	}
}