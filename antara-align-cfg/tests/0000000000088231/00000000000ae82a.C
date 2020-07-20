#include<stdio.h>
#include<stdlib.h>
typedef unsigned u;
char A[111],B[111];
void prin(char*S,u i)
{
    u j;
    for(j=-1;++j<i&&S[j]=='0';);
    for(--j;++j<i;)putchar(S[j]);
    return;
}
int main()
{
    u t=0,T,i=0;char c;
    for(scanf("%u",&T);t++<T;i=0)
    {
        while((c=getchar())<'0');
        do
        {
            if(c=='4')A[i]=B[i]='2';
            else{A[i]=c;B[i]='0';}
            ++i;
        }
        while((c=getchar())>='0');
        printf("Case #%u: ",t);
        prin(A,i);putchar(' ');prin(B,i);putchar('\n');
    }
    return 0;
}