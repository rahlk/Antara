#include<stdio.h>
#include<malloc.h>
int chk(int,int);
int main()
 {
   int T,*N,i,j,k,f;
   scanf("%d",&T);
   N=(int*)malloc(T*sizeof(int));
   for(i=0;i<T;i++)
    scanf("%d",(N+i));
   for(j=0;j<T;j++)
     {
       f=0;
	   for(i=1;i<=(*(N+j))/2;i++)
	    {
	      for(k=(*(N+j));k>=1;k--)
		{
                  if(i+k==(*(N+j))&&chk(i,k)==1)
		    { 
		      printf("Case #%d: %d %d\n",j+1,i,k);
		      f=1;
		      break;
		    }
		 }
	      if(f==1)
		break;
	     }
	     return 0;
	  }
     }
int chk(int a,int b)
 {
   for(;a!=0;a/=10)
    if(a%10==4)
      return 0;
   for(;b!=0;b/=10)
    if(b%10==4)
      return 0;
   return 1;
 }
