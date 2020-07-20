#include <stdio.h>
#include <string.h>

char perm[120][6];
int iperm = 0;

void heap(char str[], int size) {
  if (size == 1) {
    strcpy(perm[iperm], str);
    iperm++;
    return;
  }

  for (int i = 0; i < size; i++) {
    heap(str, size - 1);
    if (size % 2 == 1) {
      char temp = str[0];
      str[0] = str[size - 1];
      str[size - 1] = temp;
    } else {
      char temp = str[i];
      str[i] = str[size - 1];
      str[size - 1] = temp;
    }
  }
}

int find(char str[]) {
  for (int i = 0; i < 120; i++) {
    if (strcmp(perm[i], str) == 0) {
      return i;
    }
  }
  return -1;
}

int cand(char str[], int len, int has[]) {
  int c = 0;
  for (int i = 0; i < 120; i++) {
    if (!has[i] && strncmp(perm[i], str, len) == 0) {
      c++;
    }
  }

  return c;
}

int ufind(char str[], int len, int has[]) {
  for (int i = 0; i < 120; i++) {
    if (!has[i] && strncmp(perm[i], str, len) == 0) {
      return i;
    }
  }
  return -1;
}

int main() {
    int T;
    int F;
    scanf("%d %d", &T, &F);

    char str[] = "ABCDE";
    heap(str, 5);
    
    for (int t = 1; t <= T; t++) {
        char ans[2];
	
        int has[120];
        for (int i = 0; i < 120; i++) {
          has[i] = 0;
        }
        
        for (int i = 0; i < 119; i++) {
            char cur[6];
            for (int j = 1; j <= 4; j++) {
                printf("%d\n", (i * 5) + j);
                fflush(stdout);
                scanf("%s", ans);
                if (ans[0] == 'N') {
                    return 0;
                }
                cur[j - 1] = ans[0];
                int c = cand(cur, j, has);
                if (c == 1) {
                  int pos = ufind(cur, j, has);
                  has[pos] = 1;
                  break;
                }
            }
        }
        int sol = 0;
        for (int i = 0; i < 120; i++) {
          if (!has[i]) {
            sol = i;
            break;
          }
        }
        printf("%s\n", perm[sol]);
        fflush(stdout);
        scanf("%s", ans);
        if (ans[0] == 'N') {
            return 0;
        }
    }

}
