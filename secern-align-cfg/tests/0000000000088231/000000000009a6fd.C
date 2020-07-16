#include<stdio.h>
void split(int x)
{
    if(x==4)
    printf("2 2");
    else if(x<1000 && x%10==4)
    {
        printf("%d ",x-5);
        printf("5");
    }
}
void main()
{
int n,t;
scanf("%d",&t);
while(t>0)
{
    scanf("%d",&n);
    split(n);
    t--;
}