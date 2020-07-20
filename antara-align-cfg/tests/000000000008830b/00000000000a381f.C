#include <stdio.h>

int nextprime(int n)
{
  int a,i;
  while(1)
  {
    n+=2;
    a=n/2;
    for(i=3;i<=a;i++)
    if(!(n%i))
    break;
    if(i>a)
    return n;
  }
}
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
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
int deletedup(int b[],int l)
{
  int i,j;
  for(i=0;i<l-1;i++)
  {
    if(b[i]==b[i+1])
   { for(j=i;j<l-1;j++)
    b[j]=b[j+1];
   i--;
     l--;
   }
  }
  return l;
}

int search(int b[],int x,int l)
{
  int i;
  for(i=0;i<l;i++)
 { 
   if(b[i]==x)
  return i;
 }
}
int main()
{
    int t,no=0,l,a[100],b[100],c[100],len,n,i,p;
    char ch[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d",&t);
    
     while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&l);
        for(i=0;i<l;i++)
        scanf("%d",&a[i]);
        p=3;
        while(!(!(a[0]%p) && !(a[1]%p)))
        p=nextprime(p);
        b[0]=a[0]/p;
        b[1]=p;
        c[0]=b[0];
        c[1]=b[1];
        for(i=2;i<l+1;i++)
       {
         b[i]=a[i-1]/p;
         p=b[i];
         c[i]=b[i];
       }
      quickSort(b,0,l);
      len=deletedup(b,l+1);
      printf("\nCase #%d : ",++no);
      for(i=0;i<l+1;i++)
    printf("%c",ch[search(b,c[i],len)]);
    }
    return 0;
}
