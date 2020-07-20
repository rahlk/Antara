#include <stdio.h>
#include <math.h>
int main(){
    long int n,n1,n2,di;
    int cs,t;
    scanf("%d",&t);
    for(int i =0; i<t;i++){
        cs = i+1;
        n1 = 0;
        n2 = 0;
        scanf("%ld",&n);
        if(n < pow(10,1)){
            n1 = 1;
            n2 = 3;
        }else if(n < pow(10,2)){
            for(int j = 1;j<2;j++){
                di = n/pow(10,j);
                if(di == 4){
                    n1 +=1*(pow(10,j));
                    n2 += 3*(pow(10,j));
                }else{
                    n1 += di*pow(10,j);
                }
                n = n-(di*pow(10,j));               
            }
        }else if(n < pow(10,3)){
            for(int j = 1;j<3;j++){
                di = n/pow(10,j);
                if(di == 4){
                    n1 +=1*(pow(10,j));
                    n2 += 3*(pow(10,j));
                }else{
                    n1 += di*pow(10,j);
                }
                n = n-(di*pow(10,j));               
            } 
        }else if(n < pow(10,4)){
            for(int j = 1;j<4;j++){
                di = n/pow(10,j);
                if(di == 4){
                    n1 +=1*(pow(10,j));
                    n2 += 3*(pow(10,j));
                }else{
                    n1 += di*pow(10,j);
                }
                n = n-(di*pow(10,j));               
            }
        }else if(n < pow(10,5)){
            for(int j = 1;j<5;j++){
                di = n/pow(10,j);
                if(di == 4){
                    n1 +=1*(pow(10,j));
                    n2 += 3*(pow(10,j));
                }else{
                    n1 += di*pow(10,j);
                }
                n = n-(di*pow(10,j));               
            }
        }
        di = n%10;
        if(di == 4){
            n1 += 1;
            n2 += 3;
        }else{
            n1 += di;
        }
        printf("Case #%d: %ld %ld\n",cs,n1,n2);
        
    }
    return 0;
}