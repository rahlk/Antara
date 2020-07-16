#include<stdio.h>
int main()
{
    int t,n,i,j,k,a,b,flag,flag1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        
        flag1=0;
        j=1;
        scanf("%d",&n);
        while(j)
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
                for(k=1;k<=j;k++)
                {
                     a=k;
                     flag=0;
                     while(a)
                     {
                         b=a%10;
                         if(b==4)
                             flag++;
                         a=a/10;
                     }
                     if(flag==0)
                     {
                         if(j+k==n)
                         {
                            printf("Case #%d: %d %d\n",t,j,k);
                            flag1=1;
                            break;
                         }
                     }
                }
                if(flag1==1)
                    break;
            }
            j++;
        }
    }
    return 0;
}