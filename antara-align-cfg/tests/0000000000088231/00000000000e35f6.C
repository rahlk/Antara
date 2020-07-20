#include<stdio.h>
int main()
{
 int T,i,j;
 scanf("%d",&T);
 getchar();
 for(i=1;i<=T;i++)
 {
  char a[101],A[101],B[101];
  char b;
  int p=0;
  for(j=0;j<101;j++)
   {
    scanf("%c",&b);
    if(b!='\n')
    {
     a[j]=b;
    }
    else{
    a[j]=b;
      break;}
     }
     for(p=0;p<j;p++){
    if(a[p]!='4'){
     A[p]=a[p];
     B[p]='0';}
     else
     {A[p]='2';
     B[p]='2';}
     }
     A[j]='\0';
     B[j]='\0';
     printf("Case #%d: ",i);
     int q=0;
     while(A[q]!='\0'){
      printf("%c",A[q]);
      q++;
      }
      printf(" ");
      q=0;
       while(B[q]=='0'){
       q++;}
       while(B[q]!='\0'){
      printf("%c",B[q]);
      q++;
      }
      printf("\n");
      }
      }