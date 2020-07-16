#include<stdio.h>
#include<conio.h>
//#define DEL(a,b) (b>a)?b-a:a-b

int main(){
    int q;scanf("%d",&q);
    for(int qi=0;qi<q;qi++){
        int n;scanf("%d",&n);
        char DOK[2*n-2+1];scanf("%s",DOK);
        char LAO[2*50000-2+1]={'\0'};
        char cmd = DOK[2*n-3];
        int posdok[3]={0,0};int poslao[3]={0,0,0};
        while(!(posdok[0]>=n-1&&posdok[1]>=n-1&&poslao[0]>=n-1&&poslao[1]>=n-1)){

            if(cmd=='S'){
                  if(posdok[0]==poslao[0]&&posdok[1]==poslao[1]){
                      if(DOK[posdok[2]]!='S'){LAO[poslao[2]]='S';poslao[2]++;}
                      else {LAO[poslao[2]]='E';poslao[2]++;}
                  }
                  else{
                    if(poslao[0]+1<n&&DOK[posdok[2]+1]!='S'){LAO[poslao[2]]='S';poslao[2]++;}
                    else  {LAO[poslao[2]]='E';poslao[2]++;}
                  }

            }
            else{
                  if(posdok[0]==poslao[0]&&posdok[1]==poslao[1]){
                      if(DOK[posdok[2]]!='E'){LAO[poslao[2]]='E';poslao[2]++;}
                      else {LAO[poslao[2]]='S';poslao[2]++;}
                  }
                  else{
                    if(poslao[1]+1<n&&DOK[posdok[2]+1]!='E'){LAO[poslao[2]]='E';poslao[2]++;}
                    else  {LAO[poslao[2]]='S';poslao[2]++;}
                  }
            }
           //      if((poslao[1]+1==posdok[1]&&DOK[posdok[2]-1]!='E')&&(DEL(poslao[1]+1,posdok[1]))<=1&&(DEL(poslao[0],posdok[0]))<=1&&poslao[1]+1<n){LAO[poslao[2]]='E';poslao[2]++;}
           //else if((poslao[0]+1==posdok[0]&&DOK[posdok[2]-1]!='S')&&(DEL(poslao[1],posdok[1]))<=1&&(DEL(poslao[0]+1,posdok[0]))<=1&&poslao[0]+1<n){LAO[poslao[2]]='S';poslao[2]++;}


            suki:;
            if(DOK[posdok[2]]=='E')posdok[1]++;else posdok[0]++;posdok[2]++;
            if(LAO[poslao[2]-1]=='E')poslao[1]++;else if(LAO[poslao[2]-1]=='S') poslao[0]++;
            //predok[0]=posdok[0];predok[1]=posdok[1];
            //printf("NOW MAN.....\nDOK's turn %d [%d,%d]\nLAO's turn %d [%d,%d]\nMAYDAY IS %s\n",posdok[2],posdok[0],posdok[1],poslao[2],poslao[0],poslao[1],LAO);
          //  getch();
        }
        printf("Case #%d: %s\n",qi+1,LAO);
    }
}
