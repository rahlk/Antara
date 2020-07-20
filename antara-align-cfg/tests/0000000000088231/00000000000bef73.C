
#include <stdio.h>
      
int solution (int n,int array[],int c){
	
		
	unsigned int k,i,count,j=0;	
	k=n;
	while (k){
		for (i=0;k>0;i++){
			array[i]=k%10;
			k=k/10;			
			}
		count=i;
		}
		//printf	("%d",count);
	int start=0;
	
	int temp;
	i=0; 
	j=count-1;
    while (i < j) 
    { 
        temp = array[i];    
        array[i] = array[j]; 
        array[j] = temp; 
        i++; 
        j--; 
    }    
			
		
		
		
		
		int array2[10];
		for (i=0;i<10;i++){
			
			array2[i]=0;
			}	
		
		
		for (i=0;i<count;i++){
			if (array[i]==4){
			array[i]=3;
			array2[i]=1;
			}
			else {
				continue;
				}
			
			}
			
		printf("Case #%d: ",c)	;
		for (i=0;i<count;i++){
			printf("%d",array[i]);
			}
		printf(" ");

		for (i=0;i<count;i++){
			if(array2[i]==0){
				continue;}
			printf("%d",array2[i]);
			}
		printf("\n");
		c++;
	
	}
	

void main(){
	unsigned int   n ,k,c=1;
	int t,i,array[10];
	for(i=0;i<10;i++){
			array[i]=0;
			}
	
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		solution(n,array,c);
		
		c++;
	
	}
}
