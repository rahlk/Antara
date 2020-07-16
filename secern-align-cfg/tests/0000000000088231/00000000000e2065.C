#include<stdio.h>
int check(long int num)
{
	
	long int temp=num,rem;
	int flag=0;
	while(temp!=0)
   {
       rem = temp % 10;
       if(rem == 4)
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
   long int A,B,N,i,temp; //Total Amount
   int T,flag=0,x=0; // test case
   scanf("%ld",&N);

	printf("%d",check(N));   

   if(check(N)==0)
       for(i=0;i<=(N/2);i++)
       {
           
           A=i;
           B=N-i;
           if(check(A)&&check(B))
            printf("\nCase #%d: %d %d",++x,A,B);
           
       }
   
    
    return 0;
}