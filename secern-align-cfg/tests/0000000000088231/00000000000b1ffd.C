#include<stdio.h>
int main()
{
    int n,f,k,i,j,c,s,r,r1,t,h=0;
    scanf("%d",&n);
    label:while(n--)
    {
        scanf("%d",&k);
        for(i=1;i<=k;i++)
          {
            for(j=1;j<=k;j++)
             {
                 c=0;
                 f=0;
                if(i+j==k)
                {
                    t=i;
                    s=j;   
                    while(t!=0)
                    {
                     r=t%10;
                     if(r==4 )
                       {
                         c++;  
                         break;
                       }      

                     t=t/10;
                     }
                     while(s!=0)
                    {
                     r=s%10;
                     if(r==4 )
                       {
                         f++;  
                         break;
                       }  
                         s=s/10;
                     }
                    if(c==0 && f==0)

                    {
                    h++;        
                    printf("Case #%d: %d %d",h,i,j);
                    printf("\n");
                    goto label;
                    }

                }

             }
          }
    }
}   


