#include <stdio.h>
#include<string.h>

int main() {
	long long int test,Case;
	char num_string[1000000];
	long long int length,j,k,i;
	char num1[1000000],num2[1000000];
	
	/*--------------Number of Test Case Input -----------*/
	scanf("%lld",&test);
	Case = 1;

	while(Case<=test){
	    
	    scanf("%s",num_string);
	    
	    length = strlen(num_string);
    	j = 0;
    	k = 0;	    

	    printf("Case #%lld: ",Case);
	    for(i=0;i<length;i++){
	        if(num_string[i]=='4'){
	            num1[j++] = num_string[i] - '1';
	            num2[k++] =  1;
	        }
	        else{
	            num1[j++] = num_string[i] - '0';
	            num2[k++] = 0;
	        }
	    }
        /*-----------Printing First Number ---------*/
	    for(i=0;i<j;i++)
	        printf("%d",num1[i]);
	        
	    printf(" ");  
	    /*----------Checking starting non zero index of string -------*/
	    for(i=0;i<k;i++){
	     if(num2[i] !=0)
	        break;
	    }
	    /*------------Printing Second Number ----------------------*/
	    for(j=i;j<k;j++)
	        printf("%d",num2[j]);
	        
	    printf("\n");
	    Case++;
	}
	return 0;
}