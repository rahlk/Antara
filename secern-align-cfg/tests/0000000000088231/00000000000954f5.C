#include<stdio.h>

void main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a=1;int b;
        int n;
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
    
int r;
    while(x>0){
        r=x%10;
        if(r==4){
            return 0;
        }
        x=x/10;
    }
    return 1;
}