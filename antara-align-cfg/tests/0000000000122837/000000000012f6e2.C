#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


double matrix[6][6] = {{0.1,-0.1,-0.05,0.,0.,0.025},{-1.2,1.2,0.1,0.,0.,-0.05},{-0.4,-0.6,1.2,0.,0.,-0.1},{1.6,-1.6,-0.8,1.,0.,-0.1},{-1.6,1.6,0.8,-1.,1.,-0.4},{2.4,-0.4,-1.2,0.,-1.,0.6}};

int main() {
    int T, W, k, aux=0; 
    long long resp1, resp2, r1, r2, r3, r4, r5, r6;
    scanf("%d", &T);
    scanf("%d", &W);

    for (int id = 1; id <= T; ++id) {
        printf("%d\n", 224);
        fflush(stdout);
        scanf("%lld", &resp1);
        if(resp1 != -1){
            printf("%d\n", 48);
            fflush(stdout);
            scanf("%lld", &resp2);
            if(resp2 != -1){
                for( k =1; k <= 37; k++){
                    resp1=resp1/2;
                }
                r6=resp1%128;
                
                resp1=resp1-r6;
                
                resp1=resp1/128;

                r5 = resp1%128;

                resp1= resp1- r5;

                r4 = resp1/4096;

                resp2= resp2 - (r4 * 4096) - ( r5 * 512 )- (r6 * 256);
                for ( k=0; k < 16; k++){
                    resp2=resp2/2;
                }
                r3 = resp2 % 128;
                resp2 = resp2 - r3;
                resp2 = resp2/256;
                r2 = resp2 % 128;
                resp2= resp2 - r2;
                for( k = 0; k < 24; k++){
                    resp2 = resp2/2;
                }
                r1 = resp2; 
                printf("%lld %lld %lld %lld %lld %lld\n", r1, r2, r3, r4, r5, r6 );
                fflush(stdout);
                scanf("%d", &aux);
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }    
  return 0;
}