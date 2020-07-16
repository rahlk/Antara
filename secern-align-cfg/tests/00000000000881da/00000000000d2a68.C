#include<stdio.h>
#include<string.h>
int main(){
    long int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        long int n1,j;
        scanf("%d",&n1);
        char s[(2*n1)-2];
        scanf("%s",s);
        char out[strlen(s)];
        printf("Case #%d: ",i+1);
        for(j=0;j<strlen(s);j++){
            if(s[j]=='E')out[j]='S';
            else out[j]='E';
            printf("%c",out[j]);
        }
        printf("\n");
    }
    return 0;
}
