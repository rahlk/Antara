#include<stdio.h>
#include<string.h>
int main()
{
    int t,i=1;scanf("%d",&t);
    while(t--)
    {
        int n;scanf("%d",&n);
        char s[n];scanf("%s",s);
        printf("Case #%d: ",i++);
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='S')
            {
                printf("E");
            }
            else {printf("S");}
        }printf("\n");
    }
}