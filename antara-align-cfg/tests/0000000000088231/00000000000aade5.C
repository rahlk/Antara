#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,n,half,temp,temp2,digit,index,count,count2,i=1,testcase;
    scanf("%d",&testcase);
    while(testcase--){
        index=0;
    scanf("%d",&n);
    if(n%2==0)
    {
        half=n/2;
        temp=half;
        while(temp!=0)
        {
          digit=temp%10;
          if(digit==4)
          {
              count=index;
          break;}
          temp=temp/10;
          index++;
        }//while
        a=half-pow(10,count);
        b=half+pow(10,count); 
        printf("Case #%d: %d %d ",i++,a,b);
    }//if number is even
    else
    {
        half=n/2;
        a=half+1;
        b=half;
        temp=a;
         while(temp!=0)
        {
          digit=temp%10;
          if(digit==4)
          {
              count=index; 
          break;}
          temp=temp/10;
          index++;
        }//while
        temp2=b;
         while(temp2!=0)
        {
          digit=temp2%10;
          if(digit==4)
          {
              count2=index;
          break;}
          temp2=temp2/10;
          index++;
        }//while
        a=a-pow(10,count);
        b=b+pow(10,count2); 
        printf("Case #%d: %d %d ",i++,a,b);
    }
    }
}