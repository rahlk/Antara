#include<stdio.h>
int main()
{
    int t,r,c,i,j,r1,c1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&r,&c);
        for(i=1;i<r;i++)
        {
            if(i+2!=c&&i+1!=r)
            printf("%d%d",i+1,i+2);
        }
    }
}