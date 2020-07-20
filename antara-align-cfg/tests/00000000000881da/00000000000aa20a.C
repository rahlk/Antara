#include<string.h>
#include<stdio.h>
main(){
    int t,n,i,j,k,l;
    char lp[1000],mp[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%d",lp);
        k=0;
        for(i=0;i<2*n-2;i++){
            if(lp[i]=='E'){
                mp[k]='S';
            }
            else{
                mk[k]='E'
            }
            k++;
        }
        for(i=0;i<2*n-2;i++){
            print("%c",mp[i])
        }
    }
}