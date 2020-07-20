#include<stdio.h>

void checkAndPrint(); 
void divide();
char a[101], x[101];
int main()
{
   int t;
   scanf("%d",&t);
   while(t>0)
   {
      scanf("%s",a);
      divide();
      checkAndPrint();
      t--;
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
   
   printf("%s %s\n",a,x);
}
void divide()
{
   int i=0,z=0,rem=0,y=0;
   while(a[i]!='\0')
   {
       z=y=a[i]-'0';
       if (rem==1)
       y=z+=10;
       z/=2;
       rem=y%2;
       a[i]='0'+z;
       x[i]=a[i];
       i++;
   }
   if(a[0]=='0')
   {
       i=0;
       while(a[i]!='\0')
       {
           x[i]=a[i]=a[i+1];
           i++;
       }
       i-=1;
   }
   if(rem==1)
   {
       a[i-1]+=1;
   }
}