#include<stdio.h>
#include<math.h>

int main() {
    int T;
    scanf("%d", &T);
   
    for(int i =1; i <= T; i++)  {
        int N;
        scanf("%d", &N);
        int f1 =0, f2 = 0;
        int count = 0;
        while(N > 0) {
        	int r = N%10;
        	if( r == 5) {
        		f1 = (r*pow(10,count))+f1;
        		f2 = f2;
        	}
        	else if(r==0) {
        		f1 = f1;
        		f2=f2;
        	}
        		else {
        		f1 = (1*pow(10,count)) + f1;
        		f2=((r-1)*pow(10,count)) + f2;
        	}
        	
        	N = N/10;
        	count++;
        }
        
        printf("Case #%d: %d %d\n", i, f1, f2);
    }
    
    return 0;
}