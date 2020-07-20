#include<stdio.h>
//#include<conio.h>
void main(){

printf("enter no of test cases \n");
int t,n,i,j,k;
int num,temp;
int no;
int l;
int a,b,f;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    printf("enter the no\n");
    scanf("%d",&no);
    f=0;
    temp=no;
    while(temp!=0)
    {
        num=temp%10;
        if(num==4)
        {
            f=0;
            l=f;

            break;
        }
        else
        {
            f=1;
            l=f;
        }
        temp=temp/10;
    }
    for(j=2;j<1000;j++)
    {
        if(f==1)
        {
            break;
        }
        if(j==4)
        continue;
        else
        {
            for(k=2;k<1000;k++)
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

    if(l==0&&f==1)
    printf("CASE #%d:%d %d",(i+1),a,b);
    printf("\n");
}
}