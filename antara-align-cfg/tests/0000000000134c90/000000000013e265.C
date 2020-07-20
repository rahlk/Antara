#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	int numTestcase;
	scanf("%d", &numTestcase);

	for (int testIdx=0; testIdx<numTestcase; testIdx++){

		int A;
		scanf("%d", &A);

		char opponentChoice[255][500] = {0, };
		char myChoice[500] = {0, };

		char opponentInput[500];
		for(int temp=0; temp<A; temp++){
            scanf("%s", opponentInput);
            for(int checklength=0; checklength<strlen(opponentInput); checklength++){
                opponentChoice[temp][checklength] = opponentInput[checklength];
            }
		}


		int wingame = 0;

		int Rremainer[255] = {0,};
		int Sremainer[255] = {0,};
		int Premainer[255] = {0,};
		int numRemainer = A;
		int curOrder = 0;

		char Totalremainer[255] = {0,};
		for(int toinit=0; toinit<A; toinit++){
            Totalremainer[toinit] = toinit;
		}



		while(1){

            int R=0;
            int S=0;
            int P=0;
            int Rcount = 0;
            int Scount = 0;
            int Pcount = 0;


            for(int i=0; i<numRemainer; i++){
                int curRemainer = Totalremainer[i];
                char current = opponentChoice[curRemainer][curOrder];
                if (current==0){
                    int restart = curOrder % strlen(opponentChoice[curRemainer]);
                    current = opponentChoice[curRemainer][restart];
                }
                if(current=='R'){
                    R = 1;
                    Rremainer[Rcount] = curRemainer;
                    Rcount += 1;
                }
                else if (current=='S'){
                    S = 1;
                    Sremainer[Scount] = curRemainer;
                    Scount += 1;
                }
                else if (current=='P'){
                    P = 1;
                    Premainer[Pcount] = curRemainer;
                    Pcount += 1;
                }
            }

            if (R+S+P == 3){
                wingame = 0;
                curOrder += 1;
                break;
            }
            else if (R==1 && S==0 && P==0){
                myChoice[curOrder] = 'P';
                wingame = 1;
                curOrder += 1;
                break;
            }
            else if (R==0 && S==1 && P==0){
                myChoice[curOrder] = 'R';
                wingame = 1;
                curOrder += 1;
                break;
            }
            else if (R==0 && S==0 && P==1){
                myChoice[curOrder] = 'S';
                wingame = 1;
                curOrder += 1;
                break;
            }
            else if (R==1 && S==1 && P==0){
                myChoice[curOrder] = 'R';
                for(int renew=0; renew<Rcount; renew++){
                    Totalremainer[renew] = Rremainer[renew];
                }
                for(int renew=Rcount; renew<Rcount+Scount; renew++){
                    Totalremainer[renew] = Sremainer[renew];
                }
                numRemainer = Rcount;
            }
            else if (R==0 && S==1 && P==1){
                myChoice[curOrder] = 'S';
                for(int renew=0; renew<Pcount; renew++){
                    Totalremainer[renew] = Premainer[renew];
                }
                for(int renew=Pcount; renew<Pcount+Scount; renew++){
                    Totalremainer[renew] = Sremainer[renew];
                }
                numRemainer = Scount;
            }
            else if (R==1 && S==0 && P==1){
                myChoice[curOrder] = 'P';
                for(int renew=0; renew<Pcount; renew++){
                    Totalremainer[renew] = Premainer[renew];
                }
                for(int renew=Pcount; renew<Pcount+Rcount; renew++){
                    Totalremainer[renew] = Rremainer[renew];
                }
                numRemainer = Pcount;
            }


            curOrder += 1;
		}
        if (wingame == 0){
            printf("Case #%d: IMPOSSIBLE\n", testIdx+1);
        }
        else if (wingame == 1){
            printf("Case #%d: ", testIdx+1);
            for(int toprint=0; toprint<curOrder-1; toprint++){
                printf("%c", myChoice[toprint]);
            }
            printf("%c\n", myChoice[curOrder-1]);
        }
	}

	return 0;
}
