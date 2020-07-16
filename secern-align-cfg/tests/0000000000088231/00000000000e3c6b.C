#include<stdio.h>
#include<math.h>

int Count(int n)
{
   int count=0;
   
 while(n!=0)
   {
    n=n/10;
    count++;
    
    }
  return count;
  
 }
 
void digit(int *arr,int n)

{
  int i=0;
  
   while(n!=0)
   {
    arr[i]=n%10;
    if(arr[i]==4)
    arr[i]=2;
    
    n=n/10;
    i++;
    }
    
 }
    
int main()
{

int T;
 
 scanf("%d",&T);
 
 int j;
 
 for(j=1;j<T+1;j++)
 {
     int i=0,count=0;
      int N=0,A=0,B=0;
     
     
   scanf("%d",&N); 
   count=Count(N);
   
    int arr[count];
    
    digit(arr,N);
    
    for(i=0;i<count;i++)
    {
      A+=arr[i]*(pow(10,i));
      
     }
     
     B=N-A;
     
     printf("case #%d: %d %d\n",j,A,B);
     
     
  }
  return 0;
  
 }
 