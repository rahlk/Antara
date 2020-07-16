#include<stdio.h>
int main()
{
    int t;
    long int i,j,k,a,b,flag,flag1;
    long int n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        
        flag1=0;
        scanf("%ld",&n);
        for(j=n/2;j<=n;j++)
        {
            a=j;
            flag=0;
            while(a)
            {
                b=a%10;
                if(b==4)
                {
                    flag++;
                    break;
                }
                a=a/10;
            }
            
            if(flag==0)
            {
                    a=n-j;
                     flag=0;
                     while(a)
                     {
                         b=a%10;
                         if(b==4)
                         {
                             flag++;
                             break;
                         }
                         a=a/10;
                     }
                     if(flag==0)
                     {
                         
                            printf("Case #%ld: %ld %ld\n",i,j,n-j);
                            flag1=1;
                            break;
                         
                     }
                
                if(flag1==1)
                    break;
            }
            
        }
    }
    return 0;
}