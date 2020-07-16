#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,A,B;
    printf("enter 3 int:");
    scanf("%d %d %d",&A,&B,&N);
    if(A==4)
    return 0;
    else if(B==4)
    return 0;
    else if(A+B==N)
        printf("%d %d %d",A,B,N);
}
