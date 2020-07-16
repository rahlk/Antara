#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sol1(int num)
{
    int i=0,b=0,g,a,h,digit;

   h=num;
   while(h)
   {    
       digit=h%10;
       if(digit==4)
       {
           g=pow(10,i);
           a=num-g;
           b=b+g;
       }
       h=h/10;
       i++;
   }
    printf("%d %d\n",a,b);
       
 
}
void main()
{
    int a[100],b,i;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",a+i);
        
    }
    for(i=0;i<b;i++)
    {
        printf("Case #%d: ",i);
        sol1(a[i]);
    }
    
}
