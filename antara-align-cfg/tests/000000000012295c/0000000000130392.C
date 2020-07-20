#include <stdio.h>

int main()
{
    int t,p,q,x,y,i,j,test;
    char c;
    scanf("%d",&test);
    t=1;
    while(test--){
        scanf("%d %d",&p,&q);
        int n[q+1][q+1],e[q+1][q+1],s[q+1][q+1],w[q+1][q+1],ans[q+1][q+1],max,idx,fill,k1,k2;
        for(i=0;i<=q;i++){
            for(j=0;j<=q;j++){
                n[i][j]=0;
                e[i][j]=0;
                s[i][j]=0;
                w[i][j]=0;
                ans[i][j]=0;
            }
        }
        while(p--){
            scanf("%d %d %c",&x,&y,&c);
            if(c=='N'){
                if(y+1<=q){
                    n[x][y+1]++;
                }
            }
            else if(c=='E'){
                if(x+1<=q){
                    e[x+1][y]++;
                }
            }
            else if(c=='S'){
                if(y-1>=0){
                    s[x][y-1]++;
                }
                
            }
            else if(c=='W'){
                if(x-1>=0){
                    w[x-1][y]++;
                }
                
            }
        }
        //north-----------------------
        for(i=0;i<=q;i++){
            for(j=1;j<=q;j++){
                n[i][j]+=n[i][j-1];
            }
        }
        //max in line
        max=n[0][q];
        idx=0;
        for(i=1;i<=q;i++){
            if(n[i][q]>max){
                max=n[i][q];
                idx=i;
            }
        }
        //fillmax
        for(j=q;j>0;j--){
            if(n[idx][j]!=n[idx][j-1]){
                fill=j;
                break;
            }
        }
        for(i=0;i<=q;i++){
            for(j=fill;j<=q;j++){
                n[i][j]=n[idx][fill];
            }
        }
        /*
        for(i=idx+1;i>=0;i--){
            n[i][fill]=n[i+1][fill];//fill line
        }
        */
        //east----------------------
        for(j=0;j<=q;j++){
            for(i=1;i<=q;i++){
                e[i][j]+=e[i-1][j];
            }
        }
         //max in line
        max=e[q][0];
        idx=0;
        for(j=1;j<=q;j++){
            if(e[q][j]>max){
                max=e[q][j];
                idx=j;
            }
        }
        //fillmax
        for(i=q;i>0;i--){
            if(e[i][idx]!=e[i-1][idx]){
                fill=i;
                break;
            }
        }
        for(i=fill;i<=q;i++){
            for(j=0;j<=q;j++){
                e[i][j]=e[fill][idx];
            }
        }
        /*
        for(i=idx+1;i>=0;i--){
            n[i][fill]=n[i+1][fill];//fill line
        }
        */
        //south--------------------
        for(i=0;i<=q;i++){
            for(j=q-1;j>=0;j--){
                s[i][j]+=s[i][j+1];
            }
        }
         //max in line
        max=s[0][0];
        idx=0;
        for(i=1;i<=q;i++){
            if(s[i][0]>max){
                max=s[i][0];
                idx=i;
            }
        }
        //fillmax
        for(j=0;j<=q;j++){
            if(s[idx][j]!=s[idx][j+1]){
                fill=j;
                break;
            }
        }
        for(i=0;i<=q;i++){
            for(j=0;j<=fill;j++){
                s[i][j]=s[idx][fill];
            }
        }
        /*
        for(i=idx+1;i>=0;i--){
            n[i][fill]=n[i+1][fill];//fill line
        }
        */
        //west----------------------
        for(j=0;j<=q;j++){
            for(i=q-1;i>=0;i--){
                w[i][j]+=w[i+1][j];
            }
        }
         //max in line
        max=w[0][0];
        idx=0;
        for(j=1;j<=q;j++){
            if(w[0][j]>max){
                max=w[0][j];
                idx=j;
            }
        }
        //fillmax
        for(i=0;i<=q;i++){
            if(w[i][idx]!=w[i+1][idx]){
                fill=i;
                break;
            }
        }
        for(i=0;i<=fill;i++){
            for(j=0;j<=q;j++){
                w[i][j]=w[fill][idx];
            }
        }
        /*
        for(i=idx+1;i>=0;i--){
            n[i][fill]=n[i+1][fill];//fill line
        }
        */
        //Sum-----------------------
        
        for(i=0;i<=q;i++){
            for(j=0;j<=q;j++){
                ans[i][j]=n[i][j]+s[i][j]+e[i][j]+w[i][j];
            }
        }
        k1=0;k2=0;
        max=ans[0][0];
        for(i=0;i<=q;i++){
            for(j=0;j<=q;j++){
                if(ans[i][j]>max){
                    max=ans[i][j];
                    k1=i;k2=j;
                }
            }
        }
        printf("Case #%d: %d %d\n",t,k1,k2);
        t++;
    }

    return 0;
}