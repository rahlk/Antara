#include <stdio.h>
#include <math.h>

int myFun(int n) {
    int p=1;
    for(;n>0;n/=10,p++)
        if(n%10==4)
            return p;
    return 0;
}

int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,temp;
        scanf("%d",&n);
        temp=n;
        for(;;){
            int p=myFun(temp);
            if(p==0)
                break;
            else
                temp-=pow(10,p-1);
        }
        printf("Case #%d: %d %d\n",i,n-temp,temp);
    }
    return 0;
}