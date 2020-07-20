#include<stdio.h>
#include<stdlib.h>

long int *res;
void func(long int);

int main()
{
  long int test,i;
  
  scanf("%ld",&test);
  
  res=(long int *)calloc(test,sizeof(long int));
  
  for(i=0;i<test;i++)
    func(i);
    
  for(i=0;i<test;i++)
  {
      printf("Case #%ld: %ld",(i+1),res[i]);
      if(i<(test-1))
        printf("\n");
  }
  
  return 0;
}

void func(long int z)
{
    long int n,l;
    long int *c,*d;
    long int i,j,k;
    long int ct,dif;
    int f,f1;
    
    fflush(stdin);
    scanf("%ld %ld",&n,&l);
    c=(long int *)calloc(n,sizeof(long int));
    d=(long int *)calloc(n,sizeof(long int));
    
    for(i=0;i<n;i++)
    {
      fflush(stdin);
      scanf("%ld",&c[i]);
      
    }
    
    for(i=0;i<n;i++)
    {
      fflush(stdin);
      scanf("%ld",&d[i]);
    }
    
    for(i=0;i<n;i++)
    {
      f1=0;
      for(j=i;j<n;j++) 
      {
          f=0;
          for(k=i;k<n;k++)
          {
              dif=c[j]-d[k];
        
              if(dif<0)
              {
                 dif=dif*(-1);
              }
              
              if(dif<l||dif==l)
              {
                  c++;
                  f=1;
                  f1=1;
                  break;
              }
              
          }
          
          if(f)
            break;
      }
      
      if(f1)
        break;
        
    }
    
    res[i]=c;
}
