#include <stdio.h>
int main(){
  int t;
  int n;
  int a = 0, b = 0;
  int tmp_a = 0, tmp_b = 0;
  int OK = 1;

  scanf("%d", &t);

  for(int cnt = 0; cnt < t; cnt++){
    scanf("%d", &n);
    for(int i = 1; i < n; i ++){
      tmp_a = a = n - i;
      tmp_b = b = i;
      OK = 1;

      if((tmp_a % 10) == 4){
	OK = 0;
      }
      if((tmp_b % 10) == 4){
	OK = 0;
      }

      while(tmp_a / 10 > 1 ){
	if((tmp_a % 10) == 4){
	  OK = 0;
	  break;
	}
	if((tmp_b % 10) == 4){
	  OK = 0;
	  break;
	}
	tmp_a = tmp_a / 10;
	tmp_b = tmp_b / 10;

      }
      
      if((tmp_a % 10) == 4){
	OK = 0;
      }
      if((tmp_b % 10) == 4){
	OK = 0;
      }

      if(OK == 1){
	break;
      }
	
    }
    printf("Case #%d: %d %d\n", cnt+1, a, b);

  }

  printf("\n");

}
