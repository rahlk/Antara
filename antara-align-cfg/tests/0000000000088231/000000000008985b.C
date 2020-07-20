#include<stdio.h>
#include<math.h>

int howbig(int N){
    int res=0;
    while(n!=0){
        n=n/10;
        res++;
    }
    return res;
}

int* result(int N,int noDigits){
    int* ab=(integer*)malloc(2*sizeof(int));
    
    int* nArray=(integer*)malloc(noDigits*sizeof(int));
    int* aArray=(integer*)malloc(noDigits*sizeof(int));
    int* bArray=(integer*)malloc(noDigits*sizeof(int));
    int i,s;
    for(i=noDigits-1;i>=0;i--){
        s=N%10;
        nArray[i]=s;
        aArray[i]=s;
        bArray[i]=s;
        N=N/10;
        if(nArray[i]==4){
            aArray[i]--;
            bArray[i]++;
        }
    }
    for(i=0;i<noDigits;i++){
        ab[0]=10*i+aArray[i];
        ab[1]=10*i+bArray[i];
    }
    return ab;
}

int main(){
    int x;
    scanf("%d",&x);
    int i;
    int* N=(int*)malloc(x*sizeof(int));
    for(i=0;i<x;i++){
        scanf("%d",&N[i]);
    }
    int* res=(int*)malloc(2*sizeof(int));
    int noDigits;
    for(i=0;i<x;i++){
        noDigits=howbig(N[i]);
        res=result(N[i],noDigits);
        printf("Case #%d: %d %d\n",i,res[0],res[1]);
    }
    return 0;
}