#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

static void solve (void);

int main ()
{
  /*freopen ("in.txt", "r", stdin);*/
  /*freopen ("out.txt", "w", stdout);*/
  int t,i;
  scanf ("%d", &t);
  for (i = 0; i < t; i++) {
    printf ("Case #%d: ", i + 1);
    solve ();
  }
  return 0;
}


void solve (void)
{

    char a[100] = {0};
    char b[100] = {0};
    char n[100] = {0};

    scanf("%s\n", n);
    int len = strlen(n);

    for(int i = 0; i < len; i++)
    {
        if(n[i] == '4')
        {
            a[i] = '3';
            b[i] = '1';
        }
        else
        {
            a[i] = n[i];
            b[i] = '0';
        }
    }
    int j = 0;
    while(b[j] == '0') {j++;}
    printf("%s %s\n", a, &b[j]);

}


