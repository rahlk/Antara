#include<stdio.h>

int main(){
    int t;scanf("%d",&t);
    for(int ti=0;ti<t;ti++){
        int n,k;scanf("%d %d",&n,&k);
        int ANS=0;
        int c[n],d[n];
        for(int i=0;i<n;i++)scanf("%d",&c[i]);
        for(int i=0;i<n;i++)scanf("%d",&d[i]);

        for(int i=0;i<n;i++){
            int cmi = i,dmi=i;
            for(int j=i;j<n;j++){
                if(c[j]>c[cmi])cmi=j;
                if(d[j]>d[dmi])dmi=j;
                //printf("FROM %d to %d MC is %d<%d> MD is %d<%d>\n",i,j,c[cmi],cmi,d[dmi],dmi);
                if(d[dmi]>=c[cmi]&&d[dmi]-c[cmi]<=k)ANS++;
                if(d[dmi]<c[cmi]&&c[cmi]-d[dmi]<=k)ANS++;
            }

        }
        printf("Case #%d: %d\n",ti+1,ANS);


    }
}
