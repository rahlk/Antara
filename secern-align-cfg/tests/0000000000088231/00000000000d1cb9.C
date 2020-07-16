#include<stdio.h>
int main()
{
    int t,i,j=1,n,rem,b,num;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        num=n;b=n;j=1;
        while(num>0)
        {
        	rem=num%10;
        	if(rem==4)
        	{
        		if(j==0)
				  {
				  	n=n-1;
				  }
				else
				{
					n=n-j;
				}
			}
			num=num/10;
			j=j*10;
		}
		if(b==n)
		 printf("Case #%d: %d 1",i+1,b-1);
		else
		 printf("Case #%d: %d %d",i+1,b-n,n);
    }
    return 0;
}
