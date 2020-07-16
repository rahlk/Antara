#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int num(int arr[])
{
    int i,n=0;
    for(i=0;i<sizeof(arr);i++)
    {
        n+=arr[i]*(10^(sizeof(arr)-i-1));
    }
    return n;
}
int main()
{
    int i,T,j,l1,l2;
    scanf("%d",&T);
    int N[T],A[T],B;
    for(i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
    }
    A[T]=N[T];
    for(i=0;i<T;i++)
    {
        for(j=0;j<sizeof(A);j++){
        if(A[j]=='4')
            A[j]=1;
        }
    l1=num(A);
    l2=num(N);
    B=l2-l1;
    printf("Case #%d: %d %d \n",(i+1),l1,B);
    }
    
    return 0;
}


