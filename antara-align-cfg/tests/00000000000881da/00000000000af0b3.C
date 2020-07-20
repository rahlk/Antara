#include<stdio.h>
int main(){
    int i,j=0,k,l,m,n,t;
    int lp[2],mp[2];
    scanf("%d",&t);
    while(j++<t){
        scanf("%d",&n);
        l = 2*n-2;
        char lm[l],mm[l];
        scanf("%s",lm);
        lp[0] = lp[1] = mp[0] = mp[1] = 0;
        for(i=0;i<l;i++){
            mm[i] = lm[i] == 'E'?'S':'E';
        }
        printf("Case #%d: ",j);
        k=0;
        while(l--)printf("%c",mm[k++]);
        printf("\n");
    }
}
