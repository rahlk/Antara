#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MIN(a,b) (a<b)?a:b

int cmp(const void *a,const void *b){
    char *aa=(char*)a;
    char *bb=(char*)b;
    int lenaa=strlen(aa);
    int lenbb=strlen(bb);
    //printf("%s(%d) vs %s(%d)\n",aa,lenaa,bb,lenbb);
    for(int i=0;;i++){
        if(lenaa-i-1<0||lenaa-i-1<0)return 1;
        if(aa[lenaa-i-1]!=bb[lenbb-i-1])
            if(aa[lenaa-i-1]>bb[lenaa-i-1])return -1;
            else return 1;
    }
}


int main(){
    int q;scanf("%d",&q);
    for(int qi=1;qi<=q;qi++){
        int n;scanf("%d",&n);
        char WOD[n][52];for(int i=0;i<n;i++)scanf("%s",WOD[i]);
        qsort(WOD,n,sizeof(WOD[0]),cmp);
        //printf("-------------\n");for(int i=0;i<n;i++)printf("%s\n",WOD[i]);printf("-------------\n");



        int SC=0;
        for(int i=0;i<n;i+=2){
            int lena=strlen(WOD[i]);
            int lenb=strlen(WOD[i+1]);
            int j=0;
            for(;WOD[i][lena-j-1]==WOD[i+1][lenb-j-1]&&(lena-j-1>=0&&lenb-j-1>=0);j++);
            SC+=j;
        }
        printf("Case #%d: %d\n",qi,SC);
    }
}
