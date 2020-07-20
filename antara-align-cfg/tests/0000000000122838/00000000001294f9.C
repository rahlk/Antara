#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int c[100],d[100],n,k;

int check(int x,int y){
    int maxc, maxd,i;
    maxc=c[x];
    maxd=d[x];
    // /printf("[%d,%d]",x,y);
    for( i = x; i <=y; i++)
    {   //printf("%d,",c[i]);
        if(c[i]>=maxc){
            maxc=c[i];
        }
    }
    for( i = x; i <=y; i++)
    {   //printf("%d",c[i]);
        if(d[i]>=maxd){
            maxd=d[i];
        }
    }
    //printf("max max is %d %d\n",maxc,maxd);
    if(abs(maxc-maxd)<=k){
        return 1;
    }
    else{
        return 0;
    }
    
}

int solve(){
    int i,j,dif,count=0;
    for( i = 0; i < n; i++)
    {
        for( j = i; j < n; j++)
        {
            if(check(i,j)){
                //printf("(%d,%d) \n",i,j);
                count++;
            }
        }
        
    }
    return count;
    
}

int main(int argc, char const *argv[])
{

    int t,i,count,T=1;
    scanf("%d",&t);
    while(t){
        scanf("%d %d",&n,&k);
        for( i = 0; i < n; i++)
        {
            scanf("%d",&c[i]);
        }
        for( i = 0; i < n; i++)
        {
            scanf("%d",&d[i]);
        }
        count=solve();
        printf("Case #%d: %d\n",T,count);
        t--;
        T++;
    }
    return 0;
}
