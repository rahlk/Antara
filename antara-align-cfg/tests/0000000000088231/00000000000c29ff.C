#include<stdio.h>
int main(){
    int T,tc=0;
    scanf("%d",&T);
    while(T--){
        tc++;
        long long int N;
        scanf("%lld",&N);
        int v;
        int A[100],B[100];
        int i=0;
        while(N>0){
            v=N%10
            if(v==8){
                A[i]=2;
                B[i]=6;
                i=i+1;
            }
            else if(v==9){
                A[i]=2;
                B[i]=7;
                i++;
            }
            else{
                A[i]=v/2;
                t2=v-a[i];
                i++;
            }
            N=N/10;
        }
        int a=0,b=0;
        for(int j=0;j<i;j++)
        {
            a=a*10+A[i];
            b=b*10+B[j];
        }   
        printf("Case #%d: %d %d\n",tc,a,b);
    }
    return 0;
}