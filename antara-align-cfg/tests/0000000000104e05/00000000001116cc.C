#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX(a,b) (a>b)?a:b

int cmp(const void *a,const void *b){
    char *aa=(char*)a;
    char *bb=(char*)b;
    int lenaa=strlen(aa);
    int lenbb=strlen(bb);
    //printf("%s(%d) vs %s(%d)\n",aa,lenaa,bb,lenbb);

    for(int i=0;;i++){
        //printf("%d(%c) vs %d(%c)<%d>\n",(int)aa[lenaa-i-1],aa[lenaa-i-1],(int)bb[lenbb-i-1],bb[lenbb-i-1],i);
        if(lenaa-i-1<0||lenbb-i-1<0)return 1;
        if(((int)aa[lenaa-i-1])!=((int)bb[lenbb-i-1]))
            if(((int)aa[lenaa-i-1])<((int)bb[lenbb-i-1]))return -1;
            else if(((int)aa[lenaa-i-1])>((int)bb[lenbb-i-1])) return 1;
    }
}


int main(){
    int q;scanf("%d",&q);
    for(int qi=1;qi<=q;qi++){
        int n;scanf("%d",&n);
        char WOD[n][52];for(int i=0;i<n;i++)scanf("%s",WOD[i]);
        int FLAG[1000]={0};
        qsort(WOD,n,sizeof(WOD[0]),cmp);
        //printf("-------------\n");for(int i=0;i<n;i++)printf("%s\n",WOD[i]);printf("-------------\n");
        int SC=0;

        for(int i=0;i<n;i++){
            if(FLAG[i]==0){
            int ind,nst=0;
            int lena=strlen(WOD[i]);
            for(int j=i+1;j<n;j++){
                int lenb=strlen(WOD[j]);
                int k=0;
                for(;WOD[i][lena-k-1]==WOD[j][lenb-k-1]&&(lena-k-1>=0&&lenb-k-1>=0);k++);
                if(k>=nst&&FLAG[j]==0){
                    nst=k;ind=j;
                }
            }
            FLAG[ind]=1;
            //printf("PLUS %d and FLAG %d\n",nst,ind);
            SC+=nst;
            }
        }
        printf("Case #%d: %d\n",qi,SC);
    }
}
