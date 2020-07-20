#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
char h;
scanf("%c",&h);
for(int i=0;i<T;i++){
    int n;
    scanf("%d",&n);
    printf("Case #%d: ",i+1);
    char s[2*n-2];
    scanf("%s",s);
    for(int j=0;j<2*n-2;j++){
        if(s[j]=='S') printf("E");
        else printf("S");
    }
    printf("\n");
}
}