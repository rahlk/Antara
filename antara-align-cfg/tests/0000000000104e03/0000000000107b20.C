#include<stdio.h>
int main(){

int i,j,n,m,p,a,b,x,s[100][100];
scanf("%d",&m);
for(p=0;p<m;p++){
scanf("%d %d",&a,&b);
if(a==b){
    printf("Case #%d: IMPOSSIBLE\n",p+1);
}
    if(a!=b){
        printf("Case #%d: POSSIBLE\n",p+1);

        for(i=1;i<=a;i++){
           for(j=1;j<=b;j++){
              printf("%d %d\n",i,j);
           }
        }
    }
}
return 0;
}
