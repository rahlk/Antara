#include<stdio.h>
#include<stdlib.h>
void main(){
  int T;
  int S=1;
  scanf("%d",&T);
  while(T--){
  long long int N,A=0,B;
  scanf("%lld",&N);
  int array[1000],array1[1000];
  int count = 0;
long long int n =N;
long long int n1=N;
while (n!=0)
{
  n /= 10;
  count++;
}
int k=1;
for(int i=count-1;i>=0;i--){
  array[i]=n1%10;
  array1[i]=array[i];
  if(array1[i]==4)
    array1[i]=3;
  n1/= 10;
    A=A+array1[i]*k;
k=k*10;
}
B=N-A;
printf("Case #%d:%lld %lld\n",S,A,B);
S++;
  }
}
