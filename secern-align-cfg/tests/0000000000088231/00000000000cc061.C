#include<stdio.h>

int main() {
    int T;
    scanf("%d", &T);
   
    for(int i =1; i <= T; i++)  {
        int N;
        scanf("%d", &N);
        int f1 =0, f2 = 0;
        while(N > 0) {
        	int r = N%10;
        	if( r == 5) {
        		f1 = f1*10;
        		f2 = f2*10+r;
        	}
        	else if (r ==0) {
        			f1 = f1*10;
        		f2 = f2*10;
        		}
        		else {
        		f1 = f1*10+1;
        		f2=f2*10 + (r-1);
        	}
        	
        	N = N/10;
        }
        
        printf("Case #%d: %d %d\n", i, f1, f2);
    }
    
    return 0;
}