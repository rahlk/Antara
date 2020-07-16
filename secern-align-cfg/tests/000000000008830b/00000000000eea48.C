#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(long int*)a - *(long int*)b );
}


int removeDuplicates(long int arr_work[], long int ns) 
{ 
    // Return, if array is empty 
    // or contains a single element 
    if (ns==0 || ns==1) 
        return ns; 
  
    long int temp[ns]; 
  
    // Start traversing elements 
    long int j = 0; 
    for (long int i=0; i<ns-1; i++) 
  
        // If current element is not equal 
        // to next element then store that 
        // current element 
        if (arr_work[i] != arr_work[i+1]) 
            temp[j++] = arr_work[i]; 
  
    // Store the last element as whether 
    // it is unique or repeated, it hasn't 
    // stored previously 
    temp[j++] = arr_work[ns-1]; 
  
    // Modify original array 
    for (int i=0; i<j; i++) 
        arr_work[i] = temp[i]; 
  
    return j; 
} 

int main(){
    long int t,i,ii,j;
    scanf("%ld", &t);
    for(ii=0;ii<t;ii++){
       long  int prime,size;
        scanf("%ld",&prime);
        scanf("%ld",&size);
        long int arr[size]; long int arr1[3*size];
        
        for(i=0;i<size;i++){
            scanf("%ld", &arr[i]);
        }
        int k=0;
        
        for(j=0;j<size;j++){
            
            long int n= arr[j];
            
            while (n%2 == 0) {
	
	   //	printf("%d ", 2); 
	   arr1[k]= 2; k++;
		n = n/2; }
	

	for (long int i = 3; i <= sqrt(n); i = i+2) 
	{ 
		while (n%i == 0) 
		{ 
			//printf("%d ", i); 
			
			arr1[k]= i; k++;
			n = n/i; 
		} 
	} 

	if (n > 2) {
		//printf ("%d ", n);
		
		arr1[k]= n; k++;      
	    
	}
	
        
    }
   long  int arr_work[2*size];
   long int rec=0;
    for(rec=0;rec<k;rec++){
        //printf("%d ", arr1[rec]);
        if(arr1[rec]<=prime){
        arr_work[rec]=arr1[rec];}
    }
    
    qsort(arr_work, rec, sizeof(int), cmpfunc);
long int ns = sizeof(arr_work) / sizeof(arr_work[0]);
 ns = removeDuplicates(arr_work, ns);
 ns = sizeof(arr_work) / sizeof(arr_work[0]);
 long int jj;
long int letter[2*size];
 for ( jj=0; jj<ns; jj++){ 
     //printf("%d ", arr_work[jj]);
     letter[jj]= arr_work[jj];
 } 
 long int out=0;
 //for(out=0;out<k;out++){printf("%d ",arr1[out]);}
 //printf("\n");
 //for(out=0;out<26;out++){ printf("%d ", letter[out]);}
 //printf("\n");
 
long int result[2*size];
long int count=0,count1,count2;
long int rep=0;
 long int tr=rep+2;
 if(arr1[rep]!= arr1[tr] && arr1[rep]!=arr1[tr+1]){
     result[count]= arr1[rep];count++;
     result[count]= arr1[rep+1];count++;
 }
 
 if(arr1[rep]==arr1[tr] || arr1[rep]== arr1[tr]){
     result[count]= arr1[rep+1];count++;
     result[count]= arr1[rep];count++;
     
 }
 for(rep=2;rep<k;rep=rep+2){
     long int tcount=count;
     if(arr1[rep]== result[tcount-1]){
         //result[count]= arr1[rep];count++;
         result[count]= arr1[rep+1];count++;
     }
     if(arr1[rep+1] == result[tcount-1]){
         //result[count]= arr1[rep+1];count++;
         result[count]= arr1[rep];count++;
     }
 }
 
 //for(out=0;out<k;out++){printf("%d ",result[out]);}
// printf("\n");
 long int res1,res2;
 printf("Case #%d: ",ii+1);
 for(res1=0;res1<count;res1++){
    long int ser= result[res1];
     
     for(res2=0;res2<26;res2++){
         if(letter[res2]== ser){
             long int out= res2+1;
                out= out+64;
                printf("%c",out);
         }
     }
 }
    printf("\n");
    
    }//test case close
}