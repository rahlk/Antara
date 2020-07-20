#include<stdio.h>
#include<stdlib>
int main()
{
    int T, N, i, j=0,A,B;
    char buff[20]=0;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%d", N);
        itoa(N, buff, 10);
        j=0;
        while(buff[j]!='\0')
        {
            if(buff[j]=='4')
                biff[j]='2';
        }
        A=atoi(buff);
        memset(buff,'\0',20);
        B=N-A;
        printf("Case #%d: %d %d\n",i+1, A, B);
    }
    return 0;
}