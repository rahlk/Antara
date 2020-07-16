#include<stdio.h>
#include<stdlib.h>
 int main()
  { 
      int N[10],check;
      printf("enter integer");
      scanf("%d"&N);
      
      for(i=0;i<N;i++)
      if(N[i]==4)
        {
            printf("given check is overrsized");
        }
     else
        {  printf("given check is not oversized");
        }