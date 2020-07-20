#include <stdio.h>

unsigned n;
char lydia[1000][1000];
char solution[2000];
unsigned cur;

static void read_lydia(int n)
{
  int ch;
  unsigned x, y;

  for (x = 0; x < n; x++)
    for (y = 0; y < n; y++)
      lydia[x][y] = 0;

  x = 0; y = 0;
  while ((ch = getchar()) != EOF) {
    if (ch == '\n')
      break;
    lydia[x][y] = ch;
    if (ch == 'E')
      x++;
    else if (ch == 'S')
      y++;
  }
}

static int explore(unsigned x, unsigned y)
{
  if (x == n-1 && y == n-1) {
    solution[cur] = '\0';
    return 1;
  }
  if (x+1 < n && lydia[x][y] != 'E') {
    solution[cur++] = 'E';
    if (explore(x+1, y))
      return 1;
    cur--;
  }
  if (y+1 < n && lydia[x][y] != 'S') {
    solution[cur++] = 'S';
    if (explore(x, y+1))
      return 1;
    cur--;
  }
  return 0;
}

int main(void)
{
  unsigned i, t;

  scanf("%u\n", &t);
  for (i = 0; i < t; i++) {
    scanf("%u\n", &n);

    if (n > 1000)
      return 1; /* we will definitely return the wrong answer */

    read_lydia(n);
    cur = 0;
    explore(0, 0);
    printf("Case #%u: %s\n", i+1, solution);
  }
}
