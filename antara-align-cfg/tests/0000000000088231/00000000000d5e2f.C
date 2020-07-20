#include<stdio.h>
#include <math.h>

int main() {
    signed int t,a[100],b=0,i,j,l;
    float y=1;
    scanf("%d",&t);
    signed int n[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    y=0;
for(i=0;i<t;i++)    
{ int number=n[i];
    int array[100];
    int loop;
int count=0,i,j;
int n = number;

while (n != 0)
{
    n /= 10;
    count++;
}
j=count;

if(count!=0)
{
   int numberArray[count];

   count = 0;    
   n = number;

   while (n != 0){
       numberArray[count] = n % 10;
       n /= 10;
       count++;
   }
  
   i=0;
   for(loop = j-1; loop >= 0; loop--)
      {array[i]=numberArray[loop];
      
        i++;  
      }
 for(i=0;i<j;i++)      
a[i]=array[i];

for(i=0;i<j;i++)
{
 if(array[i]==4)
 {
     a[i]=array[i]-1;
     b=b+pow(10,j-i-1);
     
     
 }
   
 
   
}


printf("Case #%.0f ",y+1);
y++;

for(i=0;i<j;i++)
{printf("%d",a[i]);
}
printf(" %d \n",b);


}
b=0;

}
}