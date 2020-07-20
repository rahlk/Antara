#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

main(){
	int T,N;
	int i,j,w;

    scanf("%d",&T);

	for(i=1;i<=T;i++){
		//fflush(stdin);
		scanf("%d",&N);
		char wrd[50];
		int WL[N],W[N][50],W2[N][49],ll;

		for(j=0;j<N;j++){
                    scanf("%s",&wrd);
                    WL[j]=strlen(wrd);
                    for(w=0;w<WL[j];w++)
                        W[j][w]=(int)wrd[w];
                        /*if(W[j][w]==65 || W[j][w]==79 || W[j][w]==85){
                            W[j][w]=100;
                        }
                        if(W[j][w]==69 || W[j][w]==73){
                            W[j][w]=150;
                        }*/

        }


		int t[N];
		for(j=0;j<N;j++){
                t[j]=0;
            for(w=0;w<WL[j]-1;w++){
                W2[j][w]=W[j][w]-W[j][w+1];
                t[j]++;
            }
		}

		int ln,flag;
		int sum;
		sum=0;

		for(j=0;j<N-1;j++){
                flag=1;
            ln=(t[j]>t[j+1])?t[j+1]:t[j];
            for(w=0;w<ln;w++){
                //printf("%d %d +\n",W2[j][w],W2[j+1][w]);
                if(W2[j][w]==W2[j+1][w]){
                    if(W[j][w]==65 || W[j][w]==69 || W[j][w]==73 || W[j][w]==79 || W[j][w]==85){
                        flag=0;
                        sum=sum+2;
                        break;
                    }
                }
            }
            if(flag){
            for(w=0;w<ln;w++){
                //printf("%d %d -\n",W2[j][t[j]-w-1],W2[j+1][t[j]-w-1]);
                if(W2[j][t[j]-w-1]==W2[j+1][t[j+1]-w-1]){
                    if(W[j][w]==65 || W[j][w]==69 || W[j][w]==73 || W[j][w]==79 || W[j][w]==85){
                        flag=0;
                        sum=sum+2;
                        break;
                    }
                }
            }}

		}



		printf("Case #%d: %d\n",i,sum);}
}


