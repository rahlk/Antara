#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int l=1;
    while(l<=t){
        long int n;
        scanf("%ld",&n);
        long int temp=n;
        int a[10],count=0;

        long int i=0;
        while(temp!=0){
            if(temp%10==4){
                a[i]=temp%10-1;
            }
            else{
                a[i]=temp%10;
            }
            i=i+1;
            temp=temp/10;
        }
        temp=0;
        for(long int j=i-1;j>=0;j--){
            temp=temp*10+a[j];
        }
        printf("Case #%d: %ld %ld\n",l,temp,n-temp);
        l=l+1;
    }
}
