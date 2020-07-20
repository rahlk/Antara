#include <stdio.h>

int main(void)
{
int T,i;
char A[101], B[101], N[101];
char *a,*b,*n;
 
scanf("%d", &T);
i=1;
do {
  scanf("%s", N);
  n=N; a=A; b=B;

  do {
    if (*n=='4') {*a='2'; *b='2'; a++; b++;} else {*a=*n; a++; if (b>B) {*b='0'; b++;} }
    } while (*++n>0);
  *a=0; *b=0;

  printf("Case #%d: %s %s\n",i,A,B);
  } while (i++<T);
}