#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);
    int t=T;
    int N, i, j;
    char str[55000];
    while(T--)
    {
        scanf("%d", &N);
        fflush(stdin);
        scanf("%s", str);
        for(i=0;i<2*N-2;i++)
        {
            if(str[i]=='S')
                str[i]='E';
            else
                str[i]='S';
            //printf("%c", str[i]);
            //str[i+1]='\0';
        }
        //printf("\n");
        printf("Case #%d: %s\n", t-T, str);
    }
}
