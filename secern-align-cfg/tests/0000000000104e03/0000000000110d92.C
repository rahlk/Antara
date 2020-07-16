#include <stdio.h> 
void combinationUtil(int a[], int data[], int start, int end,  
                     int index, int r); 
void printCombination(int a[], int n, int r) 
{ 
    int data[r];
    combinationUtil(a, data, 0, n-1, 0, r); 
} 
void combinationUtil(int a[], int data[], int start, int end, 
                     int index, int r) 
{ 
    if (index == r) 
    { 
        for (int j=0; j<r; j++) 
            printf("%d ", data[j]); 
        printf("\n"); 
        return; 
    } 
    for (int i=start; i<=end && end-i+1 >= r-index; i++) 
    { 
        data[index] = a[i]; 
        combinationUtil(a, data, i+1, end, index+1, r); 
    } 
} 
int main() 
{ 
    int a[] = {1, 2, 3, 4, 5}; 
    int r = 3; 
    int n = sizeof(a)/sizeof(a[0]); 
    printCombination(a, n, r); 
}