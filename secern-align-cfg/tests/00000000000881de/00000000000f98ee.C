#include<stdio.h>
void transpose(int a[][20],int n){
	int trans[n][n],i,j;
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			trans[j][i]=a[i][j];
		}}
		printf("\n transposed one\n");
			for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
		}
}
main(){
	int a[20][20],n,i,j;
	printf("Enter the n");
	scanf("%d",&n);
	printf("enter the matrix");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);	
		}}
	printf("\nGiven matrix\n");	
			for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("%d\t",a[i][j]);	
		}printf("\n");}
		
		transpose(a,n);
}
