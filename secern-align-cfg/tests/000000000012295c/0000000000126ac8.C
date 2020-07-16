#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void d(char c, int x, int y, int Table[][2]);

main(){
	int T,P,Q,xi,yi,Table[2][2];
	char D,temp;
	int i,j;

    scanf("%d",&T);

	for(i=1;i<=T;i++){
		//fflush(stdin);
		scanf("%d%d",&P,&Q);

		Table[0][0]=0;
		Table[1][0]=0;
		Table[0][1]=Q;
		Table[1][1]=Q;

		for(j=0;j<P;j++){
            scanf("%d%d%c%c",&xi,&yi,&temp,&D);

            d(D,xi,yi,Table);

		}


		printf("Case #%d: %d %d\n",i,Table[0][0],Table[1][0]);
	}

}

void d(char c, int x, int y, int Table[][2]){
    if(c=='N'){
        if(y>=Table[1][0]){
            Table[1][0]=y+1;
        }
    }
    else if(c=='S'){
        if(y<=Table[1][1]){
            Table[1][1]=y-1;
        }
    }
    else if(c=='E'){
        if(x>=Table[0][0]){
            Table[0][0]=x+1;
        }
    }
    else if(c=='W'){
        if(x<=Table[0][1]){
            Table[0][1]=x-1;
        }
    }

}
