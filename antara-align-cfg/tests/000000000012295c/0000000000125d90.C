#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int p,q;
        int tabX[q][2];
        int tabY[q][2];
        for(int k=0;k<q;k++){
            tabX[k][0]=0;
            tabY[k][0]=0;
            tabX[k][1]=0;
            tabY[k][1]=0;
        }
        scanf("%d",&p);
        scanf("%d",&q);
        for(int j=0;j<p;j++){
            int xj,yj,dj;
            scanf("%d",&xj);
            scanf("%d",&yj);
            scanf("%c",&dj);
            switch(dj){
                case 'N' : tabY[yj+1][0]++;
                    break;
                case 'S' : tabY[yj-1][1]++;
                    break;
                case 'E' : tabX[xj+1][0]++;
                    break;
                case 'W' : tabX[xj-1][1]++;
                    break;
            }
        }
        int interestedX[q];
        int interestedY[q];
        for(int l=0;l<q;l++){
            interestedX[l]=0;
            interestedY[l]=0;
        }
        int cntX=0;
        int cntY=0;
        for(int r=0;r<q;r++){
            cntX +=tabX[r][0];
            cntY +=tabY[r][0];
            interestedX[r] +=cntX;
            interestedY[r] +=cntY;
        }
        cntX=0;
        cntY=0;
        for(int r=q-1;r>=0;r--){
            cntX +=tabX[r][1];
            cntY +=tabY[r][1];
            interestedX[r] +=cntX;
            interestedY[r] +=cntY;
        }
        int maxIndxX=0;
        int maxIndxY=0;
        for(int z=0;z<q;z++){
            if(interestedX[z]>interestedX[maxIndxX]){
                maxIndxX=z;
            }
            if(interestedY[z]>interestedY[maxIndxY]){
                maxIndxY=z;
            }
        }
        printf("Case #%d: %d %d\n",T+1,maxIndxX,maxIndxY);
    }
}