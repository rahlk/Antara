#include<stdio.h>
int main()
{
    int n,i,arr[],p;
    printf("Enter the number of test cases:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i]/2;
        while(arr[i]>0 && arr[i]!=4 )
        {
            p=arr[i]%10;
            
        }
        printf("%d %d",arr[i])
    }
}