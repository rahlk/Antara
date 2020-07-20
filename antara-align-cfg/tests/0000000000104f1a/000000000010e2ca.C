#include <stdio.h>
#include <stdlib.h>
int main()
{
    int T,N,i,j,c,A[19],ext=0;
    unsigned long M,I[19],sum[500],max=0;
    scanf("%d",&T);
    scanf("%d",&N);
    scanf("%lu",&M);
    
    for(i=1;i<=T;i++){
        //Send Output
      for(j=1;j<=N;j++)  { 
         fflush(stdout); //flush output buffer 
        for (c = 0; c <18; c++) {
           A[c] = rand() % 18 + 2;
           printf("%d ",A[c]);
        }
        //Fetch Input 
        for (c = 0; c <18; c++) {
            scanf("%lu",&I[c]);
            if(I[c]==-1){
               ext = 1;
               break;
            }
        }
         for (c = 0; c <18; c++){
                sum[j] = sum[j] + I[c];
        }    
        if(ext==1)
        break;
        }
        if(sum[j]>max){
            max = sum[j];
        } 
        if(ext==1)
        break;
        fflush(stdout);
    }
     fflush(stdout);
    printf("%d ",max);
    return 0;
}