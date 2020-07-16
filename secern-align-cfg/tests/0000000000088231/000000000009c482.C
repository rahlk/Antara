#include<stdio.h>
#include<stdlib.h>

int main(){
  int T,t=0,a,b;
  char *A, *B, c;
  A=(char*)calloc(102,sizeof(char));
  B=(char*)calloc(102,sizeof(char));
  scanf("%i",&T);
  for(t=0;t<T;t++){
    a=b=0;
    while((c=getchar())!=EOF && c!='\n')
      if(c == '4'){
        A[a++]='3';
        B[b++]='1';
        break;
      }
      else
        A[a++]=c;
        
    while((c=getchar())!=EOF && c!='\n')
      if(c == '4'){
        A[a++]='3';
        B[b++]='1';
      }
      else{
        A[a++]=c;
        B[b++]='0';
      }
    A[a]=B[b]=0;
    printf("Case #%i: %s %s\n", t+1, A, B);
  }
}