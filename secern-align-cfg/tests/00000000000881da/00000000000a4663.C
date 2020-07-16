#include<stdio.h>
void maze(int n,char* c,int j){
    int i;
    char* a;
    a=(char*)malloc(sizeof(char)*(2*n-2));
    for(i=0;i<2*n-2;i++){
        if(c[i]=='E')
            a[i]='S';
        else
            a[i]='E';
    }
    printf("Case #%d: ",j);
    for(i=0;i<2*n-2;i++)
        printf("%c",a[i]);
    printf("\n");
}
int main(){
    int i,t,n;
    char* c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        c=(char*)malloc(sizeof(char)*(2*n-2));
        scanf("%s",c);
        maze(n,c,i);
    }
}