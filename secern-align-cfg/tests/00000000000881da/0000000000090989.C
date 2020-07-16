#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int to=t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char L[2*n-1],O[2*n-1];
        scanf("%s",L);
        int x=0,y=0,i=0;
        printf("Case #%d: ",to-t);
        for(i=0;i<2*n-2;i++)
        {
            if(L[i]=='E') x++;
            else x--;
            if(x==0)
            {
                int j;
                for(j=i;j>=y;j--) printf("%c",L[j]);
                y=i+1;
            }
        }
        printf("\n");
    }
}
