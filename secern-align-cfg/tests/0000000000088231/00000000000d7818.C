#include<stdio.h>

int checkBit(int a)
{
    if(a==0) return 1;
    if(a%10==4) return 0;
    else return checkBit(a/10);
    
}

void main()
{
    int N, a, b, i=1, c, j;
    int arr[100];
    scanf("%d\n",&c);
    for(j=0; j<c ; j++)
    {
        scanf("%d\n",&arr[j]);
    }
    j=0;
    while(j!=c)
    {
        N=arr[j];
        for(b=N-1; b>0; b=b-i)
        {
            a = N-b;
            if(checkBit(a) && checkBit(b)) break;
            i = i*10;
        }
        printf("Case #%d: %d %d",j+1,a,b);
        j+=1;
    }
}