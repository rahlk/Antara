#include <stdio.h>
#include <string.h>
int main(){
    int A,B;
    for(i=1;i<10000;i++){
        for(j=0;j<10000;j++){
            while((i+j)<100000){
                int d;
                d=i+j;
                char b[5];
                b=char(d);
                for(k=0;k<6;k++){
                    if (d[k]==4){
                        A=i;
                        B=j;
                        print("A= %i,B= %i, N= %i",A,B,i+j);
                    }
                }
                
            }
            return 0;
        }
            
        }
    
}