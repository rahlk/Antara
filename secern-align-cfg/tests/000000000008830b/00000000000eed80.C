#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int removeDuplicates(int arr_work[], int ns) 
{ 
    // Return, if array is empty 
    // or contains a single element 
    if (ns==0 || ns==1) 
        return ns; 
  
    int temp[ns]; 
  
    // Start traversing elements 
    int j = 0; 
    for (int i=0; i<ns-1; i++) 
  
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
    int t,i,ii,j;
    scanf("%d", &t);
    for(ii=0;ii<t;ii++){
        int prime,size;
        scanf("%d",&prime);
        scanf("%d",&size);
        int arr[size]; int arr1[3*size];
        
        for(i=0;i<size;i++){
            scanf("%d", &arr[i]);
        }
        int k=0;
        
        for(j=0;j<size;j++){
            
            int n= arr[j];
            
            while (n%2 == 0) {
	
	   //	printf("%d ", 2); 
	   arr1[k]= 2; k++;
		n = n/2; }
	

	for (int i = 3; i <= sqrt(n); i = i+2) 
	{ 
		while (n%i == 0) 
		{ 
			//printf("%d ", i); 
			//if(i<=prime){
			arr1[k]= i; k++;
			n = n/i; //}
		} 
	} 

	if (n > 2) {
		//printf ("%d ", n);
	//	if(n<=prime){
		arr1[k]= n; k++;//}
	    
	}
	
        
    }
    int arr_work[3*size];
    int rec=0;
    for(rec=0;rec<k;rec++){
        //printf("%d ", arr1[rec]);
        arr_work[rec]=arr1[rec];
    }
    
    qsort(arr_work, rec, sizeof(int), cmpfunc);
int ns = sizeof(arr_work) / sizeof(arr_work[0]);
 ns = removeDuplicates(arr_work, ns);
 int jj;
 int letter[26];
 for ( jj=0; jj<26; jj++){ 
     //printf("%d ", arr_work[jj]);
     letter[jj]= arr_work[jj];
 } 
 int out=0;
 //for(out=0;out<k;out++){printf("%d ",arr1[out]);}
 //printf("\n");
 //for(out=0;out<26;out++){ printf("%d ", letter[out]);}
 //printf("\n");
 
 int result[3*size];
 int count=0,count1,count2;
 int rep=0;
 int tr=rep+2;
 if(arr1[rep]!= arr1[tr] && arr1[rep]!=arr1[tr+1]){
     result[count]= arr1[rep];count++;
     result[count]= arr1[rep+1];count++;
 }
 
 if(arr1[rep]==arr1[tr] || arr1[rep]== arr1[tr]){
     result[count]= arr1[rep+1];count++;
     result[count]= arr1[rep];count++;
     
 }
 for(rep=2;rep<k;rep=rep+2){
     int tcount=count;
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
 int res1,res2;
 printf("Case #%d: ",ii+1);
 for(res1=0;res1<count;res1++){
     int ser= result[res1];
     
     for(res2=0;res2<26;res2++){
         if(letter[res2]== ser){
             int out= res2+1;
                out= out+64;
                printf("%c",out);
         }
     }
 }
    printf("\n");
    
    }//test case close
}