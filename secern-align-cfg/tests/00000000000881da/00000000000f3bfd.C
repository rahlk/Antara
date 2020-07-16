#include<stdio.h>
int main(){
int i,t,j;
scanf("%d",&t);
int n[t];
for(i=0;i<t;i++){
scanf("%d",&n[i]);
char p[t][n[i]],out[t][n[i]];
scanf("%s",p[i])
}
for(i=0;i<t;i++){
for(j=0;j<(2*n[i]-2);j++){
    if(p[i][j]=='S')
        out[i][j]='E';
    else
        out[i][j]='S';
}
}
for(i=0;i<t;i++){
    printf("Case #%d: %s",i+1,out[i]);
    if(i<(t-1))
         printf("\n");
    }
return 0;
}
