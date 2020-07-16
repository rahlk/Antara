#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i, j, k, n, a, scis, pap, rock, choose, leng;
    char moves [7][5]; //7 is no of comp 5 is length
    char looped;
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        int alive [7] = {1, 1, 1, 1, 1, 1, 1};
        scanf("%d", &a);
        int live = a;   //no of comp
        for (j=0;j<a;j++) {
            scanf("%s", moves[j]);
        }
        printf("Case #%d: ", i);
        for (j=0;live>0;j++) {     //loop through RPS
            for (k=0;k<a;k++) {  //loop through comp
                if ((moves[k][j]=='R')&&(alive[k]=1)) {
                    scis=0;
                }
                else if ((moves[k][j]=='S')&&(alive[k]=1)) {
                    pap=0;
                }
                else if ((moves[k][j]=='P')&&(alive[k]=1)) {
                    rock=0;
                }
                else if (alive[k]=1) {
                    for(leng = 0; moves[k][leng] != '\0'; ++leng);
                    looped = j%leng;
                    if (looped==0) {
                        looped = leng;
                    }
                    looped--;
                    if (moves[k][looped]=='R') {
                        scis=0;
                    }
                    else if (moves[k][looped]=='S') {
                        pap=0;
                    }
                    else if (moves[k][looped]=='P') {
                        rock=0;
                    }
                }
            }
            if ((scis||rock||pap)==0) {
                printf("IMPOSSIBLE\n");
                goto NEXT;
            }
            if (((scis&&rock)||!(rock||pap))==1) {
                choose= 1;//rock
                printf("R");
            }
            if (((pap&&scis)||!(scis||rock))==1) {
                choose= 2;//scis
                printf("S");
            }
            if (((rock&&pap)||!(pap||scis))==1) {
                choose= 3;//pap
                printf("P");
            }
            
            for (k=0;k<a;k++) {
                if ((moves[k][j]=='R')&&(choose==3)&&(alive[k]=1)) {
                    alive[k]=0;
                    live--;
                }
                else if ((moves[k][j]=='S')&&(choose==1)&&(alive[k]=1)) {
                    alive[k]=0;
                    live--;
                }
                else if ((moves[k][j]=='P')&&(choose==2)&&(alive[k]=1)) {
                    alive[k]=0;
                    live--;
                }
                else if (alive[k]=1) {
                    for(leng = 0; moves[k][leng] != '\0'; ++leng);
                    looped = a%leng;
                    if (looped==0) {
                        looped = leng;
                    }
                    looped--;
                    if ((moves[k][looped]=='R')&&(choose==3)&&(alive[k]=1)) {
                        alive[k]=0;
                        live--;
                    }
                    else if ((moves[k][looped]=='S')&&(choose==1)&&(alive[k]=1)) {
                        alive[k]=0;
                        live--;
                    }
                    else if ((moves[k][looped]=='P')&&(choose==2)&&(alive[k]=1)) {
                        alive[k]=0;
                        live--;
                    }
                }
            }
            //change a/live
            
            
            
            rock=1;
            pap=1;
            scis=1;
        }
        
        
        
        printf("\n");
        NEXT:
        rock=1;
        pap=1;
        scis=1;
    }
    return 0;
}