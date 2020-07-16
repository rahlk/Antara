#include<stdio.h>
int find2Numbers(int,int, int);
int main() 
{   int testcase,x,sum,i,A[999999],y=0;
    scanf("%d",&testcase);
   	for(i=0;i<testcase;++i)
   	{
	   
    for (x = 1; x <= 999999; x++)

        A[y] = x;
        ++y;

    scanf("%d",&sum); 
    int arr_size = sizeof(A) / sizeof(A[0]); 
    find2Numbers(A, arr_size, sum); 
    }
	return 0; 
} 
int find2Numbers(int A[], int arr_size, int sum) 
{ 
    int l, r; 
  
   int i = 0 ; 
       for (int j = i + 1; j < arr_size - 1; j++) {
             for (int k = j + 1; k < arr_size; k++) { 
                if (A[i] + A[j] + A[k] == sum) { 
                    printf("%d, %d",A[j], A[k]); 
                    return true; 
                } 
            } 
        }   
     
    return false; 
}
