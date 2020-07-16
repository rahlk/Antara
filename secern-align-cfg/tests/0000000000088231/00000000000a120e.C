#include<stdio.h>
void Njamcoins(int n,int j){
    int i=1;
    int* a;
    a=(int*)malloc(sizeof(int)*2);
    a[1]=0;
    a[0]=n;
    while(n!=0){
        if(n%10==4){
            a[0]=a[0]-1*i;
            a[1]=a[1]+i;
        }
        i=i*10;
        n=n/10;
    }
    printf("Case #%d: %d %d\n",j,a[0],a[1]);
}
int main(){
    int n,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        Njamcoins(n,i+1);
    }
}