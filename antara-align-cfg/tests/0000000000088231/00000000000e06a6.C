#include<stdio.h>
void main()
{
    int N,N1,N2,n,temp;
    int d[10],digit=0;
    printf("Enter the no.");
    scanf("%d",&N);
    temp=N;
    while(temp!=0)
    {
        n=temp%10;
        digit++;
        d[digit]=n;
        temp=temp/10;
    }
    for(i=0;i<digit;i++)
    {
        if(d[i]==4)
        {
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==0)
    {
        printf("Value is %d",N);
    }
    else
    {
        divide(N);
    }
    
}
void divide(int n)
{
    int i;
    if(n/2==0)
    {
        printf("A is %d",n/2);
        printf("B is %d",n/2);
    }
    else
    {
        printf("A is %d",(n+1)/2);
        printf("B is %d",(n/2)-1);
    }
}