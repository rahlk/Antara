#include<stdio.h>
int main()
{
    int t,i=1,n,p[20],a=1,E,S,count=0,num;
    printf("enter the no. of cases");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("enter the length");
        scanf("%d",&n); 
        for(i=1;i<=n;i++)
        {
            while(num<=n)
            {
                count=0;
                i=2;
                while(i<=num/2)
                {
                    if(num%i==0)
                    {
                        count++;
                        break;
                    }
                    i++;
                }
                if(count==0 && num!=1)
                {
                    printf("%d",num);
                }
                num++;
            }
            return 0;
            }        
       }   
            printf("enter the values");
            scanf("%d",&p[a]);
          
}        