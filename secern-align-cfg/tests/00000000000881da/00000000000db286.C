#include <stdio.h>

void main()
{
double N,i,a,t,j;
char path1 [1000000];
char path2 [1000000];

scanf ("%d",&t);
if (t>=1 && t<=100)
for (i=1;i<=t;i++)
  {
    scanf ("%d",&a);
    N=(a*2)-2;
    gets(path1);
             for (j=0;j<2N-1;j++)
            {
                      if (path1 [j] == 'S')
                      path2[j] ='E';
                      else
                      path2[j] ='S';
            }
    printf("Case #%d",i);      
    puts(path2);  
  }
  return 0;
}