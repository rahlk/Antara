#include<stdio.h>
#include<string.h>
char str[2000];
char str1[2000];
int a[1000][1000];
int n;
int flag=0;
void path(int i,int j,int n,int c,int t1)
{
	if(i==n-1 && j==n-1 && !flag)
	{
		printf("Case #%d: %s",t1,str1);
		flag=1;
		
		
		
		
		printf("\n");
	}
	if(i<n-1 && j<n-1)
	{
		if(!a[i][j+1] || !a[i][j])
		{
			str1[c]='S';
			path(i,j+1,n,c+1,t1);
		}
		if(!a[i+1][j] || !a[i][j])
		{
			str1[c]='E';
			path(i+1,j,n,c+1,t1);
		}
	}
	if(i<n-1 && j==n-1)
	{
		if(!a[i+1][j] || !a[i][j])
		{
			str1[c]='E';
			path(i+1,j,n,c+1,t1);
		}
		
	}
	if(i==n-1 && j<n-1)
	{
		if(!a[i][j+1] || !a[i][j])
		{
			str1[c]='S';
			path(i,j+1,n,c+1,t1);
		}
	}
}
main()
{
	int l,t,i,t1=1,p=0,q=0;
	scanf("%d",&t);
	while(t1<=t)
	{	
	flag=0;
		for(i=0;i<2000;i++)
		{
			str[i]='\0';
			str1[i]='\0';
		}
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j]=0;
			}
		}
		str[0]='\0';
		scanf("%s",&str[0]);
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
		for(i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		path(0,0,n,0,t1);
		t1++;
	}
}