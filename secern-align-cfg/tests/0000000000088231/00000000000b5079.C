#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void int_to_str(int x,char res[])
{
  if (x==0){
    res[0]='0';
    res[1]=0;
    return;
  }
  int y=x;
  int stock;
  int i=0;
  while (y !=0){
    stock=y%10;
    res[i]=stock+'0';
    i++;
    y=y/10;
  }
  res[i]=0;
  int j;
  char tmp;
  for (j=0;j<(i/2);j++){
    tmp=res[j];
    res[j]=res[i-j-1];
    res[i-j-1]=tmp;
  }
  //printf("%d=%s\n",x,res);
}



int contains_four(char* str)
{
  int i=0;
  while (str[i]!=0 && str[i] != '4'){
    i++;
  }
  return str[i]!=0;
}

int main(int argc,char* argv[]){
    char tmpN[21];
    fgets(tmpN,21,stdin);
    int NB_cases=atoi(tmpN);
    int cnt=0;
    int i;
    int N;
    char A[21];
    char B[21];
    while (cnt < NB_cases){
      cnt++;
      fgets(tmpN,21,stdin);
      N=atoi(tmpN);
      for(i=0;i<=N/2;i++){
        int_to_str(i,A);
        if (contains_four(A)){
          continue;
        }
        int_to_str(N-i,B);
        if(! (contains_four(B))){
          printf("Case #%d: %d %d\n",cnt,i,N-i);
          break;
        }
      }
    }
    return 0;
  }
