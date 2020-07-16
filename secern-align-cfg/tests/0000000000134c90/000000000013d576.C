#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lls_s{
  char val;
  struct lls_s *next;
} lls;

void printLLS(lls *x) {
  while(x != NULL) {
    printf("%c", x->val);
    x = x->next;
  }
  printf("\n");
}

char checkFull(char *x) {
  char xCh = x[0];
  int i = 1;
  while(i < strlen(x)-1) {
    if(x[i] != xCh) return 'N';
    i++;
  }
  return xCh;
}
lls *newNode(char val) {
  lls *prog = (lls*) malloc(sizeof(lls));
  prog->val = val;
  prog->next = NULL;
  return prog;
}

int game(char *oppo, char input, int round) {

  char oppoPick = oppo[round % (strlen(oppo)-1)];
//  printf("%c VS %c\n", oppoPick, input);
  if(oppoPick == input) {
    return 0;
  }
  if(input == 'P') {
    if(oppoPick == 'R') return 1;
    if(oppoPick == 'S') return -1;
  }
  if(input == 'R') {
    if(oppoPick == 'S') return 1;
    if(oppoPick == 'P') return -1;
  }
  if(input == 'S') {
    if(oppoPick == 'P') return 1;
    if(oppoPick == 'R') return -1;
  }
}


int findProg(int longestLen, int count, char** oppots, lls* prog, int A) {
  //printf("count=%d\n", count);
  int i, min = 2, a;
  for(i = 0; i < A; i++) {
    if((a=game(oppots[i], prog->val, count)) < min) {
      min = a;
    }

  }
  //printf("Round %d, %c: %d\n", count, prog->val, min);
  if(min < 0) {
    return -1;
  }
  else if(count >= longestLen -1&& min > 0) {
    return 1;
  }
  else{

    int x;

    prog->next = newNode('R');

    if ((x=findProg(longestLen, count+1, oppots, prog->next, A)) > 0) return 1;
    if ((x=findProg(longestLen, count+1, oppots, (prog->next = newNode('P')), A)) > 0) return 1;
    if ((x=findProg(longestLen, count+1, oppots, (prog->next = newNode('S')), A)) > 0) return 1;
    return -1;
  }
}

int getFullListDistCount(lls *list) {
  int N =1, R=0,P=0,S=0;
  while(list != NULL) {
    if(list->val == 'R') R=1;
    if(list->val == 'P') P=1;
    if(list->val == 'S') S = 1;
    list = list->next;
  }
  return R+P+S;
}

int main()  {

  int T, A;
  int j,i;
  int longestComp;
  scanf("%d\n", &T);
  for(i = 0; i < T; i++) {
    scanf("%d\n", &A);
    longestComp = 0;
    char** opponents = (char**) malloc(sizeof(char*)*A);
    lls* prog;
    lls* fullList = newNode('N');
    lls* root = fullList;
    for(j = 0; j < A; j++) {
      opponents[j] = (char *) malloc(sizeof(char) * 500);
      fgets(opponents[j], 500, stdin);
      opponents[j][strlen(opponents[j])] = '\0';
      char k = checkFull(opponents[j]);
      if(k != 'N') {
        fullList->next = newNode(k);
        fullList = fullList->next;
      }
      strlen(opponents[j]) > longestComp ? longestComp = strlen(opponents[j]) : NULL;
    }
    longestComp--;
    if(getFullListDistCount(root) > 1) {
      printf("IMPOSSIBLE\n");
      continue;
    }
    prog = newNode('R');
    if(findProg(longestComp, 0, opponents, prog, A) > 0) {
      printLLS(prog);
      continue;
    }
    prog = newNode('P');
    if(findProg(longestComp, 0, opponents, prog, A) > 0) {
      printLLS(prog);
      continue;
    }
    prog = newNode('S');
    if(findProg(longestComp, 0, opponents, prog, A) > 0) {
      printLLS(prog);
      continue;
    }
    printf("IMPOSSIBLE\n");
  }
  return 0;
}
