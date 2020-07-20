
#include <stdio.h>
#include <stdlib.h>

int X,Y,count;
int P,Q;

int x[550];
int y[550];
int x2[550];
int y2[550];

void readstuff(void) {
    int i;
    char dir;
    int xx,yy;
    scanf("%d %d",&P,&Q);
    for (i=0;i<P;i++) {
        scanf("%d %d %c",&xx, &yy, &dir);
        if (dir=='N') {x[i]=0;x2[i]=Q; y[i]=yy+1; y2[i]=Q;}
        if (dir=='S') {x[i]=0;x2[i]=Q; y2[i]=yy-1; y[i]=0;}
        if (dir=='E') {x[i]=xx+1;x2[i]=Q; y[i]=0;y2[i]=Q;}
        if (dir=='W') {x2[i]=xx-1;x[i]=0; y[i]=0;y2[i]=Q;}
    }
}

void point(int xx, int yy) {
    int i;
    int c=0;
    for (i=0;i<P;i++) {
        if (x[i]<=xx && xx<=x2[i] && y[i]<=yy && yy<=y2[i]) c++;
    }
    if (c==count) {
        if (xx<X) count--;
        else if (xx==X && yy<Y) count--;
    }
    if (c>count) {X=xx; Y=yy;count=c;}
}


void solve(void) {
    int i,j;
    readstuff();
    count=0;
    for (i=0;i<P;i++) {
        for (j=0;j<P;j++) {
            point(x[i],y[j]);
            point(x[i],y2[j]);
            point(x2[i],y[j]);
            point(x2[i],y2[j]);
        }
    }
}

int main(int argc, char **argv) {
    int tc,i;
    scanf("%d", &tc);
    for (i=1;i<=tc;i++) {
        solve();
        printf("Case #%d: %d %d\n",i,X,Y);
    }
    return 0;
}
