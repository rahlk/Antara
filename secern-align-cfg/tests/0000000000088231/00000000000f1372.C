#include<stdio.h>
#include<math.h>
int check(long int temp)
{
	while(temp!=0)
   {
       if((temp % 10) == 4)
            {
                return 0;
            }
       temp=temp/10;
   }
   		return 1;
	
}
int main()
{
   long int A,B,N,i; //Total Amount
   short int T,x=0,k; // test case
   scanf("%hu",&T);
   
   for(k=1;k<=T;k++)
   {
   scanf("%ld",&N);
  
       for(i=0;i<=(N/4);i++)
       {
           if(check(i)&&check(N-i))
            {
                printf("\nCase #%hu: %ld %ld",++x,i,N-i);
                break;
            }
           
       }
   
   }
    return 0;
}