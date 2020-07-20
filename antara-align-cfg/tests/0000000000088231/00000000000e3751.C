#include<stdio.h>
int main()
{
int testcases,n=0,element,x=1,y,flag1=0,x1,y1,flag2=0;
scanf("%d",&testcases);
while(n<testcases)
 {
  flag1=0;
  flag2=0;
  scanf("%d",&element);  
  while(1)
   {
    y=element-x;
    y1=y;
    x1=x;
//code to check the presence of 4 in one number
    while(x1>0)
     {
      x1=x1%10;
      x1=x1/10;
      if(x1==4)
       {
        flag1=1;
        break;
       }
     }
//code to check the presence of 4 in second number     
    while(y1>0)
     {
      y1=y1%10;
      y1=y1/10;
      if(y1==4)
       {
        flag2=1;
        break;
       }
     }
    if(flag1==0 && flag2==0)  
     {
      printf("%d %d",x,y);     
     }
    x++; 
   }
  n++;   
 }
}