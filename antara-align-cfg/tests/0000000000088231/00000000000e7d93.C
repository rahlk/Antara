#include <stdio.h>

int main() {
int t;
scanf("%d",&t);

for(int i=0;i<t;++i)
{
    long int n,j,k=0,l=0,nj,pow=1;
    scanf("%ld",&n);
   // 
    j=n;
    
    for(nj=0;j!=0;nj++)
    j/=10;
    printf("%d\n",nj);
    j=n;
    for(int y=0;y<nj;y++)
    {
        if(j%10==4)
        {k+=pow*3; l+=pow;}
        else{k+=j%10*pow;}
        pow*=10;
        j/=10;
    }
    printf("Case #%d: %ld %ld\n",i+1,k,l);
    
    
}


    return 0;
}