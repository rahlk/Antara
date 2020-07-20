#include <stdio.h>
#include<string.h> 
#include <math.h>

int main ()
{
    
    
    
    unsigned long long int max = 10000;
    unsigned long long int primes[max];
    unsigned long long int n_primes = 0;
    unsigned long long int i;
    primes[0] = 2;
    for (i = 2; i <= max; i++) {
        unsigned long long int j=0;
        for (j = 0; primes[j]*primes[j] <=i; j++) {
            if (i % primes[j] == 0) {
                goto not_prime;
            }
        }
        primes[n_primes] = i;
        n_primes++;

        not_prime:
            ;
    }

    /*printf ("%d\n",n_primes); 
    for (i = 0; i < n_primes; i++) {
        printf ("%llu ", primes[i]);
        if (i % 10 == 9) {
            printf ("\n");
        }
    }
    printf ("\n");*/
    
    
    int T,L;
    unsigned long long int N;
    scanf("%d", &T);
    char* arr [100];
    for(int i =0; i<T;i++){
        scanf("%llu", &N);
        scanf("%d", &L);
        L = L+1;
        unsigned long long int str[100];
        for(int j=0;j<L-1;j++){
            scanf("%llu", &str[j]);
        }
        
        
        unsigned long long int code[100][100];
        
        unsigned long long int num1 = str[0];
        unsigned long long int num2 = str[1];
        unsigned long long int prvnum = 0;
        short found = 0;
        for(int k =0;k<n_primes && found==0 ;k++){
            if(num1%primes[k]==0 && num2%primes[k]==0){
                found = 1;
                code[1][0]=primes[k];
                code[0][0]= num1/primes[k];
                prvnum=primes[k];
                //printf("%d -> %llu\n",0,code[0][0]);
                //printf("%d -> %llu\n",1,code[1][0]);
                if(code[1][0] <code[0][0] ){
                    unsigned long long int temp = code[0][0];
                    code[0][0] = code[1][0];
                    code[1][0] = temp;
                    code[1][1]=0;
                    code[0][1]=1;
                }else{
                    code[1][1]=1;
                    code[0][1]=0;
                }
            }
        }
        for(int k =2;k<L;k++){
            code[k][0]= str[k-1]/prvnum;
            prvnum = code[k][0];
            //printf("%d -> %llu\n",k,code[k][0]);
            code[k][1] = k;
            for(int l =0;l<k;l++){
                if(code[k][0] <code[l][0] ){
                    unsigned long long int temp = code[k][0];
                    code[k][0] = code[l][0];
                    code[l][0] = temp;
                    temp = code[k][1];
                    code[k][1] = code[l][1];
                    code[l][1] = temp;
                }
            }
        }
        
        char* string =malloc(100*sizeof(char));
        for(int k =0;k<L;k++)
            string[k]='_';
        int l =0;
        for(int k =0;k<L;k++){
            
            if(k>0 && code[k][0] != code[k-1][0])
                ++l;
            string[code[k][1]]= l+65;
            //printf("%llu %llu %c\n",code[k][0],code[k][1],l+65);
            //printf(" #%d: %s\n",k,string);
        }
        arr[i] = string;
        
    } 
    for (int i =0;i<T;i++)
        printf("Case #%d: %s\n",i+1,arr[i]);
    
    return 0;
}