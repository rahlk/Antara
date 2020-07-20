#include<stdio.h>
#define N 50011

char c[N];

int main()
{
    int n,m,i,j;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        printf("Case #%d: ",i);
        scanf("%s",&c);
        for(j=0;j<m*2-2;j++){
            if(c[j]=='E') printf("S");
            else printf("E");
        }
        printf("\n");
    }
    return 0;
}
