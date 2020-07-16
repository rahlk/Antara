#include <stdio.h>
#include<string.h>
int main()
{
   // printf("Hello World");
   int tc;
   scanf("%d",&tc);
   int tcc=1;
   while(tcc<=tc)
   {
    char str[100000];
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    int i,j,arr[10][10],vis[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                arr[i][j]=0;
                vis[i][j]=0;
            }
    }
    int len=0;
    int iv,jv;
    i=0,j=0,iv=0;jv=0;
    printf("Case #%d: ",tcc);
    while(str[len])
    {
        if(arr[i][j]==vis[iv][jv])
        {
            if(str[len]=='E')
            {
                arr[i][++j]=1;
                vis[++iv][jv]=1;
                printf("S");
            }
            else
            {
                arr[++i][j]=1;
                vis[iv][++jv]=1;
                printf("E");
            }
        }
        else
        {
            if(str[len]=='E')
            {
                arr[i][++j]=1;
                vis[iv][++jv]=1;
                printf("E");
            }
            else
            {
                arr[++i][j]=1;
                vis[++iv][jv]=1;
                printf("S");
            }
        }
        len++;
    }
    printf("\n");
    tcc++;
   }
    return 0;
}
