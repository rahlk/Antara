#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j;
    char c[1000][1000];
    int a[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        scanf("%s",c[i]);
        int j=0;
        while(j<a[i]){
            if(c[i][0]!=c[i][2*a[i]-3-j]){
                if(c[i][0]=='S'){
                    c[i][0]='E';
                    c[i][2*a[i]-3-j]='S';
                }
                else{
                    c[i][0]='S';
                    c[i][2*a[i]-3-j]='E';
                }
                break;
            }
            j++;
        }
    }
    for(i=1;i<=t;i++){
        printf("Case #%d: ",i);
        printf("%s",c[i-1]);
        printf("\n");
    }
}