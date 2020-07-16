#include<stdio.h>
int num(int n)
{
  while(n>0)
  {
    if(n%10==4)
     return 0;
    n=(int)n/10;
  }
  return 1;
}
int main()
{
  int t,i,t1,t2;
  scanf("%d",&t);
  int arr[t];
  for(i=0;i<t;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<t;i++)
  {
    if(arr[i]%2==0)
     t1=t2=arr[i]/2;
    else
    {
      t1=arr[i]/2;
      t2=t1+1;
    }
    while(t1>0 && t2<arr[i]){
        if(num(t1) && num(t2))
        {
            printf("case #%d %d %d\n",i+1,t1,t2);
            break;
       }
        else{
            t1--;
            t2++;
     }
   }
  }
  return 0;
}
