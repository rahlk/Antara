#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define R 20
#define C 20

typedef struct{
    int rr;
    int cc;
}move;

int trova_mosse(int r, int c, move mosse[], int galaxy[][C]);
int trova_mosse_recursive(int r, int c, int m, int galaxy[][C], move mosse[]);
int test(int r1, int c1, int r2, int c2);

int main(){
    int i,j,k,z;
    int r=R,c=C;
    int galaxy[R][C];
    move mosse[R*C];
    int test;
    int poss;

    scanf("%d",&test);
    for(i=0;i<test;i++){
        for(j=0;j<r;j++){
            for(k=0;k<c;k++){
                galaxy[j][k]=0;
            }
        }
        scanf("%d %d",&r,&c);
        poss=trova_mosse(r,c,mosse,galaxy);
        printf("Case %d: ",i+1);
        if(poss){
            printf("POSSIBLE\n");
            for(z=0;z<r*c;z++){
                printf("%d %d\n",mosse[z].rr,mosse[z].cc);
            }
        }
        else{
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}

int trova_mosse(int r, int c, move mosse[], int galaxy[][C]){
    int j, k,m=0;
    int find=0;
    for(j=0;j<r && !find;j++){
        for(k=0;k<c && !find;k++){
            mosse[m].rr=j+1;
            mosse[m].cc=k+1;
            galaxy[j][k]=1;
            //printf("%d - %d\n",mosse[m].rr,mosse[m].cc);
            find=trova_mosse_recursive(r,c,m+1,galaxy, mosse);
            //printf("\n");
            galaxy[j][k]=0;
        }
    }
    return find;
}

int trova_mosse_recursive(int r, int c, int m, int galaxy[][C], move mosse[]){
    int a,b;
    int find=0;
    if(m>=r*c){
        return 1;
    }
    for(a=0;a<r && !find;a++){
        if(a != mosse[m-1].rr-1){
            for(b=0;b<c && !find;b++){
                if(b != mosse[m-1].cc-1){
                    if(galaxy[a][b]==0 && test(a,b,mosse[m-1].rr-1,mosse[m-1].cc-1)){
                        galaxy[a][b]=1;
                        mosse[m].rr=a+1;
                        mosse[m].cc=b+1;
                        //printf("%d - %d\n",mosse[m].rr,mosse[m].cc);
                        find=trova_mosse_recursive(r,c,m+1,galaxy,mosse);
                        galaxy[a][b]=0;
                        //printf("\n");
                    }
                }

        }

        }
    }
    return find;
}

int test(int r1, int c1, int r2, int c2){
    if(r1 == r2) return 0;
    if(c1 == c2) return 0;
    if(r1 - c1 == r2 - c2) return 0;
    if(r1 + c1 == r2 + c2) return 0;
    return 1;
}