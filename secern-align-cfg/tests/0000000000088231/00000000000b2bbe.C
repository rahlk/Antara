#include<stdio.h>
#include<conio.h>

int main(){
    int n,i,j,k;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++)//for input
    {
        scanf("%d\n",&arr[i]);
    }
    
    int a = closest(n); 
	int p=sumOfDigitsSingle(a);
	int q=sumOfDigitsSingle(n-a); 

    for(i=1;i<=n;i++)//for output
    {
        printf("Case #%d: %d %d",i,p,q);
    }
    
}

// Returns closest number to x in terms of 9's. 
int closest(int x) 
{ 
	int ans = 0; 
	while (ans * 10 + 9 <= x) 
		ans = ans * 10 + 9; 

	return ans; 
}

// Returns sum of digits of x 
int sumOfDigitsSingle(int x) 
{ 
	int ans = 0; 
	while (x) { 
		ans += x % 10; 
		x /= 10; 
	} 
	return ans; 
} 

