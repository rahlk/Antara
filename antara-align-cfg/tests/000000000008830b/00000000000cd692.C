#include<stdio.h>
#include<string.h>
int binarySearch(int *arr, int low, int high, int key);
int main(){

int j=0,T,l,n,i=0;
int k=0;
scanf("%d",&T);
int *encode;
int output[101];
int alphabet=0;
int *alpha_prime= (int*)malloc(26* (sizeof(int)));
int a=65;

    for (j=0;j<T;j++){
         scanf("%d",&n);
         scanf("%d",&l);
         encode = (int*)malloc(l*sizeof(int));
         for(i=0;i<l;i++){
            scanf("%d",&encode[i]);
        }
        int size=1;
        alpha_prime[0]= gcd(encode[0],encode[1]);
        output[0]=encode[0]/alpha_prime[0];
        //printf("%d\n",output[0]);
        output[1]=alpha_prime[0];
        size = insertSorted(alpha_prime,size,output[0]);

        for(i=1;i<=l-1;i++){
        output[i+1]= gcd(encode[i],encode[i+1]);
       // printf("%d  %d\n",encode[i],encode[i+1]);
        size = insertSorted(alpha_prime,size,output[i+1]);
        }
        size = insertSorted(alpha_prime,size,encode[l-1]/output[l-1]);
        output[l]=encode[l-1]/output[l-1];
     /*   while(i<l){
            output[i+1]= gcd(encode[i],encode[i+1]);
            i++;
        }*/

    printf("Case #%d: ",j+1);
     for(i=0;i<=l;i++){
        alphabet= binarySearch(alpha_prime,0,25,output[i]);
       // printf("%d ",alphabet);
       printf("%c",alphabet+a);
      }
      printf("\n");
    }
}


int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int insertSorted(int *arr, int n, int key)
{
    // Cannot insert more elements if n is already
    // more than or equal to capcity

    int i;
    int temp= binarySearch(arr,0,n-1,key);
    if(temp ==-1){
    for (i=n-1;( i >= 0  && arr[i] > key); i--)
       arr[i+1] = arr[i];

     arr[i+1] = key;

    return (n+1);
    }else
    return n;

}

int binarySearch(int *arr, int low, int high, int key)
{
   if (high < low)
       return -1;
   int mid = (low + high)/2;  /*low + (high - low)/2;*/
   if (key == arr[mid])
       return mid;
   if (key > arr[mid])
       return binarySearch(arr, (mid + 1), high, key);
   return binarySearch(arr, low, (mid -1), key);
}
