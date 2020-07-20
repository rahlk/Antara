#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void d(char c, int x, int y, int Table[][2],int Q);

main(){
	int T,P,Q,xi,yi,hey,maxx,maxy,indexx,indexy;
	char D,temp;
	int i,j;

    scanf("%d",&T);

	for(i=1;i<=T;i++){
            maxx=0;maxy=0;
		//fflush(stdin);
		scanf("%d%d",&P,&Q);

		int Table[Q][2];

		for(j=0;j<Q;j++){
            Table[j][0]=0;
            Table[j][1]=0;
		}

		for(j=0;j<P;j++){
            scanf("%d%d%c%c",&xi,&yi,&temp,&D);

            d(D,xi,yi,Table,Q);

		}

		for(j=0;j<Q;j++){
           if(Table[j][0]>=maxx){
            maxx=Table[j][0];
            indexx=j;
           }

           if(Table[j][1]>=maxy){
            maxy=Table[j][1];
            indexy=j;
           }
		}


		printf("Case #%d: %d %d\n",i,indexx,indexy);
	}

}

void d(char c, int x, int y, int Table[][2],int Q){
    int temp;
    if(c=='N'){
        /*if(y>=Table[1][0]){
            Table[1][0]=y+1;
        }*/
        Table[y+1][1]++;

    }
    else if(c=='S'){
        /*if(y<=Table[1][1]){
            Table[1][1]=y-1;
        }*/
        Table[y-1][1]++;

    }
    else if(c=='E'){
        /*if(x>=Table[0][0]){
            Table[0][0]=x+1;
        }*/
        Table[x+1][0]++;
    }
    else if(c=='W'){
        /*if(x<=Table[0][1]){
            Table[0][1]=x-1;
        }*/
        Table[x-1][0]++;
    }

}
