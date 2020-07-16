#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,i,j,t=1;
    scanf("%d",&T);
    while(T--){
        long long int N,array[101],i=0,temp;
        scanf("%lld",&N);
        temp=N;
        printf("Case #%d: ",t);
        t++;
        while(N!=0){
            N=N/10;
            i++;
        }
        N=temp;
        j=0;
        while(N!=0){
            array[i-1-j]=N%10;
            N=N/10;
            j++;
        }
        for(j=0;j<i;j++){
            if(array[j]!=4)
                printf("%lld",array[j]);
            else
                printf("3");
        }
        printf(" ");
        for(j=0;j<i;j++){
            if(array[j]==4)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
