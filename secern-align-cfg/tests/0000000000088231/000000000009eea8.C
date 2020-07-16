#include<stdio.h>
void printArrays(int n[], int m[], int k){
  int i=0;
  while(n[i]==0){i++;}
  for(; i<k; i++){
    printf("%d", n[i]);
  }
  printf(" ");
  i=0;
  while(m[i]==0){i++;}
  for(; i<k; i++){
    printf("%d", m[i]);
  }
}
int main(){
int T,i;
char h;
scanf("%d", &T);
 scanf("%c",&h);
for(i=0; i<T; i+=1){
  int n[100], m[100];
  char c;
  int j=0;
  scanf("%c",&c);
  while(c!='\n'){
    n[j]=c-'0';
    if(n[j]==5){
      n[j]=3;
      m[j]=2;
    }else if(n[j]==0){
      n[j]=9;
      m[j-1]-=1;
      m[j]=1;
    }else{
      n[j]-=1;
      m[j]=1;
    }
    j++;
    scanf("%c",&c);
  }
  printf("Case #%d: ",i+1);
  printArrays(n,m,j);
  printf("\n");
}
}