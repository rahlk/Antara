#include <stdio.h>

int main()
{
    int t,n,i,j,last;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        char s[(2*n)-1],x;
        scanf("%s",s);
        x=s[0];
        last=0;
        for(i=1;i<(2*n)-2;){
          if(x!=s[i]){
              for(j=i;j>=last;j--){
                  printf("%c",s[j]);
              }
	  i++;
	  x=s[i];
          last=i;
          }
else{
i++;
}

        }
        printf("\n");
    }

    return 0;
}
