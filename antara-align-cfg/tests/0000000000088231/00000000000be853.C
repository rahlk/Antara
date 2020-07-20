#include<stdio.h>
int main()
{
    int t,i=1,n,b,a,r,s,count=0,count1=0;
    printf("enter the no. of cases");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("enter the input");
        scanf("%d",&n); 
         while (n>0)
        {
            b=n/2;
            a=n-b;
            r=b%10; 
            b=b/10;
            count=count+1;
            s=a%10;
            a=a/10;
            count1=count1+1;
        }   
        return count;
        return count1;
        
            if(r!=4 && s!=4)
            {
                printf("%d%d",&a,&b);
            }
        while (n>0)
        {
            b=n/4;
            a=n-b;
            r=b%10; 
            b=b/10;
            count=count+1;
            s=a%10;
            a=a/10;
            count1=count1+1;
        }
        return count;
        return count1;
            if(r!=4 && s!=4)
            {
            printf("%d%d",&a,&b); 
            }
      
    }
}