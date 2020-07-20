#include<stdio.h>
#include<string.h>
int main(){
    int t,i,j;
    scanf("%d",&t);
    int a[t];
    char s[t][10000];
    for(i=0;i<t;i++){
        scanf("%d %s",&a[i],&s[i]);
    }
    for(i=0;i<t;i++){
        printf("Case #%d: ",i+1);
        for(j=0;j<2*a[i]-2;j++){
            if(s[i][j]=='E'){
                printf("S");
            }else{
                printf("E");
            }
        }
        printf("\n");
    }
    return 0;
}