#include <stdio.h>
#include <math.h>

int main()
{
  int T,c=0,temp2;
  int i;
  unsigned long long N[100],A=0,B=0,temp;
  scanf("%d",&T);
 
  for (i=1;i<=T;i++){
       scanf("%llu",&N[i]);
      }   
  for (i=1;i<=T;i++){       
       temp = N[i];
    do{
        temp2 = temp%10;
        temp  = temp/10;
        if(temp2 == 4){
            A = N[i] - 2*(pow(10,c));
            B = B + 2*(pow(10,c));
            N[i] = A;
        }
        c++;
    }while(temp);
    if(A==0 && B==0){
        A=N[i]/2;
        B=N[i]-A;
    }
    printf("\nCase #%d",i);
    printf(": %llu %llu",A,B);
    A=0;B=0;temp=0;
    temp2=0;c=0;
  }

    return 0;
}