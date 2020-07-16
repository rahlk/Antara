#include<string.h>
#include<stdio.h>
int main(){
int i,t,j,src=0,k,index;
scanf("%d",&t);
int n[t];
char p[t][100000],out[t][100000];
for(i=0;i<t;i++){
scanf("%d",&n[i]);
scanf("%s",p[i]);
}
for(i=0;i<t;i++){
    index=0;
    src=0;
for(j=0;j<((2*n[i])-3);j++){
    if(p[i][j]!=p[i][j+1]){
        for(k=j+1;k>=src;k--){
            out[i][index]=(int)p[i][k];
            index++;
        }
        src=j+2;
        j++;
    }
}
out[i][8]=(int)'\0';
}
for(i=0;i<t;i++){
    printf("Case #%d: %s",i+1,out[i]);
    if(i<(t-1))
         printf("\n");
    }
return 0;
}
