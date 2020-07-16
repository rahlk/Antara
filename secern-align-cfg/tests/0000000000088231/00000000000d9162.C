#include<stdio.h>
int check(int x);
void main()
{
    int n,i,j;
    int m1,m2;
    int flag;
    printf("Enter no.");
    scanf("%d",&n);
    printf("The combinations are:\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<=i;j++)
    {

        flag=check(i);
        flag=check(j);
        if(flag==1)
        {
            if(i+j==n)
            {
                m1=i;
                m2=j;
                printf("(%d,%d)  ",m1,m2);

            }
        }

    }
    }
}
int check(int x)
{
    int p=1;
    while(x>0)
    {
        if(x%10==4)
        {
            p=0;
            break;
        }
        x/=10;

    }
    return p;
}



