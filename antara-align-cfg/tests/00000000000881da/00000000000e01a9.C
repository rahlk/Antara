#include <stdio.h>

int main()
{
    long int t,i,j;
    char c[100][1000];
    long int a[1000];
    scanf("%ld",&t);
    for(i=0;i<t;i++){
        scanf("%ld",&a[i]);
        scanf("%s",c[i]);
        for(j=0;j<(2*a[i]-2);j++){
            if(c[i][j]=='S'){
                c[i][j]='E';
            }
            else if(c[i][j]=='E'){
                c[i][j]='S';
            }
        }
    }
    for(i=1;i<=t;i++){
        printf("Case #%ld: ",i);
        printf("%s",c[i-1]);
        printf("\n");
    }
}