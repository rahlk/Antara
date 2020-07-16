#include<string.h>
#include<stdio.h>
int main(){
    int t,n,i,j,k,l;
    char lp[1000],mp[1000][1000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%s",lp);
        k=0;
        for(j=0;j<2*n-2;j++){
            if(lp[j]=='E'){
                mp[i][k]='S';
            }
            else{
                mp[i][k]='E';
            }
            k++;
        }
    }
    for(i=0;i<t;i++){
       printf("#%d: ",i+1);
       for(l=0;l<2*n-2;l++){
          printf("%c",mp[i][l]);
       }
        printf("\n");
     }

return 0;
}