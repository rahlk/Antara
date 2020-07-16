#include <stdio.h>

int main(){
        int T, i, k, counta, countj;
        long long N, j, a;
        scanf("%d", &T);
        for(i=0; i<T; i++) {
                //get N for test case T
                scanf("%d", &N);
                //loop through all possible values a and j
                while (j<N) {
                        a=N-j;
                        //find number of digits  of a and j respectively
                        while(a != 0) {
                                 a /= 10;
                                 ++counta;
                         }
                        while(j != 0) {
                                j /= 10;
                                ++countj;
                        }
                        //create arrays to hold individual digits of a and j respectively
                        int  digitsa[counta], digitsj[countj];
                        //iterate through arrays to ensure no 4s in a and j
                        for(k=0; k<count; k++) {
                                if (digitsa[k] == 4 || digitsj[k] == 4 ) {
                                        break;
                                }
                                else {
                                        continue;
                                }
                                printf("Case #%d: %lld %lld", T, a, j); 
                                //force while loop to break
                                j==N;
                        }
                        //continue while loop 
                        j++;
                }
        }
}
