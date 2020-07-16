#include<stdio.h>
int res=0;
int replace(int x)
{
	int mul=1,r;
	while(x%10>0)
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
int sum(int n)
{
    int i,j;
    replace(n);
    for(i=res;i>0;i--)
    {
            if((res-n)!=i)
                break;
            else
                return j;
    }
}
int main()
{
    int t,n,i,j,a[20],r,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        r=replace(a[i]);
        s=sum(a[i]);
        printf("Case #%d: %d %d\n",r,s);
        
    }
    return (0);
}
 