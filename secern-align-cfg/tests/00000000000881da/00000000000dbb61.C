#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int t,i,j;
    char c[1000][1000];
    long int a[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%ld",&a[i]);
        scanf("%s",c[i]);
        for(j=0;j<(2*a[i]-2);j++){
            if(c[i][j]=='S'){
                c[i][j]='E';
            }
            else{
                c[i][j]='S';
            }
        }
    }
    for(i=1;i<=t;i++){
        printf("Case #%d: ",i);
        printf("%s",c[i-1]);
        printf("\n");
    }
}