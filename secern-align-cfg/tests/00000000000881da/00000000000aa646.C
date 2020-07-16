#include<string.h>
#include<stdio.h>
int main(){
    int t,n,i,j,k,l;
    char lp[1000],mp[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%s",lp);
        k=0;
        for(i=0;i<2*n-2;i++){
            if(lp[i]=='E'){
                mp[k]='S';
            }
            else{
                mp[k]='E';
            }
            k++;
        }
        for(i=0;i<2*n-2;i++){
            printf("%c",mp[i]);
        }
    }
return 0;
}
