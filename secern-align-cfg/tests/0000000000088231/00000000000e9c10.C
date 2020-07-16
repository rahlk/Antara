#include<stdio.h>
#include<math.h>

int Digits(int n){
    if(n == 0)  return 0;
    
    return 1+Digits(n/10);
}

void Nums(int *a,int n){
    int i=0;
    
    while(n!=0){
        *(a+i) = n%10;
        
        if(*(a+i) == 4)
            *(a+i) = 2;
        
        n /= 10;
        i++;
    }
}

int main(){

    int T,i;
    
    scanf("%d",&T);
    
    for(i=0;i<T;i++){
    
        int N,A=0,B,count,j;
        scanf("%d",&N);
        
        count = Digits(N);
        
        int arr[count];
        
        Nums(arr,N);
        
        for(j=0;j<count;j++){
            A += arr[j]*pow(10,j);
        }
        
        B = N - A;
        
        printf("Case #%d: %d %d\n",i,A,B);
    }
    return 0;
}



