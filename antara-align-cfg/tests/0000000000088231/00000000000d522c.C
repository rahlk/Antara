#include<stdio.h>
#include<math.h>

void main()
{
    int n1,n2,itr,tn,l,cet,j=0;
    scanf("%d",&t);
    
while(tn--)
{
    j++;
    itr=0;
    l=0;
    cet=0;
    
scanf("%d",&n2);
while(n2!=0)
{
    n1=n2%10;
    n2=n2/10;
    
    if(n1==4)
    {
        n1=n1-1;
        l=l+n1*pow(10,itr);
        cet=cet+1*pow(10,itr);
        itr++;
    }
    else
    {
    l=l+n1*pow(10,itr);
    itr++;
    }
}
printf("Case #%d: %d %d\n",j,l,cet);
}   
    
}
