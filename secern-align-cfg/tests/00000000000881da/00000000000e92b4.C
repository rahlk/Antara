#include <stdio.h>
#include <string.h>
char a[50005], b[50005];

void mirror(int l, int r){
  int i;
  for(i=0;i<(r-l+1);i++){
  if(a[l+i] == 'S')
    b[r-i] = 'E';
  else
    b[r-i] = 'S';
  }
}

void flip(int l, int r){
  int i;
  for(i=0;i<(r-l+1);i++){
  if(a[l+i] == 'S')
    b[l+i] = 'E';
  else
    b[l+i] = 'S';
  }
}

int main(){
  int i,l,p,n,change,from,len;
  char c;
  scanf("%d", &p);

  for(l=1;l<=p;l++){
    scanf("%d", &n);
    scanf("%s", a);
    change = 0;
    from = 0;
    len = strlen(a);
    c = a[0];
    for(i=1;i<len;i++){
        if(a[i] != c){
          change++;
          c = a[i];
          if(change % 3 == 0){
            mirror(from, i-1);
            from = i;
          }
        }
    }
    if(from != (len - 1))
      flip(from, len -1);
    b[len] = '\0';
    printf("Case #%d: %s \n", l, b);
  }

  return 0;
}
