#include <stdio.h>

char opposite(char s){
    if(s=='E'){
        return('S');
    }
    else{
        return('E');
    }
}
int main(){
    int T;
    scanf("%d",&T);
    int i=0;
    for(i=0;i<T;i++){
        int N;
        scanf("%d",&N);
        char hisMvs[2*N-1];
        scanf("%s",hisMvs);
        char myMvs[2*N-1];
        int hisXY[2];
        hisXY[0]=1;
        hisXY[1]=1;
        int myXY[2];
        myXY[0]=1;
        myXY[1]=1;
        if(hisMvs[2*N-3]=='S'){
            int j=0;
            for(j=0;j<2*N-2;j++){
                if(myXY[0]==hisXY[0] && myXY[1]==hisXY[1]){
                    myMvs[j]=opposite(hisMvs[j]);
                }
                else{
                   if(myXY[1]==N){
                       myMvs[j]='E';
                   } 
                   else{
                       myMvs[j]='S';
                   }
                }
                if(myMvs[j]=='S'){
                    myXY[1]++;
                }
                else{
                    myXY[0]++;
                }
                if(hisMvs[j]=='S'){
                    hisXY[1]++;
                }
                else{
                    hisXY[0]++;
                }
            }
        }
        else{
            int j=0;
            for(j=0;j<2*N-2;j++){
                if(myXY[0]==hisXY[0] && myXY[1]==hisXY[1]){
                    myMvs[j]=opposite(hisMvs[j]);
                }
                else{
                   if(myXY[0]==N){
                       myMvs[j]='S';
                   } 
                   else{
                       myMvs[j]='E';
                   }
                }
                if(myMvs[j]=='S'){
                    myXY[1]++;
                }
                else{
                    myXY[0]++;
                }
                if(hisMvs[j]=='S'){
                    hisXY[1]++;
                }
                else{
                    hisXY[0]++;
                }
            }
        }
        myMvs[2*N-2]='\0';
        printf("Case #%d: %s\n",i,myMvs);
    }
}