#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        char s[2*n-1];
        scanf("%s",s);
        int j;
        char ch;
        printf("Case #%d: ",i);
        for(j=0;j<strlen(s);j++)
        {
            ch=s[j];
            if(ch=='S')
                printf("E");
            else
                printf("S");
            do
            {
                j++;
                if(j==strlen(s))
                break;
                printf("%c",ch);
                
            
            }while(s[j]==ch&&j<strlen(s));
            
        }
        printf("\n");
    }
    return 0;
}