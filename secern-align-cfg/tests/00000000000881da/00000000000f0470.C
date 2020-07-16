#include <stdio.h>
#include <string.h>
char a[50005], b[50005];
int n,id;
int g[1002][1002];
int v[1002][1002];

int dfs(int label, int x, int y){
  if(v[x][y] != label){
    v[x][y] = label;
    if((x+1)<=n-1 && g[x+1][y] != label)
      if(dfs(label, x+1, y)){
        b[--id] = 'E';
        //printf("%c",b[id]);
        return 1;
      }
    if((y+1)<=n-1 && g[x][y+1] != label)
      if(dfs(label, x, y+1)){
        b[--id] = 'S';
        //printf("%c",b[id]);
        return 1;
      }
    if(x == n-1 && y == n-1)
      return 1;
    else
      return 0;
  }
}

int main(){
  int i,l,p,change,from,len,x,y;
  char c;
  scanf("%d", &p);

  for(l=1;l<=p;l++){
    scanf("%d", &n);
    scanf("%s", a);
    len = strlen(a);
    x = 0; y = 0;
    id = len;
    b[0] = (a[0] == 'S')?'E':'S';
    for(i=0;i<len;i++){
      if(a[i] == 'S')
        g[x][++y] = l;
      else
        g[++x][y] = l;
      if(a[0] == 'S')
        dfs(l, 1, 0);
      else
        dfs(l, 0, 1);
    }
    b[len] = '\0';
    printf("Case #%d: %s\n", l, b);
  }

  return 0;
}