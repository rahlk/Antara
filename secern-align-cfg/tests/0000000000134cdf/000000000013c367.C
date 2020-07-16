#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char a[16][18];
int dp[17][17][17][17];
int T[17][17][17][17];
int n,m;

int cmp(const void *a,const void *b) {
    return *(int *)a-*(int *)b;
}

int cal(int i1,int i2,int j1,int j2,int cs) {
    if (i1>=i2 || j1>=j2) return 0;
    if (T[i1][i2][j1][j2]==cs) return dp[i1][i2][j1][j2];
    int i,j;
    int r[16]={0},c[16]={0};
    int aa[512],t=0;
    for(i=i1;i<i2;i++) for(j=j1;j<j2;j++) if (a[i][j]=='#') {
        r[i]=1,c[j]=1;
    }
    for(i=i1;i<i2;i++) for(j=j1;j<j2;j++) if (a[i][j]!='#') {
        if (!r[i]) {
            aa[t++]=cal(i1,i,j1,j2,cs)^cal(i+1,i2,j1,j2,cs);
        }
        if (!c[j]) {
            aa[t++]=cal(i1,i2,j1,j,cs)^cal(i1,i2,j+1,j2,cs);
        }
    }
    qsort(aa,t,sizeof(aa[0]),cmp);
    for(i=j=0;j<t;i++) {
        if (aa[j]!=i) break;
        while(j<t && aa[j]==i) j++;
    }
    dp[i1][i2][j1][j2]=i;
    T[i1][i2][j1][j2]=cs;
    return i;
}

int main() {
    int N,cs=0;
    for(scanf("%d",&N);N--;) {
        scanf("%d %d",&n,&m);
        int i,j,ret=0;
        for(i=0;i<n;i++) scanf("%s",a[i]);
        int r[16]={0},c[16]={0};
        for(i=0;i<n;i++) for(j=0;j<m;j++) if (a[i][j]=='#') r[i]=c[j]=1;
        for(i=0;i<n;i++) for(j=0;j<m;j++) if (a[i][j]!='#') {
            if (!r[i]) {
                if (cal(0,i,0,m,cs+1)==cal(i+1,n,0,m,cs+1)) ret++;
            }
            if (!c[j]) {
                if (cal(0,n,0,j,cs+1)==cal(0,n,j+1,m,cs+1)) ret++;
            }
        }
        printf("Case #%d: %d\n",++cs,ret);
    }
    return 0;
}