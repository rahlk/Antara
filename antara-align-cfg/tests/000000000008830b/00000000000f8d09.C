#include <stdio.h>
#include<stdlib.h>
/*------------- Prime Number Generation <= Number -------------*/
long long int prime_production(long long int arr[],long long int number){
    long long int i,j,k,flag;
    k = 0;
    for(i=3;i<=number;i++){
        flag = 0;
        for(j=2;j*j<=i;j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag != 1)
            arr[k++] = i;       // prime number 
    }
    return k;  // total number of prime number , which is less than equal to given number
}

/*----------------- Sorting Prime Factor ---------------------------*/
void swap(long long int* a, long long int* b) 
{ 
	long long int t = *a; 
	*a = *b; 
	*b = t; 
} 

long long int partition (long long int arr[], long long int low, long long int high) 
{ 
	long long int pivot = arr[high]; // pivot 
	long long int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high- 1; j++) 
	{ 
		if (arr[j] <= pivot) 
		{ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void quickSort(long long int arr[], long long int low, long long int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(arr, low, high); 

		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

/*-------------- Removing Dublicate element -------------------*/
long long int remove_dub(long long int ar[],long long int size,long long int new_ar[]){
    long long int i,k=0;
    new_ar[k++] = ar[0];
    for(i=1;i<size;i++){
        if(ar[i] != ar[i-1])
            new_ar[k++] = ar[i];
    }
    return k;
}

/*--------------- Searching key ------------------------------*/
long long int search(long long int array[],long long int size,long long int key){
    int i ;
    for(i=0;i<size;i++) {
        if(array[i] == key){
            return i;
        }
   }
}

/*------------- Finding Minimu --------------*/
long long int min(long long int a, long long int b){
    if(a>b)
        return b;
    else
        return a;
}

/*------------------------------ Checking equal ------------------------------*/
long long int check(long long int* a,long long* b,long long int c, long long int d){
    if(*a == c){
        *b = d;
        return *a;
    }
    else if(*a == d){
        *b = c;
        return *a;
    }
    else if(*b == c){
        *a = d;
        return *b;
    }
    else if(*b == d){
        *a = c;
        return *b;
    }
}

/*--------------------------- Reverse checking -----------------------------------*/
long long int check_rev(long long int* a, long long int*b, long long int c, long long int d){
    if(*a == c){
        *b = d;
        return *b;
    }
    else if(*a == d){
        *b = c;
        return *b;
    }
    else if(*b == c){
        *a = d;
        return *a;
    }
    else if(*b == d){
        *a = c;
        return *a;
    }
}

int main() {
	long long int test,Case,Prime[100000],length,Num,L;
	long long int Prime_factor[105][2],i,j,k;
	long long int cryp_pan[105],factor[500];
	long long int i_prime,j_prime;
	long long int final_factor[1000],final_length;
	char alphabet[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i_alp;
	char ans[150];
	long long int temp,temp1;
	
	scanf("%lld",&test);
	Case = 1;
	while(Case <= test){
	    
	    scanf("%lld%lld",&Num,&L);
	    for(i=0;i<L;i++)
	        scanf("%lld",&cryp_pan[i]);
	   // printf("Case #%lld: ",Case);
	    length = prime_production(Prime,Num);
/*------------ Factor Production ----------------*/
    k=0;
	    for(i=0;i<L;i++){
	        for(j=0;j<length;j++){
	            if(cryp_pan[i]%Prime[j] == 0){
	                factor[k++] = Prime[j];
	                factor[k++] = cryp_pan[i] / Prime[j];
	                Prime_factor[i][0] = Prime[j];
	                Prime_factor[i][1] = cryp_pan[i] / Prime[j];
	            }
	        }
	    }
	    quickSort(factor,0,k-1);
	    final_length = remove_dub(factor,k-1,final_factor); 
	    if(final_length >26)
            final_length = 26;
        i_alp = 0;
/*-----------------Decryption first text------------------------*/
        //printf("Starting index : %d\n",i_alp);
        i_prime = Prime_factor[0][0];
        j_prime = Prime_factor[0][1];
        temp = min(i_prime,j_prime);
        k = search(final_factor,final_length,temp);
       // printf("%c",alphabet[k]);
        ans[i_alp++] = alphabet[k];
/*----------------- Type of decryption ------------------------*/
        
/*-----------------Decryption rest text------------------------*/
    
        for(i=1;i<L;i++){
            temp = check(&i_prime,&j_prime,Prime_factor[i][0],Prime_factor[i][1]);
            k = search(final_factor,final_length,temp);
         //   printf("%c",alphabet[k]);
            ans[i_alp++] = alphabet[k];
        }
        
/*-----------------Decryption of last alphabet ------------------------*/
        if(temp == Prime_factor[L-1][0])
            temp1 = Prime_factor[L-1][1];
        else if(temp == Prime_factor[L-1][1])
            temp1 = Prime_factor[L-1][0];
        k = search(final_factor,final_length,temp1);
       // printf("%c",alphabet[k]);
        ans[i_alp++] = alphabet[k];
        ans[i_alp] = '\0';
        printf("Case #%lld: %s\n",Case,ans);
	    Case++;
	}
	return 0;
}