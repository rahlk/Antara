#include<stdio.h>
#include<string.h>


int main(){
    int q;scanf("%d",&q);
    for(int qi=0;qi<q;qi++){
        char LEK[101];scanf("%s",LEK);
        int x = strlen(LEK);
        char A[101]={'\0'};
        char B[101]={'\0'};
        for(int i=x-1;i>=0;i--){
            //printf("At %d is %c\n",i,LEK[i]);
            //A[i-x+1]=LEK[i];
                if(LEK[i]=='4'){A[i]='3';B[i]='1';}
                if(LEK[i]=='5'){A[i]='3';B[i]='2';}
                else if(LEK[i]!='0'){A[i]=LEK[i]-1;B[i]='1';}
                else if(LEK[i]=='0'&&i!=x-1){A[i]=LEK[i];B[i]='0';}
                else{
                  //printf("HARD WAY!");
                    int j=1;
                  while(LEK[i-j]=='0'&&i-j>=0)j++;
                  LEK[i-j]--;
                  while(j>=1){j--;LEK[i-j]='9';}
                  A[i]=LEK[i];B[i]='1';
                  //printf(" AFTER TRAN IS %s\n",LEK);
                }

        }
        int ena = 0;

        char PRITA[101]={'\0'};
        char PRITB[101]={'\0'};
        for(int i=0;i<x;i++){if(ena>=1||(A[i]!='0'&&A[i]!='\0')){PRITA[ena]=A[i];ena++;}}
        ena = 0;
        for(int i=0;i<x;i++){if(ena>=1||(B[i]!='0'&&B[i]!='\0')){PRITB[ena]=B[i];ena++;}}
        printf("Case #%d: %s %s\n",qi+1,PRITA,PRITB);

    }
    return 0;
}
