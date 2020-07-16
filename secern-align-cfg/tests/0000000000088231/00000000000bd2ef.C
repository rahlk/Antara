#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

  int t,tIterator=0;
  char *n;
  scanf("%d",&t);

  while(tIterator<t){
      tIterator++;

      char *a,*b;
      int aIterator=0,bIterator=0;
      a = (char *)malloc(1000);
      b = (char *)malloc(1000);
      n = (char *)malloc(1000);

      scanf("%s",n);

      for(int i=0;i<strlen(n); i++){
        char temp = n[i];

  				switch(temp) {
  					case '0' : {
  						a[aIterator]=temp;
  						aIterator++;

  						break;
  					}
  					case '1' : {
              a[aIterator]=temp;
  						aIterator++;

  						break;
  					}
  					case '2' : {
              a[aIterator]=temp;
              aIterator++;

              break;
  					}
  					case '3' : {
              a[aIterator]=temp;
  						aIterator++;

  						break;
  					}
  					case '4' : {
              a[aIterator]='2';
  						aIterator++;

              b[bIterator]='2';
  						bIterator++;

  						break;
  					}
  					case '5' : {
              a[aIterator]='2';
  						aIterator++;

              b[bIterator]='2';
  						bIterator++;

  						break;
  					}
  					case '6' : {
              a[aIterator]='2';
  						aIterator++;

              b[bIterator]='2';
  						bIterator++;

  						break;
  					}
  					case '7' : {
              a[aIterator]='2';
  						aIterator++;

              b[bIterator]='2';
  						bIterator++;

  						break;
  					}
  					case '8' : {
              a[aIterator]='2';
  						aIterator++;

              b[bIterator]='2';
  						bIterator++;

  						break;
  					}
  					case '9' : {
              a[aIterator]='2';
  						aIterator++;

              b[bIterator]='2';
  						bIterator++;

  						break;
  				}
      }
      printf("Case #%d: %s %s",tIterator,a,b);
    }
  }
  return 0;
}
