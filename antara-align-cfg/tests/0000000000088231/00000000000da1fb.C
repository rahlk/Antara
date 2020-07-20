#include <stdio.h>
#include <stdlib.h>






int main()
{

int t,n,j,i,a,b,va,vb,vn,chif,chiff,fin ;

scanf("%i",&t);
for(i=1;i<=t;i++)
{

scanf("%i",&n) ;
fin =0;
for(j=1;j<=(n/2)+1;j++)
{

    a=j;
    b=n-j;


va=a ; vb=b;
vn=n;
int cond=0;
while(vb!=0 && cond!=1)
{
    chif=vb%10;

    vn=n;
    while(vn!=0 && cond!=1)
    {
        chiff=vn%10;

        if(chiff==chif) cond=1;
        vn=vn/10;
    }
    vb=vb/10 ;

}
int condd=0;
vn=n;

while(va!=0 && condd!=1)
{
    chif=va%10;

      vn=n;
    while(vn!=0 && condd!=1)
    {
        chiff=vn%10;

        if(chiff==chif) condd=1;
        vn=vn/10;
    }
    va=va/10 ;

}

if(cond==0 && condd==0)
{

        if(fin==0) printf("case n#%i: %i %i \n",i,a,b);
        fin=1;
        }

}







}
}
