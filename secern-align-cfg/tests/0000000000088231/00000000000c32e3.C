#include<stdio.h>
void main()
{
    int N[10],a[20],b[20],i,s;
    printf("enter the total ammount\n");
    scanf("%d",&N);
    for(i=0;i<N[i];i++)
    {
        s=a[i]+b[i];
        if(N[i]==s)
        printf("a[i]=%d,b[i]=%d");
        else
        i=i+1;
    }
}