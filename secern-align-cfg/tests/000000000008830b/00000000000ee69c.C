#include <stdio.h>

int main(void) 
{
  int test,count,count1,count2,n,l,m;
  int arr[101],arr1[102],arr2[26];
  scanf("%d",&test);
  for(count=1;count<=test;count++)
  {
   scanf("%d%d",&n,&l);
   for(count1=0;count1<l;count1++)
   {
     scanf("%d",&arr[count1]);
   }
   for(count1=2;count1<=n;count1++)
   {
     if(count1!=2 && count1%2!=0)
     {
     if(arr[0]%count1==0 && arr[1]%count1==0)
     {
       break;
     }
     }
   }
   arr1[1]=count1;
   arr1[0]=arr[0]/count1;
   arr1[2]=arr[1]/count1;
   for(count1=3;count1<=l;count1++)
   {
     arr1[count1]=arr[count1-1]/arr1[count1-1];
   
   }
   for(count1=0;count1<=l;count1++)
   {
     arr[count1]=arr1[count1];
   }
  
  
   for(count1=0;count1<l;count1++)
   {
     for(count2=0;count2<l-count1;count2++)
     {
       if(arr1[count2]>arr1[count2+1])
       {
         m=arr1[count2+1];
         arr1[count2+1]=arr1[count2];
         arr1[count2]=m;
       }
     }
     
   }
  
   
   
   m=0;
   for(count1=0;count1<l;count1++)
   {
     if(arr1[count1]==arr1[count1+1])
     {
       continue;
     }
     else if(arr1[count1]!=arr1[count1+1])
     {
      arr2[m]=arr1[count1];
      m++;
     }
   }
   arr2[m]=arr1[l];
   printf("Case #%d: ",count);
   for(count1=0;count1<=l;count1++)
   {
     for(count2=0;count2<26;count2++)
     {

       if(arr[count1]==arr2[count2])
       {
         printf("%c",'A'+count2);
       }
     }
   }
   printf("\n");

  }
  return 0;
}