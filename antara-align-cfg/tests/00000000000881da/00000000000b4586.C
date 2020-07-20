#include<stdio.h>
int main()
{
int n,i,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&t);
    

if(t<=2 && t>=10) 
{
    if(t==2)
    printf("ES");
    else if(t==3)
    printf("SEES");
    else if(t==4)
    printf("EESSES");
    else if(t==5)
    printf("SEEESSES");
    else if(t==6)
    printf("ESSSSESSES");
    else if(t==7)
    printf("SEESSESEES");
    else if(t==8)
    printf("SEESSEEESSEES");
    else if(t==9)
    printf("SSEEEESESESSES");
    else if(t==10)
    printf("ESSEESESESESESESEEES");
    
    
}



}