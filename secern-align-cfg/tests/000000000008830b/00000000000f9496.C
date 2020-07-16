#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b) {

  int temp;

  while (b != 0) {
    temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main() {

  int T, t, N, L, i, l1, l2, prev;
  int letters[26], plaintext[100], ciphertext[101];

  scanf("%d\n", &T);
  for (t = 1; t <= T; t++) {
    scanf("%d %d\n", &N, &L);
    for(i = 0; i < L; i++) scanf("%d", &ciphertext[i]);
    l1 = ciphertext[0];
    l2 = ciphertext[1];
    if(l1 == l2) plaintext[1] = (int)(sqrt((double)(l1)));
    else plaintext[1] = gcd(l1,l2);
    plaintext[0] = l1 / plaintext[1];
    for(i = 2; i <= L; i++) plaintext[i] = ciphertext[i-1]/plaintext[i-1];
    l1 = 1;
    l2 = 0;
    prev = 1;
    letters[0] = plaintext[0];
    while(l1 != 26) {
      for(i = 0; i < l1; i++)
        if(plaintext[prev] == letters[i]) l2 = 1;
      if(l2 == 0) letters[l1++] = plaintext[prev];
      l2 = 0;
      prev++;
    }
  
    quickSort(letters, 0, 25);
    printf("Case #%d: ", t);
    for(i = 0; i <= L; i++) 
      for(l1 = 0; l1 <= 25; l1++) 
        if(letters[l1] == plaintext[i]) {
          printf("%c", 'A' + l1);
          break;
        }
  printf("\n");
  }

  return 0;
}
