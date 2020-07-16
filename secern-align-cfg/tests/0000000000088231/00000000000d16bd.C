#include <stdio.h>
#include <stdlib.h>
int test(int);

int main()
{
    int t,a[500],i;
    printf("enter the limits   ");
    scanf("%d",&t);
    printf("enter the %d number  ",t);
    for(i=0;i<t;i++)
    {
      scanf("  %d",&a[i]);
   }
  for(i=0;i<t;i++)
    {
      test(a[i]);
    }


    return 0;
}


int test(int a)
{
 int a1,a2,a3,a4;
 int b;
a2=rand()%a;
a1=a-a2;
a3=a1;
a4=a2;
while(a1!=0)
{
  b=a1%10;
  a1=a1/10;
  if(b==4)
  {
    test(a);
  }

}
while(a2!=0)
{
  b=a2%10;
  a2=a2/10;
  if(b==4)
  {
    test(a);
  }

}
printf("%d ,%d \n",a3,a4);
return 0;
}