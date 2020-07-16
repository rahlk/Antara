#include<stdio.h>
void main()
{
    long int T,arr[T],a,b,i;
    scanf("%li",&T);
    for(i=0;i<T;i++)
    scanf("%li",&arr[i]);
    for(i=0;i<T;i++)
    {
        a=arr[i]/8;
        b=arr[i]%8;
        printf("Case #%li: %li %li",i+1,a,b);
    }
}