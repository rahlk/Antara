#include<stdio.h>
#include<string.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    for(x=1;x<t+1;x++)
    {   
        long int n,i;
        scanf("%d",&n);
        char s[500000];
        scanf("%s",s);
        printf("Case #%d: ",x);
        for(i=0;i<strlen(s);i++)
            if(s[i]=='S')
                printf("E");
            else
                printf("S");
        
        printf("\n");
        
    }
    
    
    return 0;
}