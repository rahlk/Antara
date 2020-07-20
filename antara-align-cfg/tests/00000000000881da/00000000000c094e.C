#include<stdio.h>

int main()
{
    int m,t;
    scanf("%d",&t);
    m=t;
    
    while(t--)
    {
    int i,n;
    scanf("%d",&n);
   
    char s[(2*n)-2];
    scanf("%s",s);
   printf("Case #%d: ",m-t);
    for(i=0;i<(2*n)-2;i++)
        {
            if(s[i]=='E')
            printf("S");
            if(s[i]=='S')
            printf("E");
        }
    printf("\n");
    }
    return 0;
}