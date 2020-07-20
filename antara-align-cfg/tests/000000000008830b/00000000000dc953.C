/*
* File: prob03.c
* Purpose: CodeJam 2019 Qualification Round Problem 3
* Author: Luke Baird
*/
#include <stdio.h>
#include <stdlib.h>

#define BUFF_SZ_SM 128
#define BUFF_SZ_LG 1024

void runProb3(int trial);

int main(void) {
  int numInputs = 0;
  scanf("%d", &numInputs);
  for (int i = 0; i < numInputs; i++) {
    runProb3(i+1);
  }
  return EXIT_SUCCESS;
}

/*
* Function: runProb3
* Purpose: solve problem 3
*/
void runProb3(int trial) {
  int N = 10000;
  int L = 25;
  scanf("%d %d", &N, &L);
  int encoded[BUFF_SZ_LG];// = {3292937,175597,18779,50429,375469,1651121,2102,3722,2376497,611683,489059,2328901,3150061,829981,421301,76409,38477,291931,730241,959821,1664197,3057407,4267589,4729181,5335543};
  for (int i = 0; i < L; i++) {
    scanf("%d", &encoded[i]);
  }
  int primeMap[26];
  printf("Case #%d: ", trial);
  /* begin solving */
  /* start with N and work downwards for all odd numbers */
  /* want: encoded[i] / N - x = integer */
  /* then N - x = 'Z' */
  int primeMapIdx = 25;
  int idx = 0;
  for (idx = (N % 2) - 1; idx <= N; idx += 2) {
    for (int j = 0; j < L; j++) {
      if (encoded[j] % (N - idx) == 0) {
        if ((N-idx) % 5 == 0 && (N-idx) != 5) {
            /* do something */
            break;
        }
        /* send to primeMap */
        primeMap[primeMapIdx] = N - idx;
        primeMapIdx--;
        break;
      }
    }
    
    if (primeMapIdx < 0)
      break;
  }
  /* split values into primes */
  int map[L][2];
  int mFlag = 0;
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < 26; j++) {
      if (encoded[i] % primeMap[j] == 0) {
        if (!mFlag) {
            map[i][mFlag] = j;
            mFlag = 1;
        }
        else {
            map[i][mFlag] = j;
            mFlag = 0;
            break;
        }
      }
    }
  }
  /* output map as values (add 0x41) */
  printf("%c", (char)(map[0][0] + 0x41));
  for (int i = 0; i < L-1; i++) {
      if (map[i][0] == map[i+1][0])
        printf("%c", (char)(map[i][0] + 0x41));
      else if (map[i][0] == map[i+1][1])
        printf("%c", (char)(map[i][0] + 0x41));
      else if (map[i][1] == map[i+1][0])
        printf("%c", (char)(map[i][1] + 0x41));
      else if (map[i][1] == map[i+1][1])
        printf("%c", (char)(map[i][1] + 0x41));
  }
  printf("%c\n", (char)(map[L-1][1] + 0x41));
}