#include<stdio.h>
#include<stdlib.h>

main(){
    int T,N,A,B,sum,Ntemp,Ntemp1;
    scanf("%d",&T);
    int i,j;
    for(i=1;i<=T;i++){
            A=0; B=0; sum=0;
            scanf("%d",&N);
            Ntemp=N;
            Ntemp1=N;
            j=1;
        do{
                Ntemp=(Ntemp1%(j*10))/j;
                Ntemp1=Ntemp1-Ntemp*j;
                j=j*10;
                sum++;
        }while(Ntemp1!=0);

        j=j/10;

        while(sum!=0){
            Ntemp=N/j;
            if(Ntemp==4){
                A=A+(Ntemp-1)*j;
                B=B+1*j;
            }else{
                A=A+Ntemp*j;
            }
            N=N-Ntemp*j;
            j=j/10;
            sum--;
        }

        printf("Case #%d: %d %d\n",i,A,B);
    }

}
