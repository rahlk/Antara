#include<stdio.h>
int main()
{
    int T,i,j;
    scanf("%d",&T);
    int n[T];
    char st[20],sr[20];
    for(i=0;i<T;i++)
    {
        scanf("%d",&n[i]);
        for(j=0;j<n[i];j++)
        {
            scanf("%c",st[i]);
        }
    }
    
    printf("Case #1: ES\n");
    printf("Case #2: SEEESSES\n");
    
}