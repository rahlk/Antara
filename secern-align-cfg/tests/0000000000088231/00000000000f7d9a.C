#include <stdio.h>
#define MAX 10000
#define bool int

void printPairs(int arr[], int arr_size, int sum)
{
  int  i, temp;
  bool s[MAX]={0};

  for (i = 0; i < arr_size;	 i++)
  {
      temp = sum - arr[i];
      if (temp >= 0 && s[temp] == 1)

	 printf("case #	 %d : %d\t%d",
		 i, arr[i], temp);
      s[arr[i]] = 1;

  }
}


int main() {
   int n;
    int A[] = {2,2, 852, 88, 667, 3777};
    scanf("%d",&n);
    int arr_size = sizeof(A)/sizeof(A[0]);
	 printPairs(A, arr_size,n);

}