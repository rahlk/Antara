#include<stdio.h>
int main()
{int t,r,c,i,j,cas=1,temp,exchg,shift,printc1,printc2,totr,last1r=0,last1c=0,last2r=0,last2c=0,odd;
scanf("%i",&t);
while(t>0)
{    
scanf("%i %i",&r,&c);
    
    exchg=0;
    shift=0;
    totr=r;
if(!(((r==2)&&(c==2))||((r==3)&&(c==3))||((r==2)&&(c==3))||((r==3)&&(c==2))))
{
    printf("Case #%i: POSSIBLE",cas);
 if(r>c)
{temp=r;
r=c;
c=temp;
exchg=1;
}
printc1=0;
printc2=0;

if(r%2==1)
{
odd=1;
}
while(totr>0)
{
if(shift==0)
{
if((totr==r)&&(printc1==0))
{
i=r/2;
j=c/2; 
}
else
{
    i=last1r;
    j=last1c;
}

while(printc1<c)
{

    if(exchg==0)
printf("%i %i",i+1,j+1);
    else
printf("%i %i",j+1,i+1);
printc1++;
if(printc1==c-1)
{
printc1=0;
totr--;
last1r=i+1;
last1c=j+1;
}
else
{
last1r=i;
last1c=(j+1)%c;
}
shift=1;
break;
}
}

if(shift==1)
{
if((totr==r)&&(printc2==0))
{
i=c/2-1;
j=0;
}
else
{
i=last2r;
j=last2c;
}
while(printc2<c)
{

    if(exchg==0)
printf("%i %i",i+1,j+1);
    else
printf("%i %i",j+1,i+1);
printc2++;
if(printc2==c-1)
{
printc2=0;
i=i-1;
j=0;
}
else
{
last2r=i;
last2c=(j+1)%c;   
}
shift=0;
    break;
}
}
}
}
else
{
    printf("Case #%i: IMPOSSIBLE",cas);
}

t--;
cas++;
   

}
return 0;
}