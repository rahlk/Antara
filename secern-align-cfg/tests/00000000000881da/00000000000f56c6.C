#include <stdio.h>
#include <stdlib.h>

#define MAXCASES 100

int num_s = 0;
int num_e = 0;
int l_num_s = 0;
int l_num_e = 0;
char E = 'E';
char S = 'S';

//------------------------------------------------------

char nextMove(char *lptr, char *meptr, int move) {

  // no S moves left, must go E
  if (num_s == 0) {
    if (num_e != 0) {
      num_e--;
      return E;
    }
  } 

  // no E moves left, must go S
  if (num_e == 0) {
    if (num_s != 0) {
      num_s--;
      return S;
    }
  }

  // count num left for each and if equal to
  // our mepath left, then we are at same square
  if (num_s == l_num_s && num_e == l_num_e) {
    // at same square
    // do opposite move of lydia
    if (lptr[move] == S) {
      l_num_s--;
      num_e--;
      return E;
    }
    else {
      l_num_e--;
      num_s--;
      return S;
    }
  }

  // adj l_num
  if (lptr[move] == S) {
    l_num_s--;
  }
  else {
    l_num_e--;
  }


  // not at same square..do opposite of last move?
  if (meptr[move-1] == E) {
    num_s--;
    return S;
  }
  else {
    num_e--;
    return E;
  }

}

//------------------------------------------------------

// function not needed - count is N-1 chars each

void count_path(char *p_path, int len) {

  int iter_len = 0;
  num_s = num_e = l_num_s = l_num_e = 0;

  while ((p_path != NULL) && (iter_len < len)) {
    if (*p_path == S) {
      num_s++;
    } 
    else if (*p_path == E) {
      num_e++;
    }
    iter_len++;
    p_path++;
  }

  return;
}

//------------------------------------------------------

int main(int argc, char **argv) {

  FILE *infp = NULL;
  FILE *outfp = NULL;
  int max = 0;
  int something = 0;
  int numTestCases = 0;
  int maxTestCases = 100;
  char l_path[50001];
  char me_path[50001];
  char *p_lpath = NULL;
  char *p_mepath = NULL;
  int dimension = 0;

        scanf("%d", &numTestCases);

        if (numTestCases > MAXCASES) {
          perror("Error: numTestCases exceeds MAXCASES\n");
          return(-1);
        }

        p_lpath = &(l_path[0]);
        p_mepath = &(me_path[0]);

        for (int i = 1; i < numTestCases+1; i++) {

            /* read in dimension and string of path for lydia */
            scanf("%d", &dimension);
            int str_len = 2*dimension - 2;

            scanf("%s", &(l_path[0]));

            count_path(&(l_path[0]), str_len); // read in path string and count S&E's

            /* first move is deterministic */
            if (*l_path == E) {
              me_path[0] = S;
              num_s--;
              l_num_e--;
            } else if (*l_path == S) {
              me_path[0] = E;
              num_e--;
              l_num_s--;
            }

            // rest of moves - zero based
            for (int x = 1; x < str_len; x++) {
              me_path[x] = nextMove(p_lpath, p_mepath, x);
            }

            printf("Case #%d: %s\n", i, p_mepath);
        }

  exit(0);
}
