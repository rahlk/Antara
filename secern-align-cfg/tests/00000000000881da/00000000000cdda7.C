#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    scanf("%d",&t);
    int n;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        char *str;
        gets(str);
        printf("Case #%d: ",i+1);
        for(int j=0;j<strlen(str);j++)
        {
            if(str[j]=="E")
                printf("S");
            else if(str[j]=="S")
                printf("E");
        }
        printf("\n");
        
    }
    return 0;
}