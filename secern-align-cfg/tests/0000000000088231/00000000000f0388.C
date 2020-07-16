#include<stdio.h>
#include<math.h>
int check(int temp)
{
	

	int flag=0;
	while(temp!=0)
   {
       if((temp % 10) == 4)
            {
                flag = 1;
                break;
            }
       temp=temp/10;
       
   }
   if(flag==0)
   		return 1;// No 4 in the number
   else 
		return 0;		
	
}
int main()
{
   int A,B,N,i; //Total Amount
   short int T,x=0,k; // test case
   scanf("%d",&T);
   
   for(k=1;k<=T;k++)
   {
   scanf("%d",&N);
   if(check(N)==0)
       for(i=0;i<=sqrt(N);i++)
       {
           if(check(i)&&check(N-i))
            {
                printf("\nCase #%hu: %d %d",++x,i,N-i);
                break;
            }
           
       }
   
   }
    return 0;
}