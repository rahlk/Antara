#include <stdio.h>
#include<math.h>
#include<iostream>

int main()
{
    int T, N,M,D=0,A=0,i=0;
    scanf("%d",&T);
    scanf("%d",&N);
     M=N;
     
     
    while(M!=0)
    {
        M/=10;
        D++;
    }
    
    
    M=N;
    while(M!=0)
    {
        
    
            if(M%10 == 4)
            {
                
                A=A+A*pow(10,i)+1;
                i++;
                M/=10;
        
            }
            
            else
            {
                A =A+ pow(10,i)*(M%10);
                M/=10;
                i++;
            }
            
      }
    
    int B = N-A;
    printf("Case #1: %d %d",A,B);
    return 0;
}