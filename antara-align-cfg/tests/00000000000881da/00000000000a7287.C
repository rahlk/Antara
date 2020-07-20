#include <stdio.h>

int main(void){
	int q, waynum; //INPUT
	char way[100000];
	int i, j;
	char ans[100000];

	scanf("%d",&q);
	for(i=0; i<q; i++) {
        scanf("%d", &waynum);
		scanf("%s", way);
    for(j=0;j<((waynum-1)*2);j++) {
      if(way[j] == 'E') {
        ans[j] = 'S';
      } else {
        ans[j] = 'E';
      }
    }
    ans[(waynum-1)*2] = '\0';
		printf("Case #%d: %s\n", (i+1), ans);
    (void)getchar();
	}
	return 0;
}
