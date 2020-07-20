#include<stdio.h>
#include<string.h>
int main(){
    long int n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        long int n1,j;
        scanf("%ld",&n1);
        char s[(2*n1)-2],out[(2*n1)-2];
        scanf("%s",&s);
        for(j=0;j<strlen(s);j++){
            if(s[j]=='E')out[j]='S';
            else out[j]='E';
        }
        printf("Case #%d: %.*s\n",i+1,(2*n1)-2,out);
    }
    return 0;
}
