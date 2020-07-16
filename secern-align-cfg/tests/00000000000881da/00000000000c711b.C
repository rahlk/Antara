#include<stdio.h>
int main(){
    int t,x=1,i;
    for(scanf("%d",&t);t>0;t--,x++){
        int n;
        char ch;
        scanf("%d",&n);
        scanf("%c",&ch);
        char str[2n],p[2n];
        scanf("%s",str);
        for(i=0;i<2*(n-1);i++){
            if(str[i]=='S'){
                p[i]='E';
            }
            else{
                p[i]='S';
            }
        }
        p[i]='\0';
        printf("Case #%d: %s",x,p);
    }
    return 0;
}