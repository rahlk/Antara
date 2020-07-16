#include <stdio.h>

char missing(char c1, char c2, char c3, char c4){
  int a, b, c, d, e;
  a = 0;
  b = 0;
  c = 0;
  d = 0;
  e = 0;
  if(c1 == 'A' || c2 == 'A' || c3 == 'A' || c4 == 'A') a++;
  if(c1 == 'B' || c2 == 'B' || c3 == 'B' || c4 == 'B') b++;
  if(c1 == 'C' || c2 == 'C' || c3 == 'C' || c4 == 'C') c++;
  if(c1 == 'D' || c2 == 'D' || c3 == 'D' || c4 == 'D') d++;
  if(c1 == 'E' || c2 == 'E' || c3 == 'E' || c4 == 'E') e++;
  if(a == 0) return 'A';
  if(b == 0) return 'B';
  if(c == 0) return 'C';
  if(d == 0) return 'D';
  if(e == 0) return 'E';
}

char find(int pos){
  char arranger;
  int a, b, c, d, e;
  int i;
  a = 0;
  b = 0;
  c = 0;
  d = 0;
  e = 0;
  for(i = 0; i < 119; i++){
    printf("%d\n", 5*i + pos);
    fflush(stdout);
    scanf(" %c", &arranger);
    if(arranger == 'A') a++;
    if(arranger == 'B') b++;
    if(arranger == 'C') c++;
    if(arranger == 'D') d++;
    if(arranger == 'E') e++;
  }
  if(a == 23) return 'A';
  if(b == 23) return 'B';
  if(c == 23) return 'C';
  if(d == 23) return 'D';
  if(e == 23) return 'E';
}

int main(){
  int t, f;
  char p1, p2, p3, p4, p5, ans;
  int i;

  scanf("%d %d", &t, &f);

  for(i = 0; i < t; i++){
    p1 = find(1);
    p2 = find(2);
    p3 = find(3);
    p4 = find(4);
    p5 = missing(p1, p2, p3, p4);

    printf("%c%c%c%c%c\n", p1, p2, p3, p4, p5);
    fflush(stdout);
    scanf(" %c", &ans);
    if(ans == 'N') break;
  }

  return 0;
}
