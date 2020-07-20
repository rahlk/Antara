#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char t1[100000];
    scanf("%d",&t);
    int i=1;
    for(i=1;i<=t;i++){
        int j,n;
        scanf("%d",&n);
        scanf("%s",t1);
        printf("Case #%d: ",i);
        for(j=0;j<(2*n)-2;j++){
            if(t1[j]=='E')
            printf("S");
            else
            printf("E");
        }
        printf("\n");
    }
}