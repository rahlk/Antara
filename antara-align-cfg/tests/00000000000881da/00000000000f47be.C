#include<stdio.h>
int main(){
int i,t,j;
scanf("%d",&t);
char out[t][100000],p[100000];
int n;
for(i=0;i<t;i++){
scanf("%d",&n);
scanf("%s",p);
for(j=0;j<(2*n-2);j++){
    if(p[j]=='S')
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
