#include<stdio.h>
int contains(int X)
{
    int i=X;
    while(i!=0)
    {
        if(i%10==4)
        return 1;
        i=i/10;
    }
    return 0;


}
void main()
{
    int A,B=0,T,N;
    scanf("%d",&T);
    int i;
    for(i=1;i<=T;i++)
    {
       scanf("%d",&N);
       A=N;
       while((contains(A)||contains(B))&&N>=(A+B))
       {
           A--;
           B++;
       }
       printf("case #%d: %d %d",i,A,B);
       B=0;
    }
}
