#include<stdio.h>
int cal(int *a,int *b,int l,int r,int c,int k){
    int i,m1,m2,ma=0,mb=0;
    for(i=l;i<r;i++)
    {
        if(a[i]>ma)
        ma=a[i];
        if(b[i]>mb)
        mb=b[i];
    }
    if(ma>mb)
    m1=ma;
    else
    m1=mb;
    if((m1-m2)<=k)
    c++;
    return c;
}

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        long int n,k,i,j,c=0,x=1;
        scanf("%ld",&n);
        scanf("%ld",&k);
        long int a[n],b[n];
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        for(i=0;i<n;i++)
        scanf("%ld",&b[i]);
        for(i=1;i<n;i++){
            for(j=i;j<n;j++){
                c=cal(a,b,i,j,c,k);
            }
        }
        printf("Case #%d:%d",x,c);
        x=x+1;
    }
    return 0;
}