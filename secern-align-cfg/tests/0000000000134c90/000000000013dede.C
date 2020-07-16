#include <stdio.h>
#include <string.h>

int impossible;
const long len=500;

char trans(char a)
  { char r=0;
  switch (a)
  {
   case 'R': { r=4; break; }
   case 'P': { r=2; break; } 
   case 'S': { r=1; break; }  
   } 
  return r;
  }

char backtrans(char a)
  { char r=0;
  switch (a)
  {
   case 7: { impossible=1; break; } 
   case 6: { r='P'; break; } 
   case 5: { r='R'; break; } 
   case 4: { r='P'; break; } 
   case 3: { r='S'; break; } 
   case 2: { r='S'; break; } 
   case 1: { r='R'; break; } 
   } 
  return r;
  }

int main(void)
{
int T,t,A;
long i,j,l;
char s[500],C[255][len];
 
scanf("%d", &T);
t=0;
while (t++<T)
 {
  printf("Case #%d: ",t);
  impossible=0;
  scanf("%d", &A);

  for (i=0; i<A; i++) 
   { 
   scanf("%s",s);
   l=strlen(s);
   for (j=0; j<len; j++)
    C[i][j]=trans(s[j%l]); 
   }

  for (i=1; i<A; i++) 
   for (j=0;j<len; j++)
    C[0][j]|=C[i][j];

  for (j=0;j<len; j++)
   C[0][j]=backtrans(C[0][j]);

  if (impossible) { printf("IMPOSSIBLE\n"); }
  else
  {
  for (j=0; j<len; j++) 
    printf("%c",C[0][j]);
  printf("\n");
  }
  }
}