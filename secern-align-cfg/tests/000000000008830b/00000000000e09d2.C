#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() 
{
  long long int i,j,t,k,n,m,y;
  scanf("%lld",&t);
  while(t--)
  {
      long long int min=99460729,val2,val1,temp,prev;
      scanf("%lld %lld",&m,&n);
      long long int a[n+1],index,x=3;
      for(i=0;i<n;i++)
      {
          scanf("%lld",&a[i]);
          if(a[i]<=min)
          {
              min=a[i];
              index=i;
          }
      }
      for(i=2;i*i<=min;i++)
      {
          if(min%i==0)
          {
             val1=i;
             break;
          }
      }
      if(index+1<n)
      {
       if(a[index+1]%val1==0)
      {
          val2=val1;
          val1=a[index]/val1;
      }
      else
      {
          val2=a[index]/val1;
      }
      a[index]=val1;prev=val1;
      for(i=index-1;i>=0;i--)
      {
          a[i]=a[i]/prev;
          prev=a[i];
      }
      prev=val2;
      for(i=index+1;i<n;i++)
      {
          temp=prev;
          prev=a[i]/temp;
          a[i]=temp;
      }
      a[n]=prev;
      }
      else
      {
      if(a[index-1]%val1==0)
      {
          val2=val1;
          val1=a[index]/val1;
          a[n]=val1;
      }
      else
      {
          val2=a[index]/val1;
          a[n]=val1;
      }
      a[index]=val2;prev=val2;
      for(i=index-1;i>=0;i--)
      {
          a[i]=a[i]/prev;
          prev=a[i];
      }
      prev=val2;
      for(i=index+1;i<n;i++)
      {
          temp=prev;
          prev=a[i]/temp;
          a[i]=temp;
      }
      }
      long long int xy[n+1],count=0,cmin;
      for(i=0;i<=n;i++)
      {
          int hh[9974] = {[0 ... 9973] = 1};
          cmin=a[i];count=0;
          for(j=0;j<=n;j++)
          {
            
              if(a[j]<cmin && hh[a[j]]==1)
              {
                  count++;
                  hh[a[j]]=0;
                
              }
          }
          xy[i]=count;
      }
      for(i=0;i<=n;i++)
      {
          printf("%c",'A'+xy[i]);
      }
      printf("\n");
  }
}
