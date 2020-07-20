#include <stdio.h>
#include <stdlib.h>

int main(){
  int t, w;
  int i;
  int ans;
  int q1, q2, q3, q4, q5, q7;
  int r1, r2, r3, r4, r5, r6;

  scanf("%d %d", &t, &w);

  for(i = 0; i < t; i++){
    printf("1");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q1 = ans;

    printf("2");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q2 = ans;

    printf("3");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q3 = ans;

    printf("4");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q4 = ans;

    printf("5");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q5 = ans;

    printf("7");
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
    q7 = ans;

    r1 = q7 - q3 - q2;
    r2 = q7 - q3 - q1 - 2*r1;
    r3 = q3 - q1 - r2 - 2*r1;
    r4 = q4 - q1 - r3 - 2*r2 - 3*r1;
    r5 = q5 - q1 - r4 - r3 - 2*r2 - 4*r1;
    r6 = q1 - r5 - r4 - r3 - r2 - 2*r1;

    printf("%d %d %d %d %d %d\n", r1, r2, r3, r4, r5, r6);
    fflush(stdout);

    scanf("%d", &ans);
    if(ans == -1) exit(1);
  }

  return 0;
}
