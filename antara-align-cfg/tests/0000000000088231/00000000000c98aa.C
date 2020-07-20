#include<stdio.h>
int main(){
    int i=0,n,b,len=0,m,q,j;
    scanf("%d",&q);
    scanf("%d",&n);
    m=n;
    while(m!=0){
        m=m/10;
        len++;
    }
    for(j=0;j<q;j++){
        for(i=1;i<n;i++){
            b=n-1;
            while(len!=0){
                if((b/(10*len))!=4){
                    printf("%d %d",i,b);
                    len--;
                    
                }
            }
        }
    }
    return 0;
}