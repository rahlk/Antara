//num4missing

#include <stdio.h>

void job();

int main(){

  int t;
  scanf("%d", &t);

  for(int i=1; i<=t; i++){
    printf("Case #%d: ", i);
    job();
    printf("\n");
  }


  return 0;
}

void job(){
  char num[120];
  char num2[120];
  int  num2p =0;
  int  num2s =0;
  scanf("%s", num);


  for(int i=0; (i<120)&&(num[i]!=0) ;i++){
    if(num2s){
      if(num[i]=='4'){
        printf("2");
        num2[num2p++] = '2';
      }

      else{
        printf("%c", num[i]);
        num2[num2p++] = '0';
      }
    }

    else{
      if(num[i]=='4'){
        printf("2");
        num2[num2p++] = '2';
        num2s=1;
      }

      else{
        printf("%c", num[i]);
      }
    }
  }

  printf(" ");
  num2[num2p] = 0;
  if(num2s)
    printf("%s", num2);

  else
    printf("0");
}
