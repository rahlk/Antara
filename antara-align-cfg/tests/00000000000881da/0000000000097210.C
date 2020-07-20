#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int num=0;
    char data[500010];
    
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&num);
        scanf("%s",data);
        printf("Case #%d: ",i+1);
        for(int j=0 ; j<strlen(data) ; j++)
        {
            printf("%c",data[j]=='S' ? 'E':'S');
        }
        printf("\n");
    }
}
