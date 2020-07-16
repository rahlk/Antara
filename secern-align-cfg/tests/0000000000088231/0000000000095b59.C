#include<stdio.h>

   void main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a=1, b;
       long long int n;
        scanf("%d",&n);
        
while(a>0){
            if(check(a) && check(n-a)){
                printf("%d %d\n",a,n-a);
                break;
            }
           
a++; 
        }
    }
}

int check(int x) {
    
long long int r;
    while(x>0){
        r=x%10;
        if(r==4){
            return 0;
        }
        x=x/10;
    }
    return 1;
}