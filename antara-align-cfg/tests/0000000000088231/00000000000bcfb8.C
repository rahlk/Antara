#include <stdio.h>
int check(int x,int y)
{
	int p,q,flag=0;
	while(x>0 || y>0)
	{
		p=x%10;
		q=y%10;
		if(p==4 || q==4)
			flag++;
		x/=10;
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
        for(i=n/3;i<2*n/3;i++)
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