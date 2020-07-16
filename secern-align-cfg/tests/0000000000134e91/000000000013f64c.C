

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BLK_SIZE 5

char *symbols_left;



int fact(int n) {
  if (n == 1)
    return 1;

  return n * fact(n - 1);
}



void init_symbols(int size) {
  int x;

  symbols_left = malloc(size + 1);

  for (x = 0; x < size; x++) {
    symbols_left[x] = 'A' + x;
  }
  symbols_left[size] = 0;

  // fprintf(stderr, "[dbg] init symbols = \"%s\"\n", symbols_left);
}

void uninit_symbols() {
  free(symbols_left);
  symbols_left = NULL;
}


int resolve_symbol(char X) {
  char *x = strchr(symbols_left, X);

  if (!x) {
    printf("ERR SYMBOL '%c' NOT FOUND IN \"%s\"\n", X, symbols_left);
    exit(1);
  }

  return x - symbols_left;
}


char extract_symbol(int pos) {
  int s,x,p;
  char res;

  s = strlen(symbols_left);

  // fprintf(stderr, "[dbg] fetching symbol %d from \"%s\"\n", pos, symbols_left);
  p = 0;
  for (x = 0; x < s; x++) {
    if (x == pos)
      res = symbols_left[x];
    else {
      symbols_left[p] = symbols_left[x];
      p++;
    }
  }
  symbols_left[p] = 0;

  // fprintf(stderr, "[dbg] .. extracted symbol %c (now \"%s\")\n", res, symbols_left);

  return res;
}





int query_position(int blk, int pos) {
  char xres[16];
  int qpos;

  qpos = (blk * BLK_SIZE) + pos;

  // fprintf(stderr, "[dbg] QUERY blk=%d pos=%d (qpos=%d)\n", blk, pos, qpos);

  printf("%d\n", qpos + 1);
  fflush(stdout);
  scanf("%s", xres);

  // fprintf(stderr, "[dbg] ANSWER=%s\n", xres);

  return resolve_symbol(xres[0]);
}


char *solve_problem_n(int size, int *spots) {
  /* query the first position of each tuple to determine the one missing */
  int *positions[size];
  int counts[size];
  int slots;
  int queries;
  int x, j;
  int winner;
  char winner_ch;
  char *subsol, *sol;

  if (size == 1) {
    // fprintf(stderr, "[dbg] FINAL CASE, only one symbol!\n");
    sol = malloc(2);
    sol[0] = extract_symbol(0);
    sol[1] = 0;
    return sol;
  }

  slots = fact(size - 1);
  queries = size * slots - 1;

  // fprintf(stderr, "[dbg] SOLVING problem size=%d [slots=%d queries=%d]\n", size, slots, queries);

  for (x = 0; x < size; x++) {
    counts[x] = 0;
    positions[x] = calloc(slots, sizeof(int));
    for (j = 0; j < slots; j++) {
      positions[x][j] = -1;
    }
  }

  for (x = 0; x < queries; x++) {
    int blk_overall_pos;
    int res;

    /* determine the query position */
    if (spots)
      blk_overall_pos = spots[x];
    else
      blk_overall_pos = x;

    res = query_position(blk_overall_pos, (BLK_SIZE - size));
    // printf(".. got %d\n", res);

    positions[res][counts[res]] = blk_overall_pos;
    counts[res]++;
  }

  // printf("QUERY results:\n");
  // for (x = 0; x < size; x++) {
    // printf("counts[%d] = %d\n", x, counts[x]);
    // printf("positions[%d] = ", x);
    // for (j = 0; j < slots; j++) {
      // printf(" %d ", positions[x][j]);
    // }
    // printf("\n");
  // }

  /* choose the winner (one less) */
  winner = -1;
  for (x = 0; x < size; x++) {
    if (counts[x] < slots)
      winner = x;
  }
  // fprintf(stderr, "[dbg] winner is symbol %d!\n", winner);

  winner_ch = extract_symbol(winner);
  // fprintf(stderr, "[dbg] winner resolved symbol %c!\n", winner_ch);

  /* repeat the process for the subproblem */
  subsol = solve_problem_n(size - 1, positions[winner]);
  // fprintf(stderr, "[dbg] subsolution is \"%s\"\n", subsol);

  sol = malloc(size + 1);
  sol[0] = winner_ch;
  strcpy(&sol[1], subsol);

  // fprintf(stderr, "[dbg] FINAL solution for size=%d is \"%s\"\n", size, sol);

  for (x = 0; x < size; x++) {
    free(positions[x]);
  }

  free(subsol);
  return sol;
}




void exec_test_case(int cc) {
  int F;
  char *solution;
  char response[255];

  if (cc == 1) {
    scanf("%d", &F);
    // fprintf(stderr, "[dbg] F=%d\n", F);
  }

  init_symbols(BLK_SIZE);
  solution = solve_problem_n(BLK_SIZE, NULL);
  uninit_symbols();

  // fprintf(stderr, "[dbg] SUBMITTING SOLUTION \"%s\"\n", solution);
  printf("%s\n", solution);
  fflush(stdout);

  scanf("%s", response);
  // fprintf(stderr, "[dbg] JUDGE SAYS \"%s\"\n", response);

  if (strcmp(response, "Y")) {
    printf("FAILED\n");
    exit(1);
  }

  free(solution);
}

int main() {
  /* read test cases ahead */
  int T, x;

  scanf("%d", &T);
  // fprintf(stderr, "[dbg] TOTAL TEST CASES = %d\n", T);

  for (x = 0; x < T; x++) {
    // fprintf(stderr, "[dbg] == TEST CASE RUN %d ==\n", x);
    exec_test_case(x + 1);
    // fprintf(stderr, "[dbg] == TEST CASE DONE ==\n");
  }

  return 0;
}
