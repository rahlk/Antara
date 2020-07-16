#include<stdlib.h>
#include<conio.h>

printf("enter no of test cases \n");
int t,n,i,j,k;
int a,b,f;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    printf("enter the no\n");
    scanf("%d",&no);
    //while(no!=0)
    //{
    //}
    for(j=0;j<1000;j++)
    {
        if(f==1)
        {
            break;
        }
        if(j==4)
        continue;
        else
        {
            for(k=0;k<1000;k++)
            {
                if(j==4)
                break;
                else
                {
                    if(j+k==no)
                    {
                    a=j;
                    b=k;
                    f=1;
                    break;
                    }
                }
            }
        }
    }
    printf("CASE #%d:%d %d",(j+1),a,b);
}