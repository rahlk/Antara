#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main()
{

int t,n,j,i,a,b,va,vb,chif,chiff,fin,cond,condd ;

scanf("%i",&t);
for(i=1;i<=t;i++)
{

scanf("%i",&n) ;
fin =0;
for(j=1;j<=n;j++)
{

    a=j;
    b=n-j;


va=a ; vb=b;

 cond=0;
while(vb!=0 && cond!=1)
{
    chif=vb%10;

 if(chif==4) cond=1;
    vb=vb/10 ;

}
 condd=0;

while(va!=0 && condd!=1)
{
    chif=va%10;

  if(chif==4) condd=1;
    va=va/10 ;

}

if(cond==0 && condd==0)
{

        if(fin==0) println("cas n#%d: %d %d ",i,a,b);
        fin=1;
        }

}







}
}
