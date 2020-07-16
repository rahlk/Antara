
#include <stdio.h>

int pow_of_10(int n){
   int p = 1 ; 
   for(int i = 0 ; i < n ; i++) p *= 10 ; 
   return p ; 

}

int pair_4(int n){
    int k = n ; 
    int j = n ;
    int ind = 0 ; 
    while(k != 0){
	if(k % 10 == 4){
	    j = j - pow_of_10(ind) ;
	}
	ind++ ; 
	k = k / 10 ; 
    }
    return j ; 
}

int main() {

    int num_test, i, j ;
    scanf("%d", &num_test) ;
    int test_case[num_test] ; 
    for(i = 0 ; i < num_test ; i++){
        scanf("%d", &test_case[i]) ; 
    }
    for(j = 0 ; j < num_test ; j++){
        int p = pair_4(test_case[j]) ; 
 	int k = test_case[j] - p ;
        printf("Case #%d: %d %d \n", j + 1, p, k) ; 
    }

}
