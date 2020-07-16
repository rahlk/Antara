#include<stdio.h>
#include<math.h>
 int main()
 {
    int N,T,i,j,c,sum=0,x;
    char a[10];
    scanf("%d",&T);
    if(T<=100&&T>=1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d",&N);
            sprintf(a,"%d",N);
            for(j=strlen(a)-1;j>=0;j--)
            {
                if(a[j]=='4')
                {
                    a[j]='3';
                    sum+= pow(10,strlen(a)-j-1);
                }
            }
            sscanf(a,"%d",&x);
            printf("Case #%d: %d %d\n",i,x,sum);
            sum=0;
        }
    }
 }

