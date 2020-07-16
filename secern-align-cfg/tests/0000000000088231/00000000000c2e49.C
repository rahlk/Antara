#include<stdio.h>
#include<math.h>
void main()
{

   long int T,n,a,b,i,r,l,d,ar[(long int)pow(10,9)];scanf("%li",&T);int k;
    for(i=0;i<T;i++)
   scanf("%li",&a[i]);
    for(k=0;k<T;k++)
  {
 a=ar[k]; r=0;l=(int)floor(log10(a))+1;
 while(l>=1)
 {l=(int)floor(log10(a))+1;
     d=a/(int)pow(10,l-1);
     if(d==4)
     d=1;
    else d=0;
     r=r*10+d;a=a%(int)pow(10,l-1);l--;
 }
       a=r;
        b=ar[k]-a;
        printf("Case #%li: %li %li",(i+1),a,b);
    }
      }

