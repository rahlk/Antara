#include<stdio.h>
int find(int )
int main()
{
    int n,i=0,k,ans1=0,count,rem,flag,a[100],b[100];
    scanf("%d",&n);
    k=n;
   while(k>0)
   {
       rem=n%10;
       if(rem==4)
       {
           a[i]=1;
           i++;
       }
      else
      {
      a[i]=0;
      i++;
      j=i;
      }
   }
      for(v=0,w=i;v<j,w>=0;v++,w--)
      {
          b[v]=a[w];
      }
      ans1=n-b;
   
    printf("%d %d",ans1,b);
    return 0;
}
