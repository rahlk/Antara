#include<stdio.h>
void main()
{
    int T,N,A,B,tem,ori,temp1,i=1;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d",&N);
        tem=N;
        ori=1;
        A=0;
        B=0;
        while(tem>0)
        {
            temp1 = tem%10;
            if(temp1==4)
            {
                A=A+(temp1-2)*ori;
                B=B+(temp1-2)*ori;
            }
            else
            {
                A=A+temp1*ori;
                B=B;
            }
            ori = ori*10;
            tem=tem/10;
        }
        printf("Case #%d: %d %d\n",i++,A,B);
        T--;
    }
}