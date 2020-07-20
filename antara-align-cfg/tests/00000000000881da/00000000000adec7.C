#include<string.h>
#include<stdio.h>
int main(){
    int t,n,i,j,k,l,m;
    char lp[1000],mp[1000][1000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%s",lp);
        k=0;
        for(j=0,m=2*n-3;j<2*n-2,m>=0;j++,m--){
            if(lp[m]=='E'){
                mp[i][k]='E';
            }
            else{
                mp[i][k]='S';
            }
            k++;
        }
    }
    for(i=0;i<t;i++){
       printf("Case #%d: ",i+1);
       for(l=0;l<2*n-2;l++){
          printf("%c",mp[i][l]);
       }
        printf("\n");
     }

return 0;
}