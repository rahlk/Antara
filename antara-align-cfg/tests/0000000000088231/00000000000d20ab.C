#include<stdio.h>
int main()
{
    int i,j,a,k[100],b,n,t=1;
    scanf("%d",&t);
    scanf("%d",&n);
    switch(t)
    {
        case 1:
          if(n>0)&&(n<100000)
          {
              for(a=0;a<n;a++)
              {
                  for(b=0;b<n;b++)
                  {
                      n=a+b;
                  } 
                  for(i=0;i<10;i++)
                  {
                      k[i]=n;
                      if(k[i]==4)
                      {
                          printf("%d",a);
                          printf("%d",b);
                      }
                  }
    
              }
          }
          case 2:if(n>0)&&(n<1000000000)
          {
              for(a=0;a<n;a++)
              {
                  for(b=0;b<n;b++)
                  {
                      n=a+b;
                  } 
                  for(i=0;i<10;i++)
                  {
                      k[i]=n;
                      if(k[i]==4)
                      {
                          printf("%d",a);
                          printf("%d",b);
                      }
                  }
    
              }
          }
          
    }
}