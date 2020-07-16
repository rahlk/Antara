#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

  int test, adv;
  scanf("%d", &test);
  char *soluzione, *sol;
  int s, r, p = 0;

  for (int t = 1; t <= test; t++) {
      scanf("%d", &adv);
      char mosse[adv][500];
      memset(mosse, 0, sizeof(char) * adv * 501);
      for(int c = 0; c < adv; c++)
          scanf("%s\n", mosse[c]);
      sol = (char *)malloc((501)*sizeof(char));

      soluzione = sol;
      for(int pos = 0; pos < 501; pos ++){
          int s = 0, r = 0, p = 0;
          for(int c = 0; c < adv; c++){
              if(mosse[c][pos] == 'P')
                  p = 1;
              else if(mosse[c][pos] == 'S')
                  s = 1;
              else if(mosse[c][pos] == 'R')
                  r = 1;
          }
          if(r == 1 && s == 1 && p == 1 )
            {
                  soluzione = "IMPOSSIBLE";
                  break;
            }
          else if(r == 0 && s == 0 && p == 0 )
              break;
          else if((r == 1 && s == 0 && p == 0) || (r == 1 && s == 0 && p == 1) )
              sol[pos] = 'P';
          else if((r == 0 && s == 0 && p == 1) || (r == 0 && s == 1 && p == 1) )
              sol[pos] = 'S';
          else
              sol[pos] = 'R';

      }
      printf("Case #%d: %s\n", t, soluzione );
  }

  return 0;
}
