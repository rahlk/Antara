#include<stdio.h>
#include<stdlib.h>

/*int cmp(const void *a,const void *b){
    int aa=*(int*)a;
    int bb=*(int*)b;
    return aa-bb;
}*/

int InSort[101];
int InnSort[101];
int KUM[101];
int ALHPAP[26];

int main(){
    int q;scanf("%d",&q);
    for(int qi=0;qi<q;qi++){
        int n,c;scanf("%d %d",&n,&c);
        for(int i=0;i<c;i++)scanf("%d",&KUM[i]);
        int AB[2];
        if(KUM[0]%2==0){AB[0]=2;AB[1]=KUM[0]/2;}
        else{
          int i=3;for(;KUM[0]%i!=0&&i<=n;i+=2);
          AB[0]=i;AB[1]=KUM[0]/i;
        }
        for(int g=0;g<2;g++){
            for(int ci=0;ci<c;ci++){
                if(ci==0){
                    InnSort[ci]=AB[g%2];InnSort[ci+1]=AB[(g+1)%2];
                    InSort[ci]=InnSort[ci];InSort[ci+1]=InnSort[ci+1];
                }
                else{
                    if(KUM[ci]%InnSort[ci]==0){InnSort[ci+1]=KUM[ci]/InnSort[ci];InSort[ci+1]=InnSort[ci+1];}
                    else{//printf("ERROR!!! At ind:%d (%d/%d)!!!\n",ci,KUM[ci],InnSort[ci]);
                    goto maig;}
                }
                //printf("ind %d:%d->%d\n",ci+1,InnSort[ci+1]*InnSort[ci],InnSort[ci+1]);
            }
            goto ANS;
            maig:;
        }
        //for(int i=0;i<26;i++)printf("%d,",InnSort[i]);
        //printf("\nAFTER SORT\n");

        ANS:;
        //qsort(InSort,c+1,sizeof(int),cmp);

        for(int i=0;i<c+1;i++){
            int maksus=0,ind;
            for(int j=0;j<c+1-i;j++){
                if(InSort[j]>maksus){maksus=InSort[j];ind=j;}
            }
            InSort[ind]=InSort[c-i];
            InSort[c-i] = maksus;

        }

        int korn = 1,pl=0;
        for(int i=0;i<c+1;i++){
            if(InSort[i]!=korn){ALHPAP[pl]=InSort[i];pl++;korn = InSort[i];}
        }

        //for(int i=0;i<26;i++)printf("%d,",InSort[i]);
        //printf("THERE ARE %d/26 tUA!!!\n",pl);

        //for(int i=0;i<26;i++)printf("%c : %d\n",i+'A',ALHPAP[i]);

        printf("Case #%d: ",qi+1);
        for(int i=0;i<c+1;i++){

            //printf("BISE AT %d is %d\n",i,InnSort[i]);
            int j=0;
            for(;InnSort[i]!=ALHPAP[j];j++);
            printf("%c",j+'A');

            /*
            int noi=0,mak=25;
            while(noi<=mak){
                int mid = (noi+mak)/2;
                if(InnSort[i]==ALHPAP[mid]){printf("%c",mid+'A');goto mai;}
                else if(InnSort[i]<ALHPAP[mid]){mak=mid-1;}
                else if(InnSort[i]>ALHPAP[mid]){noi=mid+1;}
            }*/

            //mai:;
        }
        printf("\n");
    }
    return 0;
}
