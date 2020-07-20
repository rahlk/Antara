#include <stdio.h>
#include <stdlib.h>

int hcf(int n1, int n2)
{
      if (n2 != 0)
          return hcf(n2, n1 % n2);
      else
          return n1;
}

int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int removeDuplicates(int arr[], int n)
{
  if (n==0 || n==1) {
    return n;
  }
  int temp[n];
  int j = 0, i;
  for (i=0; i<n-1; i++) {
    if (arr[i] != arr[i+1]) {
      temp[j++] = arr[i];
    }
  }
  temp[j++] = arr[n-1];
  for (i=0; i<j; i++) {
    arr[i] = temp[i];
  }
  return j;
}

int main(){
  int t, n, l, x, a, i, newL, value, index, *inputList, *charList, *charList2;
  char alphabetSet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  scanf("%i", &t);
  for (x = 0; x < t; x++) {
    scanf("%i %i", &n, &l);
    inputList = (int *)malloc(l * sizeof(int));
    for (i = 0; i < l; i++) {
      scanf("%i",inputList + i );
    }
    a = hcf(inputList[0],inputList[1]);
    charList = (int *)malloc((l + 1) * sizeof(int));
    charList2 = (int *)malloc((l + 1) * sizeof(int));
    charList[0] = inputList[0] / a;
    charList[1] = a;
    charList2[0] = charList[0];
    charList2[1] = charList[1];
    for (i = 2; i <= l; i++) {
      charList[i] = inputList[i-1]/charList[i-1];
      charList2[i] = charList[i];
    }
    mergeSort(charList2,0,l);
    newL = removeDuplicates(charList2,l + 1);
    printf("Case #%i: ",(x + 1));
    for (i = 0; i <= l; i++) {
      value = charList[i];
      index = search(charList2, l + 1, value);
      printf("%c", alphabetSet[index]);
    }
    printf("\n");
  }
  return 0;
}
