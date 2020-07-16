#include<stdio.h>

int P,N,M,a[100],d[100][100];
int i,j,n=0,b,c,l;
int t;
int main()
{
	clrscr();
    str:

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
	scanf("%d",&a[i]);
    }

    for(l=0;l<t;l++)
    {
	    M=a[l];
	while(M!=0)
	{
		P=M%10;
		M/=10;
		if(P==4)
		{
			n++;
		}
	}
	if(n==0)
	{
		goto str;
	}

	for(i=1,j=N-1;i<=N-1,j>=1;i++,j--)
	{
		if(N==(i+j))
		{
			b=i;
			c=j;
			while(c!=0)
			{
				P=c%10;
				c/=10;
				if(P==4)
				{
					goto end;
				}
			}
			while(b!=0)
			{
				P=b%10;
				b/=10;
				if(P==4)
				{
					goto end;
				}
			}
			d[l][0]=i;
			f[l][1]=j;
			break;
		}
		end:
		printf("\b");
	}
    }

    for(i=0;i<t;i++)
    {
	printf("Case #%d: %d %d",i+1,d[i][0],d[i][1]);
    }
    return 0;
}