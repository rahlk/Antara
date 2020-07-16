#include<stdio.h>
int main(){
    int t,i,j,p,n,a,b=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        p=n;
        j=1;
        b=0;
        while(p!=0){
            a=p%10;
            if(a==4){
                n=n-(j);
                b=b+j;
            }
            j=j*10;
            p=p/10;
            printf("*%d %d*",a,j);
        }
        printf("Case #1: %d %d\n",n,b);
    }
}