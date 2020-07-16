#include <stdio.h>
int a[100],b[100],c[100],primes[25],z;
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
int prime(int x)
{
  int i,y=x/2;
  for(i=2;i<=y;i++)
  if(!(x%i))
  return 0;
  
  return 1;
}
void find(int x,int y)
{
  int i,j;
  if(!(x%2)&& !(y%2))
  primes[z++]=2;
  for(i=3;i<=x || i<=y; i+=2)
  {
    if(!(x%i) && !(y%i) && prime(i))
    primes[z++]=i;
  }
}

void xyz(int x,int n,int l)
{
  int i,p;
        b[0]=a[0]/primes[x];
        if(b[0]>n)
        xyz(x+1,n,l);
        b[1]=primes[x];
        c[0]=b[0];
        c[1]=b[1];  
         if(b[1]>n)
        xyz(x+1,n,l);
        p=primes[x];
        for(i=2;i<l+1;i++)
       {
         b[i]=a[i-1]/p;
         p=b[i];
         c[i]=b[i];
          if(b[i]>n)
        xyz(x+1,n,l);
       }
}
int main()
{
    int t,no=0,l,len,n,i,p;
    char ch[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d",&t);
    
     while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&l);
        for(i=0;i<l;i++)
        scanf("%d",&a[i]);
        p=3;
        z=0;
        find(a[0],a[1]);
       xyz(0,n,l);
      quickSort(b,0,l);
      len=deletedup(b,l+1);
      printf("Case #%d: ",++no);
      for(i=0;i<l+1;i++)
    printf("%c",ch[search(b,c[i],26)]);
    printf("\n");
    }
    return 0;
}
