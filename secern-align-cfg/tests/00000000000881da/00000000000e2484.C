#include <stdio.h>
#include <string.h>
int main() 
{
    int t,flag=1;
    scanf("%d",&t);
    while(t--)
    {
       char arr[1000000];
       int n;
       scanf("%d",&n);
       scanf("%s",arr);
       int l,j;
       l=strlen(arr);
        printf("Case #%d: ",flag);
        flag++;
        for(j=0;j<l;j++)
        {
            if(arr[j]=='E')
            printf("S");
            else
            printf("E");
        }
        printf("\n");
    }
        
    return 0;
}