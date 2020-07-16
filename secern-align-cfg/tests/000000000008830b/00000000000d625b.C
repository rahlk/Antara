#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef unsigned long BIG;

BIG gcd(BIG a, BIG b) {
  if (a > b) {
    BIG tmp = a;
    a = b;
    b = tmp;
  }

  BIG r = b % a;
  if (r == 0) {
    return a;
  }

  return gcd(r, a);
}

void insert(BIG primes[26], int* p, BIG k) {
  for (int i = 0; i < (*p); i++) {
    if (primes[i] == k) {
      return;
    }
  }

  int m;
  for (m = (*p); m > 0 && primes[m - 1] > k; m--) {
    primes[m] = primes[m - 1];
  }
  primes[m] = k;
  (*p)++;
}

char convert(BIG primes[26], int prime) {
  for (int i = 0; i < 26; i++)
    if (prime == primes[i])
      return 'A' + i;

  return '?';
}


int main(void) {
  int tests;
  scanf("%d", &tests);

  int index = 1;
  while (tests-- > 0) {
    BIG primes[26] = { 0 };
    int p = 0;

    int l, i = 2;
    BIG n;
    scanf("%lu %d", &n, &l);

    BIG* tokens = calloc(l + 1, sizeof(*tokens));

    BIG first, second, cur;
    scanf("%lu", &first);
    scanf("%lu", &second);

    BIG g = gcd(first, second);
    tokens[0] = first / g;
    tokens[1] = g;
    tokens[2] = second / g;

    while (i++ < l) {
      BIG tmp;
      scanf("%lu", &tmp);
      tokens[i] = tmp / tokens[i - 1];
    }

    for (i = 0; i < l + 1; i++) {
      insert(primes, &p, tokens[i]);
    }

    printf("Case #%d: ", index++);
    for (i = 0; i < l + 1; i++) {
      printf("%c", convert(primes, tokens[i]));
    }
    printf("\n");
    fflush(stdout);

    free(tokens);
  }

  return 0;
}
