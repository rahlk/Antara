#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int PGCD(int a, int b)
{
    if(a==b)
    {
            return a;        
    }     
    else
    {
        if(a>b)
           return PGCD(a-b, b);
        else
           return PGCD(a, b-a);
    }
}


_Bool find_index(int *a, int num_elements, int value)
{
   int i;
   for (i=0; i<num_elements; i++)
   {
	 if (a[i] == value)
	 {
	    return(0);  /* it was found */
	 }
   }
   return(1);  /* if it was not found */
}

int find_i(int *a, int num_elements, int value)
{
   int i;
   for (i=0; i<num_elements; i++)
   {
	 if (a[i] == value)
	 {
	    return(i);  /* it was found */
	 }
   }
   return(-1);  /* if it was not found */
}

_Bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return 1; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) 
            return 0; 
    }
    return 1; 
}

// Function to print primes 
int printPrime(int *tab,int n) 
{ 
    
    int j;
    j = 0;
    for (int i = 2; i <= n; i++) 
    { 
        if (isPrime(i))
        {
            tab[j] = i;
            
            j++;
        }
    }
    return j;
} 
int main() {
  int h;
  char c;
  int ni;
  int w;
  int n;
  int *arr;
  int *prime;
  int *nb;
  int *indx;
  int o,r,l,p,m,q;
    int size;
    int s, j, temp;
  
  w = 1;
  scanf("%d",&ni);
  while(ni > 0)
  {
      arr = (int *)malloc(2 * sizeof(int));
      
      for(int i=0;i<2;i++)
      {
            scanf("%d",&arr[i]);
      }
      prime = (int *)malloc(arr[0] * sizeof(int));
      m = printPrime(prime,arr[0]);
        o= 0;
      nb = (int *)malloc(arr[1] * sizeof(int));
      for(int i=0;i<arr[1];i++)
      {
            scanf("%d",&nb[i]);
      }
      o = 0;
      l = 0;
      indx = (int *)malloc(27 * sizeof(int));
      while(o<arr[1])
      {
          r = 0;
          p = nb[o];
          while (p != 1 && r < m)
          {
              if (p % prime[r] == 0 && find_index(indx,l,prime[r]))
              {
                  indx[l] = prime[r];
                  p = p / prime[r];
                  l++;
              }
              r++;
             
          }
          o++;
      }
      
        
     for(s=0; s<26; s++)
    {
        for(j=s+1; j<26; j++)
        {
            
            if(indx[s] > indx[j])
            {
                temp     = indx[s];
                indx[s] = indx[j];
                indx[j] = temp;
            }
        }
    }
    o = 0;
    q = nb[0];
    r = 0;
    printf("Case #%d: ",w);
    
    r=find_i(indx,l,nb[0]/PGCD(nb[0],nb[1]));
    c = 'A' + r;
    printf("%c",c);
    while(o < arr[1] - 1)
      {
          
          r =find_i(indx,l,PGCD(nb[o],nb[o+1]));
         c = 'A' + r;
            printf("%c",c);
          o++;
      }
        r=find_i(indx,l,nb[arr[1]-1]/PGCD(nb[arr[1]-2],nb[arr[1]-1]));
        c = 'A' + r;
            printf("%c",c);
      free(indx);
      free(nb);
      free(prime);
     
    ni--;
    if (ni > 0)
        printf("\n");
    w++;
  }
  return 0;
}
