#include<stdio.h>
#include<string.h>
int main(){
  int test_cases,i,org_num=1,counter;
  scanf("%d",&test_cases);
  while(test_cases--){
  char arr[100],arr1[100];
  scanf(" %s",arr);
  int sum=0;
    for(i=0;i<strlen(arr);i++){
      if(arr[i]=='4'){
        arr[i]='3';
        arr1[i]='1';
        if(sum==0)
    count=i;
        sum++;
      }
      else
      arr1[i]='0';
    }
    printf("Case #%d: %s ",org_num++,arr);
    int j;
  for(j=count;j<strlen(arr);j++){
      printf("%c",arr1[j]);
    }
    printf("\n");
  }
}