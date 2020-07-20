#include<stdio.h>
#include<stdlib.h>

main(){
    int T,N,L;
    int Prime[2][26];

    scanf("%d",&T);
    int i,j,w,asciii,cc;

    for(i=1;i<=T;i++){
        scanf("%d%d",&N,&L);
        int LCi[L];
        char Ans[L+1];
        w=0;
        asciii=90;

        for(j=N;j>1;j--){
            for(cc=2; cc<=j; cc++){
                if(j%cc==0){
                    break;
                }
            }
            if(j==cc){
                Prime[0][w]=j;
                Prime[1][w]=asciii;
                asciii--;
                w++;
            }

            if(w==26){
                break;
            }

        }

        if(w<26){
                Prime[0][w]=2;
                Prime[1][w]=asciii;
                asciii--;
                w++;
            }


        for(j=0;j<L;j++){
            scanf("%d",&LCi[j]);
        }


        int Pnext,Pnext2,Pprevious,Pprevious2,ww;
        Pnext=-1;

        for(j=1;j<L;j++){
            if(Pnext==-1){
                for(w=0;w<26;w++){
                    for(ww=0;ww<26;ww++){
                        if((Prime[0][w]*Prime[0][ww])==LCi[0]){
                            Pprevious=w;
                            Pnext=ww;
                        }
                        if((Prime[0][w]*Prime[0][ww])==LCi[1]){
                            Pprevious2=w;
                            Pnext2=ww;
                        }
                    }

                }

                if(Pprevious==Pprevious2){
                    Ans[0]=(char)Prime[1][Pnext];
                    Ans[1]=(char)Prime[1][Pprevious];
                    Ans[2]=(char)Prime[1][Pnext2];
                    Pnext=Pnext2;
                }
                else if(Pprevious==Pnext2){
                    Ans[0]=(char)Prime[1][Pnext];
                    Ans[1]=(char)Prime[1][Pprevious];
                    Ans[2]=(char)Prime[1][Pprevious2];
                    Pnext=Pprevious2;
                }
                else if(Pnext==Pprevious2){
                    Ans[0]=(char)Prime[1][Pprevious];
                    Ans[1]=(char)Prime[1][Pnext];
                    Ans[2]=(char)Prime[1][Pnext2];
                    Pnext=Pnext2;
                }
                else{
                    Ans[0]=(char)Prime[1][Pprevious];
                    Ans[1]=(char)Prime[1][Pnext];
                    Ans[2]=(char)Prime[1][Pprevious2];
                    Pnext=Pprevious2;
                }

            }else{
                for(ww=0;ww<26;ww++){
                        if((Prime[0][Pnext]*Prime[0][ww])==LCi[j]){
                            Ans[j+1]=(char)Prime[1][ww];
                            Pnext=ww;
                            break;
                        }
                    }
            }

           // printf("%c\n",Ans[j]);

        }

        printf("Case #%d: ",i);
        for(w=0;w<=L;w++){
            printf("%c",Ans[w]);
        }
        printf("\n");

    }
}
