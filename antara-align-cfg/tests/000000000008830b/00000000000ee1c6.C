#include<stdio.h>
#include<stdlib.h>
int isPrime(int );
void QuickSort(int * ,int ,int);

int main(){
	int *prime =NULL;
        prime=(int*)calloc (sizeof(int),1229);
	if ( prime == NULL ){
		printf("Unable to allocate memory\n");
		exit(1);
	}
	int i,j,k; //loop variables
	int T,N,L,*list; // Question variables
	int index=0,r,s;
	for ( i=2; i < 10000; i++){
		if( isPrime(i) )
			prime[index++]=i;
	}
//	for (i=0; i<1229;i++)
//		printf("prime[%d]=%d\n",i,prime[i]);

	//printf("Enter T : ");
	scanf("%d",&T);
	int acode[26];
	int p,flag,test,half,l;
	char *str;
	for ( test =1; test <= T; test++){
		//printf("Enter N and L : ");
		scanf("%d %d",&N,&L);
		list=(int*)calloc(L,sizeof(int));
		if ( list == NULL ){
			printf("Unable to allocate memory to list \n");
			exit(1);
		}
		for(i=0; i<26; i++)
			acode[i]=0;

		for(l=0; l < L ;l++)
			scanf("%d",&list[l]);
		
		index=0;
		half=list[0]/2;
		for( i=0; prime[i] <=half; i++){
			if ( (list[0] % prime[i] ) == 0 ){
				acode[index++]=r=prime[i];
				acode[index++]=s=list[0]/prime[i];
		//		printf("acode[%d] and acode[%d] has been set to %d and %d\n",index-2,index-1,acode[index-2],acode[index-1]);
				break;
			}
		}
		for ( l=1; l < L; l++){
			for ( i=0; i<index ;i++){
				if ( ( list[l] % acode[i] ) == 0 ){
					p= list[l]/acode[i];
					break;
				}
			}
			flag=0;
			for( i=0; i < index; i++){
				if ( p == acode[i]){
					flag=1;
					break;
				}
			}
			
			if ( flag != 1 ){
				acode[index++]=p;
			//	printf("acode[%d] has been set to %d for list[%d]= %d\n",index-1,acode[index-1],l,list[l]);
			
			}
			if ( index == 26)
				break;
		}


		// Now sort them using quicksort algorithm
	//	for (i=0; i<=25; i++){
	//		printf("acode[%d]=%d\n",i,acode[i]);
	//	}
		;
		QuickSort(acode,0,25);
	//	//printing the array
	//	for( i=0; i<=25; i++)
	//		printf("acode[%d]=%d\n ",i,acode[i]);
	//	_getch();
		for ( i=0;i<26;i++){
			if ( r== acode[i]){
				r=i;
				break;
			}
		}
		for ( i=0; i < 26; i++)
			if ( s== acode[i]){
				s=i;
				break;
			}

		int pindex=0;
		str= (char*)calloc ( L+2,sizeof(char));
		for ( i=0; i < L ; i++){
			if ( list[i] != list[i+1] ){
				if ( (list[i+1] % acode[s] ) == 0 ){
					str[i+1] = 65+s;
					//printf("str[%d+1]=%c\n",i,str[i+1]);
					flag=1;
				}
				else{
					str[i+1]=65+r;
					//printf("str[%d+1]=%c\n",i,str[i+1]);
					flag=1;
				}
				// end if statement
				for (j=i+1; j<L; j++){
					p=list[j]/acode[str[j]-65];
					
					for( i=0; i < 26 ; i++)
						if ( p == acode[i]){
						pindex=i;
						break;
						}
					str[j+1]=65+pindex;
				}
				//backward
				for ( j=i; j >=0; j--){
					p=list[j]/acode[str[j+1]-65];
					for (i=0; i <26; i++)
						if( p == acode[i] ){
							pindex=i;
							break;
						}
					str[j]=65+pindex;
				}

				break;
			} 
		}
		printf("Case #%d: %s\n",test,str);
		free(str);
		free(list);
	}
	return 0;
}
		

int isPrime(int N){
	int i;
	for ( i=2; i<= N/2; i++)
		if ( N % i == 0 )
			return 0; 
	return 1;
}

void QuickSort( int *a, int left, int right){
	int pivot,temp;
	pivot = left; // selection of pivot element
	int initialLeft,initialRight;
	initialLeft=left;
	initialRight=right;
	
	if ( initialLeft == initialRight ){
		return ;
	}
	else{
		while( left < right){
		if ( pivot == left ){
			if ( a[left] > a[right] ){ // left is bigger than right 
				//swap
				temp=a[left];
				a[left]=a[right];
				a[right]=temp;
				left++;
				pivot=right;
			}
			else{
				right--;
			}
		}
		else{
			if ( a[left] > a[right] ){ // left is bigger than right
				//swap
				temp = a[left];
				a[left]=a[right];
				a[right]=temp;
				right--;
				pivot=left;
			}
			else
				left++;
		}
		}
	}
		
	if ( initialLeft < pivot){
		QuickSort( a,initialLeft,pivot-1);
	}
	if ( initialRight > pivot) {
		QuickSort( a, pivot+1,initialRight);
	}
	 
}
