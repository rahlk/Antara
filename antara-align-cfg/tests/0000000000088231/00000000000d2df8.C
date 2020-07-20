#include<stdio.h>
#include<string.h>
int main()
{
  int temp,i,j,k=1,ctr;
  scanf("%d",&temp);
  while(temp--)
  {
  char arr1[100];
  char arr2[100];    
  scanf(" %s",arr1);
  int count=0;
    for(i=0;i<strlen(arr1);i++)
    {
      if(arr1[i]=='4')
      {
        arr1[i]='3';
        arr2[i]='1';
        if(count==0)
    ctr=i;
        count++;
      }
      else
      arr2[i]='0';
    }
    printf("Case #%d: %s ",k++,arr1);
  for(j=ctr;j<strlen(arr1);j++)
    {
      printf("%c",arr2[j]);
    }
    printf("\n");
  }
}