#include<stdio.h>
int replaceDigit(int x,int d1,int d2)
{ 
int    result = 0;  
   int multiply = 1,reminder; 
  
    while (x % 10 > 0)  
  
    {   
        reminder = x % 10; 
            if (reminder == d1)  
            result = (result + d2 *  multiply);  
          
        else
            result = (result + reminder * multiply);  
  
       multiply *= 10; 
        x = (x / 10); 
    }
    return result;
}
int main()
{
    int result,n,t[100000],i,d1 = 4,d2 = 2; 

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    for(i=0;i<n;i++)
    {
           replaceDigit(t[i],d1,d2);
    }
    for(i=0;i<n;i++)
    {
    printf("%d",result);
    }
    
}








    
