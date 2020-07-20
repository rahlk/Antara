#include <stdio.h>
#include <stdlib.h>


int main() {
	int numTestcase;

	scanf("%d", &numTestcase);
	for (int i=0; i<numTestcase; i++){
		int mazeDimension;
		scanf("%d", &mazeDimension);

		char *LydiaPath = (char*) malloc(sizeof(char)*(mazeDimension*2 - 1));
		char *MyPath = (char*) malloc(sizeof(char)*(mazeDimension*2 - 1));

        scanf("%s", LydiaPath);
        printf("%s\n", LydiaPath);

        for (int curMove=0; curMove<2*mazeDimension-2; curMove++){

            if (LydiaPath[curMove]=='E'){
                MyPath[curMove] = 'S';
            }
            else{
                MyPath[curMove] = 'E';
            }
        }

        MyPath[2*mazeDimension-2] = '\0';

        printf("%s\n", MyPath);
		printf("Case #%d: %s\n", i+1, MyPath);
		free(LydiaPath);
		free(MyPath);
	}

	return 0;
}