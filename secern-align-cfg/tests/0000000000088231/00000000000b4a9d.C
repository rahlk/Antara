//bismillah
#include<stdio.h>
#include<math.h>
using namespace std;
bool isDigitPresent(int x, int d);
 main()
 {
 int tno=0,T,N,p,q,i,b,k;
 scanf("%d",&T);
 while(++tno<=T)
 {
 	scanf("%d",&N);
   if(isDigitPresent(N,4)==1 )
	 {
	for(i=1;i<N;i++)
   {
 	b=floor(N/i);
 	k=ceil(N-b);
 	if(isDigitPresent(b,4)!=1)
 	{
	 
 	 if(isDigitPresent(k,4)!=1)
 	 {
	  
 	   printf("case#%d:%d %d\n",tno,b,k);
 	    break;
 	 }
 	}

  }
 }
}
}

 
bool isDigitPresent(int x, int d)
{ 

    while (x > 0) 
    { 
        if (x % 10 == d) 
            break; 
  
        x = x / 10; 
    } 
  
  
    return (x > 0); 
} 
  