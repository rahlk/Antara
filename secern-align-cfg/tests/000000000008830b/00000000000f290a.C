#include <stdio.h>

int NOD(int a1,int b1)
  {
  unsigned int a,b;
  a=a1; b=b1;
  while ((a>0) && (b>0))
    {
    if (a>b) { a=a%b;} else { b=b%a;}
    }
  return (a+b);
  }

int main(void)
{
int T,t,L,i,j;
int f1,f2;
int N,I[100];
 
scanf("%d", &T);
t=1;
do {
  scanf("%d %d\n", &N, &L);

  for (i=0; i<L; i++ ) 
   { scanf("%d", &f1);  I[i]=f1; }

  f1=NOD(I[0],I[1]);

  I[0]=I[0]/f1; 
  for (i=0; i<L; i++) 
   { f2=I[i+1]/f1; I[i+1]=f1; f1=f2; }

  f2=I[0];
  for (i=0; i<=L; i++) 
    { if (I[i]>f2) { f2=I[i]; }}

  for (i=0; i<=L; i++) 
   {
   f1=f2;
   for (j=0; j<=L; j++) 
    { if (I[j]<f1 && I[j]>i) { f1=I[j]; }}
   for (j=0; j<=L; j++) 
    { if (I[j]==f1) { I[j]=i; }}
   }

  printf("Case #%d: ",t);
  for (j=0; j<=L; j++) 
    { printf("%c",'A'+I[j]); }
  printf("\n");
  } while (t++<T);
}