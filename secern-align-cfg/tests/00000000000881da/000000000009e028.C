#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x, y;
} Point;

#define SUCCESS 1
#define FAILURE 0

int compute(char *lydia, char *me, int current, Point lydiaLoc, Point meLoc, int N){	
	char lydiaDirection = lydia[current];
	if(meLoc.x == 1 && meLoc.y == 1){
		return SUCCESS;
	}
	
	if(meLoc.x == lydiaLoc.x && meLoc.y == lydiaLoc.y){
		if(lydiaDirection == 'S'){
			if(meLoc.x == 1){
				return FAILURE;
			}
			meLoc.x -= 1;
			lydiaLoc.y -= 1;
			me[current] = 'E';
			return compute(lydia, me, current + 1, lydiaLoc, meLoc, N);
		}
		else if(lydiaDirection == 'E'){
		       if(meLoc.y == 1){
				return FAILURE;
		       }
		       meLoc.y -= 1;
		       lydiaLoc.x -= 1;
		       me[current] = 'S';
		       return compute(lydia, me, current + 1, lydiaLoc, meLoc, N);
		}
	}
	else {
		if(lydiaDirection == 'S'){
			if(meLoc.y == 1){
				meLoc.x -= 1;
				lydiaLoc.y -= 1;
				me[current] = 'E';
				return compute(lydia, me, current + 1, lydiaLoc, meLoc, N);
			}
			// Option 1
			meLoc.y -= 1;
			lydiaLoc.y -= 1;
			me[current] = 'S';
			int outcome = compute(lydia, me, current + 1, lydiaLoc, meLoc, N);
			if(outcome == SUCCESS){
				return SUCCESS;
			}
			else{
				// Option 2
				meLoc.x -= 1;
				lydiaLoc.y -= 1;
				me[current] = 'E';
				return compute(lydia, me, current + 1, lydiaLoc, meLoc, N);
			}
		}

		if(lydiaDirection == 'E'){
                        if(meLoc.x == 1){
                                meLoc.y -= 1;
                                lydiaLoc.x -= 1;
                                me[current] = 'S';
                                return compute(lydia, me, current + 1, lydiaLoc, meLoc, N);
                        }
                        // Option 1
                        meLoc.x -= 1;
                        lydiaLoc.x -= 1;
                        me[current] = 'E';
                        int outcome = compute(lydia, me, current + 1, lydiaLoc, meLoc, N);
                        if(outcome == SUCCESS){
                                return SUCCESS;
                        }
                        else{
                                // Option 2
                                meLoc.y -= 1;
                                lydiaLoc.x -= 1;
                                me[current] = 'S';
                                return compute(lydia, me, current + 1, lydiaLoc, meLoc, N);
                        }
                }

	}
}

void processCase(int caseNumber){
	int N;
	scanf("%d", &N);
	int stringSize = (2 * N) - 2;
	char *lydia = calloc(stringSize + 1, sizeof(char));
	char *me = calloc(stringSize + 1, sizeof(char));
	int problemFlag = 0;
	if(!lydia || !me){
	    problemFlag = 1;
	}
	scanf("%s", lydia);
	
	Point lydiaLoc = {N, N};
	Point meLoc = {N, N};

	int outcome = compute(lydia, me, 0, lydiaLoc, meLoc, stringSize);
	
	if(outcome == Failure){
	    problemFlag = 1;
	}
	
	if(problemFlag == 1){
	    printf("Case #%d: ", caseNumber);
	    for(int i = 0; i < stringSize; i++){
	        printf("S");
	    }
	    printf("\n");
	    return;
	}

	printf("Case #%d: %s\n", caseNumber, me);
	
	free(lydia);
	free(me);

}

void main(){
	int numberCases;
	scanf("%d", &numberCases);
	for(int i = 1; i <= numberCases; i++){
		processCase(i);
	}
}
