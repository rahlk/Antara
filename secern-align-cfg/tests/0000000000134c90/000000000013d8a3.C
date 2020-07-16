 #include <stdio.h>

int main(){
	int T;
	typedef struct moves{
		char mov[500];
		int size;
	} moves;
	scanf("%d",&T);
	int i;
	for(i=0;i<T;i++){
		int A;
		scanf("\n%d",&A);
		moves OppMoves[A];
		for(int j=0;j<A;j++){
			scanf("%s",OppMoves[j].mov);
			int length=0;
			while(OppMoves[j].mov[length]!='\0'){
				length++;
			}
			OppMoves[j].size=length;
		}
		char pAllowed[500];
		char rAllowed[500];
		char sAllowed[500];
		for(int j=0;j<500;j++){
			pAllowed[j]=1;
			rAllowed[j]=1;
			sAllowed[j]=1;
		}
		int won[A];
		for(int k=0;k<A;k++){
			won[k]=0;
		}
		for(int j=0;j<500;j++){
			for(int k=0;k<A;k++){
				if(won[k]==0){
					char mv=OppMoves[k].mov[j%(OppMoves[k].size+1)];
					switch(mv){
						case 'R' :
							sAllowed[j]=0;
							break;
						case 'S' :
							pAllowed[j]=0;
							break;
						case 'P' :
							rAllowed[j]=0;
							break;
					}
				}
			}
			for(int k=0;k<A;k++){
				if(won[k]==0){
					char mv=OppMoves[k].mov[j%(OppMoves[k].size+1)];
					switch(mv){
						case 'R' :
							if(pAllowed[j]==1){
								won[k]=1;
							}
							break;
						case 'S' :
							if(rAllowed[j]==1){
								won[k]=1;
							}
							break;
						case 'P' :
							if(sAllowed[j]==1){
								won[k]=1;
							}
							break;
					}
				}
			}
		}
		char printImpossible=0;
		for(int z=0;z<A;z++){
			if(won[z]==0){
				printImpossible=1;
			}
		}
			printf("Case #%d: ",i+1);
		if(printImpossible==1){
			printf("IMPOSSIBLE\n");
		}
		else{
			for(int j=0;j<500;j++){
				if(pAllowed[j]==1){
					printf("P");
				}
				else{
					if(sAllowed[j]==1){
						printf("S");
					}
					else{
						if(rAllowed[j]==1){
							printf("R");
						}
					}
				}
			}
			printf("\n");
		}
		
	}
}