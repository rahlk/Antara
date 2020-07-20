#include<stdio.h> 
 
int convert4To1Rec(int num) 
{ 
	
	if (num == 0) 
		return 0; 

	
	int digit = num % 10; 
	if (digit == 4) 
		digit = 1; 

	
	return convert4To1Rec(num/10) * 10 + digit; 
} 


int convert4To1(int num) 
{ 
	if (num == 4) 
	return 1; 
	else return convert4To1Rec(num); 
} 


int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--){
      int num;
	scanf("%d",&num);
	printf("%d %d\n", convert4To1(num),num- convert4To1(num));   
    }
	
	return 0; 
}
