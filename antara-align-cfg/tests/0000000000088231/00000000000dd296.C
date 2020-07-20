#include<stdio.h>
#include<conio.h>
void main()
{
     int n,rn=0,r;
     printf("Enter an integer");
     scanf("%d",&n);
     z=n;
     if(n==0)
     {
       goto there;   
     }
     if(n==1)
     {
       goto there;   
     }
     if(n==2)
     {
       goto there;   
     }
     if(n==3)
     {
       goto there;   
     }
     while(n!=0)
     {
         r=n%10;
         rn=rn*10+r;
         if(rn==4)
         {
         n=n/10;
         }
         else
         {
            exit(0); 
         }
     }
     
     
     
}