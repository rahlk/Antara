#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void selectionSort(int factor_array[], int n) 
{ 
 int i, j, min_idx; 
    for (i = 1; i < n; i++) { 
        min_idx = i; 
        for (j = i+1; j <= n; j++) 
          if (factor_array[j] < factor_array[min_idx]) 
            min_idx = j; 
       swap(&factor_array[min_idx], &factor_array[i]); 
    } 
} 


void main(){
	int t,flag;
	int c=0;
	long int befor_prime_array[2];
	 char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d",&t);
	


	while(t!=0){
	  long int N,n,L;
        int i,j,k=0;
        t--;
     	scanf("%d %d",&N,&L);
     	 int encrypt_array[L];
     	  int prime_array[L+1];
     	 int factor_array[2000];
     	 char result_array[1000];
     	 
             for(i=1;i<=L;i++){
	        scanf("%d",&encrypt_array[i]);
	        }
	       
	           int num = encrypt_array[1];
	           
	    for(i=2; i<=num; i++){ 
	       if(num%i==0){
            flag = 1;
            for(j=2; j<=i/2; j++){
                if(i%j==0){
                    flag = 0;
                    break;
                }
            }
            if(flag==1){
                befor_prime_array[k++] = i;  
            } 
        }
    }
	           
	    
		int one = befor_prime_array[0];
       int two = befor_prime_array[1];
      for(i=1;i<L;i++){
      	int temp = encrypt_array[i+1];
      	prime_array[1]= befor_prime_array[0];
      	prime_array[2]= befor_prime_array[1];
      	prime_array[i+2]= temp/two;
      	
      	two = prime_array[i+2];
       
	}
		 
		 for(i=1;i<=L+1;i++){
	      factor_array[i] = prime_array[i];
     	} 
		
		selectionSort(factor_array, L+1); 
		
		int size = L+1;
		
		     
      for (i = 1; i <= size; i++) {
      for (j = i + 1; j < size;) {
         if (factor_array[i] == factor_array[j]) {
            for (k = j; k < size; k++) {
               factor_array[k] = factor_array[k + 1];
            }
            size--;
         } else
            j++;
      }
   }
		
//		for(i=1;i<=26;i++){
//			printf("%d ",factor_array[i]);
//		}
//		printf("\n");
//		for(i=0;i<26;i++){
//			printf("%c  ",alphabet[i]);
//		}
//		 
//		 printf("\n");
//		for(i=1;i<=L+1;i++){
//			printf("%d ",prime_array[i]);
//		}
		int temp;
		for(i=1;i<=L+1;i++){
			temp = prime_array[i];
			 for(j=1;j<=26;j++){
			 	if(temp == factor_array[j]){
			 		result_array[i-1]=alphabet[j-1];
				 }
			 }
		}
		c++;
		
//		result_array[0]= ' ';
        result_array[L+1]='\0';
		printf("Case #%d: %s\n",c,result_array);
		
       
		
		
	}
}
