
#include <stdio.h>

unsigned int root(unsigned int x){
unsigned int a,b;
b = x;
a = x = 0x3f;
x = b/x;
a = x = (x+a)>>1;
x = b/x;
a = x = (x+a)>>1;
x = b/x;
x = (x+a)>>1;
return(x); }

int check_4(int n){ 
    int j = n ; 
    while(j != 0){
         if(j % 10 == 4){
             return 0 ; 
         }
         j = j / 10 ; 
    }
    return 1 ; 
  
}

int pair_4(int n){
    int k ; 
    for(k = 0 ; k < root(n) ; k++){
        if(check_4(k) && check_4(n - k)){
            return k ; 
        }
    }
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



