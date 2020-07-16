#include<stdio.h>
#include<string.h>

char c[128][8];
int b[128];

int main() {
    int N,cs=0,n,i,j,k;
    char str[8],r[8];
    int t[8],bb[8];
    for(scanf("%d %d",&N,&n);N--;) {
        memset(b,0,sizeof(b));
        memset(bb,0,sizeof(bb));
        for(i=0;i<5;i++) {
            memset(t,0,sizeof(t));
            for(j=0;j<119;j++) if (!b[j]) {
                printf("%d\n",j*5+i+1);
                fflush(stdout);
                scanf("%s",str);
                c[j][i]=str[0];
                t[str[0]-'A']++;
            }
            for(j=0,k=-1;j<5;j++) if (!bb[j]) {
                if (k<0 || t[j]<t[k]) k=j;
            }
            r[i]=k+'A';
            bb[k]=1;
            for(j=0;j<119;j++) if (!b[j] && c[j][i]!=r[i]) b[j]=1;
        }
        r[5]='\0';
        printf("%s\n",r);
        fflush(stdout);
        scanf("%s",str);
        if (str[0]=='N') break;
    }
    return 0;
}