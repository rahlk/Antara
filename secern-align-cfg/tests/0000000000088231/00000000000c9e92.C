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
int sum(int n)
{
    int i,j, res=0;
    res=replace(n);
    for(i=1;i<n;i++)
    {
            if((res+i)==n)
             return i;
            else
                break;
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
        printf("Case #%d: %d %d\n",i+1,r,s);
        
    }
    return (0);
}
 