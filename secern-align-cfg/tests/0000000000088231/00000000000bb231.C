#include <stdio.h>
#include <stdlib.h>
int test(int a,int b)
{
    int k,l;
    while(a!=0 || b!=0)
    {
        k=a%10;
        l=b%10;
        if(k==4 || l==4)
        {
            return -1;
        }
        a=(a-k)/10;
        b=(b-l)/10;
    }
    return 0;
}
int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
	int a,b,i,j,k;
	for(i=0;i<=n;i++)
	{
	    a=n-i;
	    b=i;
		if(test(a,b)==0 )
		{
		    break;
		}
	}
	if (b==0)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d %d", a ,b);
    }

    return 0;
}

