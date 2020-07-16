#include <stdio.h>
#include <string.h>
char a[100000005],b[100000005];

int main(){
  int i,l,p,bi,len;
  scanf("%d", &p);

  for(l=1;l<=p;l++){
    scanf("%s", a);
    bi = 0;
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i] == '4'){
          a[i] = '2';
          b[bi++] = '2';
        }else if(bi != 0){
          b[bi++] = '0';
        }
    }

    b[bi] = '\0';
    printf("Case #%d: %s %s\n", l, a, b);
  }

  return 0;
}
