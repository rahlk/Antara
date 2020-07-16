#include<stdio.h>
int main()
{
    int t,i,j,m=1;
    long long unsigned int n[100],x[100],a=0;
    scanf("%d", &t)==1;
    for(i=0;i<t;i++)
    {
        scanf("%llu", &n[i])==1;
    }
     for(i=0;i<t;i++)
    {
        x[i]=n[i];
        while(x[i]!=0)
        {
            int rem=x[i]%10;
            if(rem==4)
            {
                a=a+3*m;
            }
	    else
	    {
		a=a+rem*m;
	    }
	    m*=10;
            x[i]=x[i]/10;
        }
        printf("Case #%d: %llu %llu \n",i+1,a,(n[i]-a));
	a=0;
	m=1;   
    }
    
return 0;
}