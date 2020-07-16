#include<stdio.h>
#include <stdint.h>
#include <string.h>
uint64_t decrypted_numbers[200];
char decrypted[200];
uint64_t input_number[200];
uint64_t sorted_numbers[200];
uint64_t primes_index[30];
uint64_t gcd_nr(uint64_t n1, uint64_t n2)
{
    if (n2 != 0)
       return gcd_nr(n2, n1%n2);
    else 
       return n1;
}
char find_index(uint64_t num) {
	uint64_t i=0;
	uint64_t index = 0;
	for(i=0;i<26;i++) {
		if(primes_index[i] == num) {
			index = i;
			break;
		}
	}
	return (char)(65+index);
}
void swap(uint64_t *x, uint64_t *y) 
{ 
    uint64_t temp = *x; 
    *x = *y; 
    *y = temp; 
} 
void sort_input(int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++) {      
          for (j = 0; j < n-i-1; j++) { 
                if (sorted_numbers[j] > sorted_numbers[j+1]) 
                     swap(&sorted_numbers[j], &sorted_numbers[j+1]); 
		}
	}
   return;
} 

void process(uint64_t length) {
	int i=0,j=0;
	uint64_t out_len = 0;
	uint64_t first_number = 0;
	uint64_t gcd_result = 0;
	uint64_t p_i = 0;
	uint64_t temp = 0;
	gcd_result =  gcd_nr(input_number[0],input_number[1]);
	if(gcd_result != 0)
		first_number = sorted_numbers[0] = input_number[0]/gcd_result;
	decrypted_numbers[0] =  first_number;
	for(i=0; i < length;i++) {
	//	if(first_number != 0)
			first_number = input_number[i]/first_number;
		decrypted_numbers[i+1] = sorted_numbers[i+1] =  first_number;
	}
	sort_input(length+1);
	for (i=0; i<length; i++) {
		if (sorted_numbers[i] != sorted_numbers[i+1]) 
            		primes_index[j++] = sorted_numbers[i]; 
	}
	primes_index[j++] =sorted_numbers[length];

	for(i=0;i<length+1;i++) {
		decrypted[i] = find_index(decrypted_numbers[i]);
	}
	decrypted[length+1] = '\0';	
	return;
}

int main(void) {
        int t;
        int n,l;
	int j,i;
	scanf("%d",&t);
        //cin >> t;  // read t. cin knows that t is an uint64_t, so it reads it as such.
        for (i = 1; i <= t; ++i) {
                //cin >> n >> l;  // read n and then m.
                scanf("%d %d",&n,&l);
		for(j=0;j<l;j++)
			scanf("%llu",&input_number[j]);
			//	cin >> input_number[j];
		process(l);
		printf("Case #%d: %s\n",i,decrypted);
                //cout << "Case #" << i << ": " << decrypted << " " <<  endl;
           }
        return 0;
}

