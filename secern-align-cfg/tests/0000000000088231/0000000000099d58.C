#include<stdio.h>
#include<string.h>
main()
{
int n,i,temp,n1,n2;
scanf("%d",&n);
while(n>0)
{
    scanf("%d",&temp);
    if((temp/4)>0){
    n1=temp/4;
    n2=temp-n1;
    }
    else {
        n1=temp/2;
        n2=n1;}
    printf("%d %d\n",n1,n2);
    
    n--;
}
}