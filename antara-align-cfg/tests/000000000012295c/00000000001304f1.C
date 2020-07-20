
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int T,P,Q,RX,RY;
	int PX[500],PY[500];
	char PD[500][3];
	int PCX,PCY;
	int *PVX = malloc(500*100001*4);
	int *PVY = malloc(500*100001*4);
	int *HVX = malloc(500*100001*4);
	int *HVY = malloc(500*100001*4);
	int *HCX = malloc(500*100001*4);
	int *HCY = malloc(500*100001*4);
	int i,j,k,l,m;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d",&P);
		scanf("%d",&Q);
		for(j=0;j<P;j++){
			scanf("%d",&PX[j]);
			scanf("%d",&PY[j]);
			scanf("%s",PD[j]);
		}
		PCX=0;
		for(j=0;j<P;j++){
			if(PD[j][0]=='E'){
				for(k=PX[j]+1;k<=Q;k++){
					PVX[PCX++]=k;
				}
			} else if(PD[j][0]=='W'){
				for(k=PX[j]-1;k>=0;k--){
					PVX[PCX++]=k;
				}
			}
		}
		for(j=0;j<PCX;j++){
			HVX[j]=PVX[j];
			HCX[j]=1;
			for(k=j+1;k<PCX;k++){
				if(HVX[j]==PVX[k]) HCX[j]++;
			}
		}
		m=HCX[0];
		l=HVX[0];
		for(j=1;j<PCX;j++){
			if(HCX[j]>m){
				m=HCX[j];
				l=HVX[j];
			}
		}
		RX=l;
		PCY=0;
		for(j=0;j<P;j++){
			if(PD[j][0]=='N'){
				for(k=PY[j]+1;k<=Q;k++){
					PVY[PCY++]=k;
				}
			} else if(PD[j][0]=='S'){
				for(k=PY[j]-1;k>=0;k--){
					//PVY[PCY++]=k;
				}
			}
		}
		for(j=0;j<PCY;j++){
			HVY[j]=PVY[j];
			HCY[j]=1;
			for(k=j+1;k<PCY;k++){
				if(HVY[j]==PVY[k]) HCY[j]++;
			}
		}
		m=HCY[0];
		l=HVY[0];
		for(j=1;j<PCY;j++){
			if(HCY[j]>m){
				m=HCY[j];
				l=HVY[j];
			}
		}
		RY=l;
		printf("Case #%d: %d %d\n",i,RX,RY);
		fflush(stdout);
	}
	return 0;
}

