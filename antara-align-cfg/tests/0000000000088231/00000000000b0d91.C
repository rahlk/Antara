#include<stdio.h>

int main()
{
    int t,n,a,b,i,m,s;
    
    scanf("%d",&t);
   for(i=1;i<=t;i++)
    {    int flag=0,p;
        a=1;
        scanf("%d",&n);
        while(a<=n)
        {
            flag=0;
            b=n-a;
            m=a;
            s=b;
             while(m)
            {
              p=m%10;
              m=m/10;
              if(p==4)
              {
                flag=1;
                break;
               }
            }
                    if(flag!=1)
                    {
                       while(s)
                       {
                         p=s%10;
                         s=s/10;
                        if(p==4)
                         {
                           flag=1;
                           break;
                          }
                       }
                    }
        
        
            
                    if(flag==0)
                    {
                    printf("Case #%d: %d %d\n",i,a,b);
                    break;
                    }
                    else if(flag==1)
                    a++;
                    
        }
     
    }
    return 0;
}
      