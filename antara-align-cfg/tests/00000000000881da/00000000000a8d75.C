#include <stdio.h>
#include <string.h>
void main(){
int i,j,T,N,P;
scanf("%d",&T);
for(i=0;i<T;i++)
{
  scanf("%d",&N);
  P=2*N-2;
  char str1[P],str2[P];
  for(j=0;j<P;j++)
   scanf("%c",str1[j]);
   
   
  printf("Case # %d: %s",i,str2);

}
}