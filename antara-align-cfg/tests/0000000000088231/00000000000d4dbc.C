#include<stdio.h>

int checkBit(int a)
{
    if(a==0) return 1;
    if(a%10==4) return 0;
    else return checkBit(a/10);
    
}

void main()
{
    int N, a, b, i=1, c, j=0;
    int arr[100];
    scanf("%d\n",&c);
    while(--c)
    {
        scanf("%d\n",&arr[j]);
        j++;
    }
    
    while(c!=j+1)
    {
        N=arr[c];
        for(b=N-1; b>0; b=b-i)
        {
            a = N-b;
            if(checkBit(a) && checkBit(b)) break;
            i = i*10;
        }
        printf("Case #%d: %d %d",c+1,a,b);
        c+=1;
    }
}