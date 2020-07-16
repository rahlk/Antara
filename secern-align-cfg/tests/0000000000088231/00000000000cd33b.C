#include <stdio.h>
int main()
 {
  int t, a;
  int b = 0;
  int j, d, p,sum=0;
  scanf("%d", &t);
  int i, n;
  for (i = 0; i < t; i++)
  {
    scanf("%d", &n);
    a = n;
    p=n;
    j=1;
    while(a>0)
    {
        d=a%10;
        if(d==4)
        {
            p=p-j;
            sum = n-p;
        }
        a=a/10;
        j=j*10;
    }
    printf("Case #%d: %d %d", i + 1, p, sum);
    printf("\n");
  }
  return 0;
}