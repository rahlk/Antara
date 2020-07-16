#include<stdio.h>
#include<stdlib.h>
long long int power(int i){
  if (i==0)
    return 1;
  else if (i==1)
    return 10;
  else
    return 10*power(i-1);
}
void main(){
  int T;
  scanf("%d",&T);
  while(T--){
  long long int N,A=1,B;
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
for(int i=count;i>=0;i--){
  array[i]=n1%10;
  array1[i]=array[i];
  if(array1[i]==4)
    array1[i]=3;
  n1/= 10;
  if(i==count)
    A=array1[i]*power(count-i);
  else
    A=A+array1[i]*power(count-i);
}
B=N-A;
printf("%lld %lld\n",A,B);
  }
}
