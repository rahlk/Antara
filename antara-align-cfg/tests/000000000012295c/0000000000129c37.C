#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int p,q;
        scanf("%d",&p);
        scanf("%d",&q);
        int tabX[q+1][2];
        int tabY[q+1][2];
        for(int k=0;k<q+1;k++){
            tabX[k][0]=0;
            tabY[k][0]=0;
            tabX[k][1]=0;
            tabY[k][1]=0;
        }
        for(int j=0;j<p;j++){
            int xj,yj;
            char dj;
            scanf("%d %d %c",&xj,&yj,&dj);
            if(dj=='N'){
                tabY[yj+1][0]++;
            }
            else{
                if(dj=='S'){
                    tabY[yj-1][1]++;
                }
                else{
                    if(dj=='E'){
                        tabX[xj+1][0]++;
                    }
                    else{
                        tabX[xj-1][1]++;
                    }
                }
            }
        }
        int interestedX[q+1];
        int interestedY[q+1];
        for(int l=0;l<q+1;l++){
            interestedX[l]=0;
            interestedY[l]=0;
        }
        int cntX=0;
        int cntY=0;
        for(int r=0;r<q+1;r++){
            cntX +=tabX[r][0];
            cntY +=tabY[r][0];
            interestedX[r] +=cntX;
            interestedY[r] +=cntY;
        }
        cntX=0;
        cntY=0;
        for(int r=q;r>=0;r--){
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
        printf("Case #%d: %d %d\n",i+1,maxIndxX,maxIndxY);
    }
}