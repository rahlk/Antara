#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<string.h>
void checkAndPrint(); 
void divide();
char s[101];
char a[101], x[101];
int t=1;
int main()
{
   int c;
   scanf("%d",&c);
   while(t<=c)
   {
      scanf("%s",s);
      divide();
      checkAndPrint();
      t++;
   }
   return 0;
}
void checkAndPrint()
{
   int i=0;
   while(a[i]!='\0')
   {
       if(a[i]=='4')
       {
           a[i]+=1;
           x[i]-=1;
       }
       i++;
   }
   i=0;
    while(x[i]!='\0')
    {
       if(x[i]=='4')
       {
           a[i]+=1;
           x[i]-=1;
       }
       i++;
    }
   
   printf("Case #%d: %s %s \n",t,a,x);
}
void divide()
{
   int i=0,z=0,rem=0,y=0,car=0;
   while(s[i]!='\0')
   {
       z=y=s[i]-'0';
       if (rem==1)
       y=z+=10;
       z/=2;
       rem=y%2;
       a[i]='0'+z;
       x[i]=a[i];
       i++;
   }
   i-=1;
   if(rem==1)
   {
       car=rem;
       while(i>=0)
       {
           if(car==1)
           {
             y=a[i]-'0';
             y+=1;
             z=y%10;
             car=y/10;
             a[i]='0'+z;  
           }
           else
           break;
           i--;
       }
   }
   if(a[0]=='0')
   {
       i=0;
       while(a[i]!='\0')
       {
           a[i]=a[i+1];
           i++;
       }
   }
   if(x[0]=='0')
   {
       i=0;
       while(x[i]!='\0')
       {
           x[i]=x[i+1];
           i++;
       }
   }
}