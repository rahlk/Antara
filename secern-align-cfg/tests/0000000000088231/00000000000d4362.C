#include<stdio.h>
#include<math.h>

void main(){
    int n1,n2,i,tn,dec,count,casee=0;
    scanf("%d",&t);
    
    while(tn--){
        casee++;
        i=0;
        dec=0;
        cec=0;
        
        scanf("%d",&n2);
        while(n2!=0)
        {
            n1=n2%10;
            n2=n2/10;
            
            if(n1==4)
            {
                n1=n1-1;
                dec=dec+n1*pow(10,i);
                cec=cec+1*pow(10,i);
                i++;
                
            }
            else {
                dec=dec+n1*pow(10,i);
                i++;
            }
        }
        printf("Case #%d:%d%d\n",casee,dec,cec);
    }
}