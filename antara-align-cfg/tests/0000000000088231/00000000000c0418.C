#include<stdio.h>
#include<stdlib.h>

int main(){
//--------------------------------//
int T;//number of cases
int N;
int i;

int A = 0;
int B = 0;
int ar;
int counter = 0;
int r1;
int r2;
int ar2;
int ar3;
int r3;
//--------------------------------//


scanf("%d",&T);
int *x;
x = calloc(T,sizeof(int));
for(i = 0;i < T;i++){
    scanf("%d",&N);
    x[i] = N;
}
r1 = x[0];
r2 = A;
r3 = B;
for(i = 0;i < T;i++){


    while(r1>0){
       ar = r1%10;
       if(ar == 4){
           A++;
       }



        while(r2>0){
            ar2 = r2%10;
                if(ar2 == 4){
                     A--;
                     B++;
       }
         r2 = A/10;
         }

           while(r3>0){
                 ar3 = r3%10;
                     if(ar3 == 4){
                          B--;
                          A++;
       }
       r3 = B/10;
         }




    }
    r1 = x[i]/10;
printf("Case #%d: %d %d\n",i+1,A,B);       
}


free(x);
return 0;
 }
