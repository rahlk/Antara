#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int te = *a;
    *a = *b;
    *b = te;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
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

int gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}

int main()
{
    int t;
    scanf("%d",&t);
    int to=t;
    while(t--)
    {
        int n,l;
        scanf("%d%d",&n,&l);
        int A[l],B[l+1],Bmap[l+1];
        int i;
        for(i=0;i<l;i++) scanf("%d",&A[i]);
        B[1]=gcd(A[0],A[1]);
        B[0]=A[0]/B[1];
        B[2]=A[1]/B[1];
        Bmap[0]=B[0];
        Bmap[1]=B[1];
        Bmap[2]=B[2];
        for(i=3;i<l+1;i++)
        {
            B[i]=A[i-1]/B[i-1];
            Bmap[i]=B[i];
        }
        quickSort(Bmap,0,l);
        int Al[10001]={0};
        int k=0;
        for(i=0;i<l+1;i++)
        {
            if(Al[Bmap[i]]==0) {Al[Bmap[i]]=k;k++;}
        }
        printf("Case #%d :",to-t);
        for(i=0;i<l+1;i++)
        {
            printf("%c",65+Al[B[i]]);
        }
        printf("\n");
    }
    return 0;
}
