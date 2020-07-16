#include<stdio.h>
int replace(int x)
{
	int res=0,mul=1,r;
	while(x)
	{	
		r=x%10;
		if(r==4)
		res=res+2*mul;
		else
		res=res+r*mul;
		mul*=10;
		x=x/10;
	}
	return res;
}

int main()
{
    int t,n,i,j,a,r,;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        r=replace(a);
        printf("Case #%d: %d %d\n",i+1,r,a-r);
        
    }
    return (0);
}
 