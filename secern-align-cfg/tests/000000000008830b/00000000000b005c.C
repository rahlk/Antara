#include<stdio.h>
#include<string.h>

int main()
{
  int T;
  int _T;
  scanf("%d",&T);
  _T = T;
  while(T--)
  {
    int i = 0,j=0;
    char A[101],B[101];
    scanf("%s",A);
    B[0]='0';
    while(A[i] != '\0')
    {
      //printf("%d %c %d %c\n",i,A[i],j,B[j]);
      if(A[i] == '4') 
      {
	A[i]='2';
	B[j]='2';
      }
      i++;
      //printf("%d %c %d %c\n",i,A[i],j,B[j]);
      if(B[0] =='2')j++;
      B[j]='0';
      //printf("%d %c %d %c\n",i,A[i],j,B[j]);
    }
    B[j]='\0';
    printf("Case %d: %s %s\n",_T-T,A,B);
  }
  return 0;
}
