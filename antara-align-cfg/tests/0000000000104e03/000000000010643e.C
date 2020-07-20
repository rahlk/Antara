#include<stdio.h>
int main(){
    int t,r,c,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&r,&c);
        if(r==c)
            printf("Case #%d: IMPOSSIBLE\n",i);
        else{
            printf("Case #%d: POSSIBLE\n",i);
            for(j=1;j<=r;j++){
                for(k=1;k<=c;k++)
                    printf("%d %d\n",j,k);
            }}}
}