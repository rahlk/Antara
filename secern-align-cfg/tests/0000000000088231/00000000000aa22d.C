#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(int);
void process(int ,int );
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        process(a[i],i);
    }
    return 0;
}
void process(int a,int g)
{
	int i,j;
	i=1;
	j=a-1;
	for(i=1;i<j;i++,j--)
	{
	    char* p1,p2;
	    char tmp1[1000],tmp2[1000];
	    sprintf(tmp1,"%d",i);
	    sprintf(tmp2,"%d",j);
	    p1=strchr(tmp1,'4');
	    p2=strchr(tmp2,'4');
		if(p1==NULL && p2==NULL)
		{
			printf("Case #%d: %d %d\n",g+1,i,j);
			break;
		}
	}
}
int check(int a)
{
	int i;
	for(i=a;i>0;i=i/10)
	{
		if(i%10==4)
		{
			return 0;
		}
	}
	return 1;
}