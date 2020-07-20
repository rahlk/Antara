#include <stdio.h>
#include <stdlib.h>

int main(){
  int t, w;
  int i;
  int ans;
  int q[6];
  int r1, r2, r3, r4, r5, r6;

  scanf("%d %d", &t, &w);

  for(i = 0; i < t; i++){
    printf("1\n");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q[0] = ans;

    printf("2\n");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q[1] = ans;

    printf("3\n");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q[2] = ans;

    printf("4\n");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q[3] = ans;

    printf("5\n");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q[4] = ans;

    printf("7\n");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q[5] = ans;

    r1 = q[6] - q[3] - q[2];
    r2 = q[6] - q[3] - q[1] - 2*r1;
    r3 = 2*q[3] - q[6];
    r4 = q[4] - q[1] - r3 - 2*r2 - 3*r1;
    r5 = q[5] - q[1] - r4 - r3 - 2*r2 - 4*r1;
    r6 = q[1] - r5 - r4 - r3 - r2 - 2*r1;

    printf("%d %d %d %d %d %d\n", r1, r2, r3, r4, r5, r6);
    fflush(stdout);

  }

  return 0;
}
