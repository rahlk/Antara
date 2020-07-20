#include<stdio.h>
#include <time.h>
#include <stdlib.h>
int randomsss(int);
int main(){
    int T,i=0,p,q,r,z,s;
    int N[110];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N[i]);
    }
    for(i=0;i<T;i++){
        p=randomsss(N[i]); 
        r=N[i]-p;
        printf("Case #%d: %d %d\n",i+1,p,r);
    }
    return 0;
}
int randomsss(int x)
{
    int nrandomno=0,digit=0,flag=0,d=0,n1=0;
    srand(time(NULL));
    nrandomno = rand()%x;
    n1=nrandomno;
    while (nrandomno > 0){
        digit = nrandomno % 10;
        nrandomno=nrandomno/ 10;
        if(digit==4){
            flag=1;
            break;
        }
    }
    if(flag!=1){
        d=x-n1;
        while (d > 0){
            digit = d % 10;
            d= d/10;
            if(digit==4){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        randomsss(x);
    }
    else{
        return n1;
    }
}