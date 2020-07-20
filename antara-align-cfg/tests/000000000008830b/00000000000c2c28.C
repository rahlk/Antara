#include <stdio.h>
#include<string.h>
#include<math.h>

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
        // If current element is smaller than or 
        // equal to pivot 
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
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main()
{
    int tc,tcs=1;
    scanf("%d",&tc);
    while(tcs<=tc)
    {
        int num,n,arr[100000];
        scanf("%d",&num);
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        int num1,num2,arr2[100000];
        if(arr[0]%2==0)
        {
   // printf("2 %d\n",arr[0]/2);
        arr2[0]=2;
        arr2[1]=arr[0]/2;
        }
        else
        {
        for(int i=3;i<=sqrt(arr[0]);i=i+2)
        {
            if(arr[0]%i==0)
            {
                num1=i;
                num2=arr[0]/i;
     //   printf("%d %d ",i,arr[0]/i);
                arr2[0]=i;
                arr2[1]=arr[0]/i;
                break;
            }
        }
        }
        int index=2;
        for(int i=1;i<n;i++)
        {
            if(arr[i]%num1==0)
            {
      //  printf("%d ",arr[i]/num1);
            arr2[index++]=arr[i]/num1;
            num1=arr[i]/num1;
             }
            else
            {
        //printf("%d ",arr[i]/num2);
            arr2[index++]=arr[i]/num2;
            num2=arr[i]/num2;
            }
        }
  // printf("\n");
        int arr3[100000];
        for(index=0;index<n+1;index++)
         {
        //printf("%d ",arr2[index]);
        arr3[index]=arr2[index];
        }
    //printf("\n");
        quickSort(arr2, 0, n);
   //printArray(arr2, 26);
        int ascii=65;
        int printascii[100000];
        for(int i=0;i<n+1;i++)
        {
            if(arr2[i]!=arr2[i+1])
                printascii[arr2[i]]=ascii++;
        }
        printf("Case #%d: ",tcs);
        for(int i=0;i<n+1;i++)
        {
            printf("%c",printascii[arr3[i]]);
      // printf("%c",one[arr3[i]].asci);
        }
        printf("\n");
        tcs++;
    }
   return 0;
}
