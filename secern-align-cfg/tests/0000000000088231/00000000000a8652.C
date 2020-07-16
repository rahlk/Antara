#include <stdio.h>
#include<stdlib.h>


int isThere4(int won){
        int rem;
        int count =0;
        while( won/10 > 0 ){
            rem = won%10; 
            won = won/10;
            if(rem == 4) count++;
        }
        if(won == 4) count ++;
        return count;
}

int main(int argc,char *argv[]){
    int nTests;
    int won,a,b,wonN,count,sum ;
    scanf("%d",&nTests);
    for(int i=0; i<nTests ; i++){
        scanf("%d",&won);
        count = 1;
        sum = 0;
        wonN = won;
        int a = isThere4(won);
        while(isThere4(wonN) != 0){
            wonN = won - count - sum;
            if(isThere4(wonN) < a) sum = sum+count;
            count = count*10;
        }
        printf("Case #%d: %d %d \n",(i+1),wonN,sum);
    }
    return 0;
}