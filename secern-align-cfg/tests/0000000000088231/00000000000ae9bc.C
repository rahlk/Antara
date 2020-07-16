#include<stdio.h>
int main()
{
    int n,k,i,j,c,h=0,s,r,r1,t;
    scanf("%d",&n);
    label:while(n--)
    {
        scanf("%d",&k);
        for(i=1;i<=k;i++)
          {
            for(j=1;j<=k;j++)
             {
                 c=0;
                if(i+j==k)
                {
                    t=i;
                    s=j;   
                    while(t!=0 && s!=0)
                    {
                     r=t%10;
                     r1=s%10;
                     if(r==4 ||r1==4)
                       {
                         c++;  
                         break;
                       }      
                     else
                     {
                     t=t/10;
                     s=s/10;
                     }
                    } 
                    if(c==0)
                    { 
                        h++;
                    printf("Case #%d:%d %d",h,i,j);
                    goto label;
                    }
                    
                }
                
             }
          }
    }
}