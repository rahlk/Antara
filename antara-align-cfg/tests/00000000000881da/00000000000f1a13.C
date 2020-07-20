#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cases, N, i, n, p;
    char *lydia;
    
    scanf("%d", &cases);
    
    n = 1;
    while (n <= cases) {
          scanf("%d", &N);
          
          lydia = malloc(sizeof(char) * 2 * (N - 1));
          scanf("%s", lydia);

          for(i = 0; i < 2 * (N - 1); i++) {
                if (lydia[i] == 'E') {
                             lydia[i] = 'S';
                }
                else {
                     lydia[i] = 'E';
                }
          }
          printf("Case #%d: ", n);
          for (p = 0; p < 2 * (N - 1); p++) {
              printf("%c", lydia[p]);
          }
          printf("\n");
          
          free(lydia);
          n++;
    }
        
    return 0;
}
