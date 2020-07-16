#include<stdio.
void main()
{
    int n[100],t;
    int A[100]={0},B[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }  
    for(i=0;i<t;i++)
    {
        B[i]=n[i];
    }
    for(i=0;i<t;i++)
    {
        if((A[i]!=4)&&(B[i]!=4)
    {
        if(A[i]+B[i]==n[i])
        n[i]=A[i]+B[i];
    }A[i]++;
    B[i]--;
    }
    printf("%d %d",A[i],B[i]);
    

    
}