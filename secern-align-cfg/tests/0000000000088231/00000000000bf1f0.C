#include<stdio.h>
long int A, B;
void compute(int n)
{
    if(n%2 == 0)
        A = B = n/2;
    else 
    {
        A = n/2;
        B = A + 1;
    }    
}
int main()
{
    long long int n, t, i;
    scanf("%d",&t);
    
    for(i = 0; i < t; i++)
    {
        scanf("%d",&n);
        compute(n);
        printf("\nCase #%d : %d %d",i+1,A, B);
    }
    printf("\n");
}