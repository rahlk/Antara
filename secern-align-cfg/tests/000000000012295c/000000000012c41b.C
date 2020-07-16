#include <stdio.h>

int main() {
    int t,t3;
    scanf("%d",&t);
    t3=t;
    while(t--){

    
  int a1, b, c, d, i, j, a[200][200] = {0}, i1, j1, max = 0;
  char x,w='W',s='S',n='N',e='E',t1;

  scanf("%d %d\n", &a1, &b);
  while(a1--) {
    scanf("%d %d %c\n", &c, &d,&t1);
    if (t1 =='E') {
     for (i = c + 1; i <= b; i++) {
        a[i][d]++;
      } }
    if (t1 == 'W') {
      for (i = c - 1; i >= 0; i--) {
        a[i][d]++;
      }
    }
    if (t1 == 'N') {
      for (i = d + 1; i <= b; i++) {
        a[c][i]++;
      }
    }
 if(t1=='S')  {
      for (i = d - 1; i >= 0; i--) {
        a[c][i]++;
      }
    }
  }
  for (i = 0; i <= b; i++) {
    for (j = 0; j <= b; j++) {
   
      if(a[i][j]>max){
          max=a[i][j];
          i1=i;
          j1=j;
      }
    }
  
  }
  printf("Case #%d: %d %d",t3-t, i1, j1);
  return 0;
    }
}