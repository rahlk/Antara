#include<stdio.h>
#include<math.h>
void main()
{
    int A,B,N,i,n;
    printf("entre the no for A \n");
    scanf("%d",&A);
    n=0
    while(1){
        if(A%pow(10,n)==0)
        {
            break;
        }
        else
        {
            n++;
        }
    }
    printf("enter the value of the B\n");
    scanf("%d",&B);
    N=A+B;
    if((5*pow(10,n-1))>N&&(3*pow(10,n-1)+pow(10,n-1))<N)
    {
        printf("A=%d  B=%d\n",A,B);
    }
    else
    {
        B=(5*pow(10,n-1)-1)-A;
        printf("A=%d  B=%d\n",A,B);
    }
}