#include <stdio.h>
#include <string.h>
int
main(int argc, char **argv){
int t,i,j,l;
char n[100];
char a[100];
char b[100];
scanf("%d\n",&t);
for(i=1;i<=t;i++){
  scanf("%s\n",n);
  printf("Got %s\n",n);
  printf("Case #%d: ",i);
  l=strlen(n);
  for(j=0;j<l;j++){
    switch(n[j]){
      case '4':
      a[j]='1';
      b[j]='3';
      break;
      default:
      a[j]='0';
      b[j]=n[j];
      break;
      }
    }
  a[j]=0;
  b[j]=0;
  printf("%s ",a);
  printf("%s",b);
  printf("\n");
  }
}
