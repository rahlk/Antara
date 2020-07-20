#include<stdio.h>
#include<string.h>
int main(){
  int test_cases,i,num=1;
  char org_num[100000];
  scanf(" %d",&test_cases);
  while(test_cases--){
    int size;
    scanf(" %d",&size);
    scanf(" %s",org_num);
    printf("Case #%d: ",num++);
    for( i=0;i<strlen(org_num);i++){
      if(org_num[i]=='S'){
        printf("E");
      }else{
        printf("S");
      }
    }
    printf("\n");
  }
}