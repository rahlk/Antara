#include<stdio.h>
int main()
{
    int T,N,i,j;
    char s[20],m[20];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=1;j<=2*N-2)
        {
           scanf("%s",&s[j]);
        }
    }
    m[1]=m[2]=m[3]=m[4]=S;
    m[5]=m[6]=m[7]=m[8]=E;
    for(i=1;i<=8;i++)
    {
        printf("%c",m[i]);
    }
    return 0;
}