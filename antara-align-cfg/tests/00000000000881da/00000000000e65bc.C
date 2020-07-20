#include <stdio.h>

int main(void)
{
int T,i,N;
char P[100000];
char *p;
 
scanf("%d", &T);
i=1;
do {
  scanf("%lld", &N);
  scanf("%s", P);
  p=P; 

  do {
    if (*p=='E') {*p='S';} else {*p='E';}
    } while (*++p>0);
  *p=0;

  printf("Case #%d: %s\n",i,P);
  } while (i++<T);
}