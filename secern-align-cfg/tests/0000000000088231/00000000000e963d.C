#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int digit(int a){
    int i=0;
    while(a!=0){
        a=a/10;
        a++;
    }
    return i;
}

int ex(int n){
    int i=1;
    for(j=0;j<n;j++){
        i=10*i;
    }
    return i;
}

int main(){
    int tc;
    scanf("%d", &tc);
    for(int Z=0;z<tc;z++){
        int d;
        int f=0;
        scanf("%d", &d);
        int s=digit(d);
        int arr[s];
        for(int k=0;k<s;k++){
            arr[k]=d-(d/ex(k))*ex(k);
            arr[k]=arr[k]/ex(k-1);
            if(arr[k]==4){arr[k]=3;
                f=f+ex(k)*arr[k];
            }
        }
        int A=f;
        int B=d-f;
        printf("Case #%d: %d %d",z+1,A,B );
    }    
}