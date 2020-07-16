#include<stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++) {
        long long n,j;
        scanf("%d",&n);
        int arr[100],copy;
        copy = n;
        for(j=0;j<100;j++) {
            if(copy>0) {
                arr[j] = copy % 10;
                copy = copy / 10;
            }
            else
                arr[j] = 0;
        }
        for(j=0;j<100;j++) {
            print("%d\t", arr[j]);
        }
    
    }
    return 0;
}