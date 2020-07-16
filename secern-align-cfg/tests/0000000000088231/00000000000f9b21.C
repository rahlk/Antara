#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,v=1;
        int x,a[1000],b[1000],q=0,w=0;
        int k,h,j;
        scanf("%d",&n);
        while(n!=0){
            x=n%10;
            n=n/10;
            if(x==0){
                a[q++]=0;
                b[w++]=0;
            }
            if(x==5){
                a[q++]=2*k;
                b[w++]=3*k;
                k*=10;
            }
            else{
                a[q]=x-1;
                h=a[q];
                q++;
                b[w++]=x-a[h];
            }
        }
        for(j=0;j<q;j++){
            a[0]+=a[j];
            b[0]+=b[j];
        }
        printf("Case #%d: %d %d",a[0],b[0]);
        v++;
    }
}