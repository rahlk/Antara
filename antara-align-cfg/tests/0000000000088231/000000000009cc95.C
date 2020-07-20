#include<stdio.h>
#include<math.h>
int main(void){
    int t,n[100],a[100],b[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n[t]);
        split4(n[t],&a[i],&b[i]);
    }
    for(int i=0;i<t;i++){
        printf("Case #%d: %d %d\n",i+1,a[i],b[i]);
    }
}
void split4(int n,int* a,int* b){
    int p=0,t=0;
    *a=0,*b=0;
    while(n>0){
        p = n%10;
        n = n/10;
        if(p==4){
            *a=*a+2*pow(10,t);
            *b=*b+2*pow(10,t);
        }
        else
            *a=*a+p*pow(10,t);
        t++;
    }
}
