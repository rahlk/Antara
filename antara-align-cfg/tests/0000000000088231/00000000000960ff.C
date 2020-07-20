#include<stdio.h>
int check_digit(long long int);
int check_digit(long long int a)
{
    int i;
    while(a>0)
    {
        if(a%10==4)
        {
            return 0;
        }a=a/10;
    }
    return 1;
}
void divide(int t,long long int a)
{
    long long int x,c=0,i=a*3/4,j=1;
    for(;i<a;i++)
    {
        if((check_digit(i)==1)
        {
        if(check_digit(a-i)==1)
        {
            c++;x=i;
        }
        }
        if(c==1)
        break;
    }
    if(c==1)
    printf("Case #%d: %d %d",t,x,(a-x));
}
void main()
{
    int t;//number of test cases
    scanf("%d",&t);
    long long int i=0,n;
 
    while(i<=t)
    {
           scanf("%d",&n);
        divide(i,n);
        i++;
    }
}