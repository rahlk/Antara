#include <stdio.h>
#include <string.h>
char a[50005];
int row[50005], col[50005];

int main(){
  int i,l,p,x,y,len,n;
  scanf("%d", &p);

  for(l=1;l<=p;l++){
    scanf("%d", &n);
    scanf("%s", a);
    len = strlen(a);
    x = 1; y = 1;
    row[1] = 1; //index x
    col[1] = 1; //ndex y
    for(i=1;i<len;i++){
      if(a[i] == 'S')
        x++;
      else
        y++;
      row[x]++;
      col[y]++;
    }
     printf("Case #%d: ", l);
    if(a[0]=='E'){
      for(i=1;i<n;i++){
        if(row[i] == 1){
          x = i;
          break;
          }
        }
        for(i=0;i<x;i++)
          printf("S");
        for(i=1;i<n;i++)
          printf("E");
        for(i=x+1;i<n;i++)
          printf("S");
      }


    if(a[0]=='S'){
      for(i=1;i<n;i++){
        if(col[i] == 1){
          y = i;
          break;
        }
      }
        for(i=0;i<y;i++)
          printf("E");
        for(i=1;i<n;i++)
          printf("S");
        for(i=y+1;i<n;i++)
          printf("E");
    }
    printf("\n");
  //  b[len] = '\0';
  //  printf("Case #%d: %s\n", l, b);
  }

  return 0;
}