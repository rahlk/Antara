#include<stdio.h>
int main()
{
    long int T,*a,i,j,p,x,z=1;
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<T;i++)
    {
        for(j=a[i]-1;j>=1;j--)
        {
            int flag1=0;
            p=j;
            while(p>0)
            {
              x=p%10;
              if(x==4)
              flag1=1;
              p/=10;
            }
            if(flag1==0)
            {
                int flag2=0;
                p=a[i]-j;
                while(p>0)
                {
                    x=p%10;
                    if(x==4)
                    flag2=1;
                    p/=10;
                }
                if(flag2==0)
                {
                printf("Case #%ld: %ld %ld",z++,j,a[i]-j);
                break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
    