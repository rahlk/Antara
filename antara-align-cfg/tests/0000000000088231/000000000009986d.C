#include<stdio.h>
#include<stdlib.h>
void main()
{
int A,B,N;
int choice,pts;
if (pts>N)
{ 
    printf("enter the choice based on the A and B values ");
    scanf(&choice);
    switch(choice) 
    {
        case 1:
        do {
             N=A+B;
            }while(A==B);
            break;
        case 2:
        do { 
             N=A+B;
           }while(A>B);
           break;
        case 3:
        do {
             N=A+B;
           }while (A<B);
           break;
        
    }
}
}