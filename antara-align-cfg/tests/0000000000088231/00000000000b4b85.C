#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  int t,n,t1,t2,i=0,n1,ctr=0,i1=0,flag=0,temp=0,i3=1,i4=0;
  int po4[30];
  scanf(" %d",&t);
  while(t--)
  {
    ctr=0;
    flag=0;
    scanf(" %d",&n);
    t1=n/2;
    t2=t1;
    n1=t1;
    while(n1)
    {
      i=n1%10;
      if(i==4)
      {
        flag=1;
        po4[i1]=ctr;
        ++i1;
      }
      n1=n1/10;
      ++ctr;
    }
    if(flag==1)
    {
      for(i=i4;i<=i1;i++)
      {
        temp=temp+pow(10,po4[i]);
      }
      temp=temp-1;
      t1=t1-temp;
      t2=t2+temp;
    }
    printf("Case #%d: %d %d",i3++,t1,t2);
    if(i3!=4)
    printf("\n");
        i4=i1;
  }
}