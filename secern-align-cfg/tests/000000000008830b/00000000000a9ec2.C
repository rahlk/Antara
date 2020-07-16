#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    int aa=*(int*)a;
    int bb=*(int*)b;
    return aa-bb;
}

int InSort[101];
int InnSort[101];
int ALHPAP[26];

int main(){
    int q;scanf("%d",&q);
    for(int qi=0;qi<q;qi++){
        int n,c,ci=0,PLU=0;scanf("%d %d",&n,&c);
        for(int rci=0;rci<c;rci++){
            int x;scanf("%d",&x);
            if(ci==0||InnSort[ci-1]==0){
              //printf("RE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
              if(x%2==0){
                x/=2;
                InSort[ci]=2;
                InnSort[ci]=2;
                ci++;
                PLU=1;
                InSort[ci]=x;InnSort[ci]=x;
              }
              else{int i=3;
                for(;x%i!=0&&i<=n;i+=2);
                x/=i;
                InSort[ci]=i;
                InnSort[ci]=InSort[ci];
                ci++;
                PLU=1;
                InSort[ci]=x;InnSort[ci]=InSort[ci];
              }
            }
            else if(PLU==1){
                if(x%InnSort[ci-1]==0){InnSort[ci]=x/InnSort[ci-1];InSort[ci]=InnSort[ci];}
                else if(x%InnSort[ci-2]==0){InnSort[ci]=x/InnSort[ci-2];InSort[ci]=InnSort[ci];}
                PLU=0;
            }
            else{
                InnSort[ci]=x/InnSort[ci-1];InSort[ci]=InnSort[ci];
            }
            //printf("ind %d:%d->%d\n",ci+1,InnSort[ci]*InnSort[ci-1],InnSort[ci]);
            ci++;
        }
        //for(int i=0;i<26;i++)printf("%d,",InnSort[i]);
        //printf("\nAFTER SORT\n");


        qsort(InSort,c+1,sizeof(int),cmp);

        /*for(int i=0;i<c+1;i++){
            int maksus=0,ind;
            for(int j=0;j<c+1-i;j++){
                if(InSort[j]>maksus){maksus=InSort[j];ind=j;}
            }
            InSort[ind]=InSort[c-i];
            InSort[c-i] = maksus;

        }*/

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

            mai:;
        }
        printf("\n");
    }
    return 0;
}
