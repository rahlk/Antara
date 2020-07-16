#include <stdio.h>

int main() {
    int ty,t3,p;
    scanf("%d\n",&ty);
    t3=ty;
    for(p=1;p<=ty;p++){
printf("Case #%d : ",t3-ty);
    
  int a1, b, c, d, i, j, a[200][200] = {0}, i1=0, j1=0, max = 0;
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
  printf("%d %d\n", i1, j1);
  return 0;
    }
}