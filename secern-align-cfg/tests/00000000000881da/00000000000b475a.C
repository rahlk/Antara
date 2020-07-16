#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,ni;
    char s[1000005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ni);
        scanf("%s",s);
        for(j=0;j<strlen(s);j++)
        {
            if(s[i]=='S')
            {
                printf("E");
            }
            else
            {
                printf("S");
            }
        }
        printf("\n");
        
    }
}
