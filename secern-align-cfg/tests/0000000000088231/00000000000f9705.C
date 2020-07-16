#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCASES 100

//------------------------------------------------------

int check_for_four(long value) {

  char s[50];

  sscanf(s, "%li", &value);

  printf("s=%s\n", &(s[0]));

  return 0;
}

//------------------------------------------------------

int main(int argc, char **argv) {

  int numTestCases = 0;
  int maxTestCases = 100;
  long amount;
  long amount1;
  long amount2;
  int idx;

  scanf("%d", &numTestCases);

  if (numTestCases > MAXCASES) {
    perror("Error: numTestCases exceeds MAXCASES\n");
    return(-1);
  }

  for (int i = 1; i < numTestCases+1; i++) {

    scanf("%li", &amount);

    idx = check_for_four(amount);

    if ((amount % 2) > 0) {
      amount1 = amount / 2;
      amount2 = (amount / 2) + 1;
    }
    else {
      amount1 = amount2 = amount/2;
    }



    printf("Case #%d: %li %li\n", i, amount1, amount2);
  }

  exit(0);
}
