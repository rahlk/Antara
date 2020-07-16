#include<stdio.h>

int checkfour(int b) {
    int d, f=0;
     do {
            d=b%10;
            b=b/10;
            if(d==4) {
                f=1;
                break;
            }
        }while(b>0);
    return f;
}

void main() {
    int T, N, i, a, d, f, x, y;
    scanf("%d",&T);
    
    for(i=0;i<T;i++) {
        scanf("%d", &N);
        a=N;
        f=checkfour(a);
        
        if(f==1) {
            
            for(j=1;j<a;j++) {
                x=j;
                y=a-j;
                if(!checkfour(x)) {
                    if(!checkfour(y)) {
                        break;
                    }
                }
            }
        }
        printf("\nCase #%d: %d %d",i+1,x,y);
    }
}