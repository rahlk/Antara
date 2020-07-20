#include <stdio.h>
int check(int x,int y)
{
	int p,flag=0;
	while(x>0)
	{
		p=x%10;
		if(p==4)
			flag++;
		x/=10;
	}
	while(y>0)
	{
		p=y%10;
		if(p==4)
			flag++;
		y/=10;
	}
	return flag;
}
int main()
{
    int t,T;
    scanf("%d",&t);
    for(T=1;T<=t;T++)
    {
        int n,a,b,i,c;
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            a=i;
            b=n-i;
            c=check(a,b);
            if(c==0)
            {
            	printf("Case #%d: %d %d\n",T,a,b);break;
			}
        }
    }
    return 0;
}