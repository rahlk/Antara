#include<stdio.h>
#include<string.h>
int main()
{
    int num,x,z,b,c,i,j,t,p=0,r=0,s=0;
    char a[100],ar[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    p=0,r=0,s=0;
        scanf("%d",&x);
        
        for(j=0;j<x;j++)
        {
            scanf("%s",a);
            ar[j]=a[0];
            
        }
        for(b=0;b<x;b++)
        {
            if(ar[b]=='P')
            p++;
            else if(ar[b]=='R')
            r++;
            else if(ar[b]=='S')
            s++;
        
        if(p!=0 && r!=0 && s!=0)
            {
            printf("Case #%d: IMPOSSIBLE\n",i+1);
           break;
            }
        }
        for(b=0;b<x;b++)
        {
            if(s==0 && p!=0 && r!=0)
            {
                printf("Case #%d: PS\n",i+1);
                break;
            }
           else  if(s!=0 && p==0 && r!=0)
            {
                printf("Case #%d: RP\n",i+1);
                break;
            }
            else if(s!=0 && p!=0 && r==0)
            {
                printf("Case #%d: SR\n",i+1);
                break;
            }
            else if(s!=0 && p==0 && r==0)
            {
                printf("Case #%d: R\n",i+1);
                break;
            }
            else if(s==0 && p!=0 && r==0)
            {
                printf("Case #%d: S\n",i+1);
                break;
            }
            else if(s==0 && p==0 && r!=0)
            {
                printf("Case #%d: P\n",i+1);
                break;
            }
        }
       
    }
    return 0;
}