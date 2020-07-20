#include<stdio.h>
int check(int num)
{
	
	int temp=num;
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
   scanf("%ld",&N);
   if(check(N)==0)
       for(i=0;i<=(N/2);i++)
       {
           A=i;
           B=N-i;
           if(check(A)&&check(B))
            {
                printf("\nCase #%hu: %d %d",++x,A,B);
                break;
            }
           
       }
   
   }
    return 0;
}