#include<stdio.h>
int main(){

int i,n1,n2,n3,c=1,b,k,d,j;
    scanf("%d",&b);
     for(j=0;j<b;j++){
            c=1;
         scanf("%d",&n1);
        n2=n1;
        n3=n1;
       while(n1/10!=0){
            c++;
         n1=n1/10;
       }
            i=1;
          for(k=1,i=1;k<=c;k++){
             d=(n2/i)%10;
             if(d==4){
                n2=n2-i;
             }
             i=i*10;
          }
          printf("Case #%d: %d %d\n",j+1,n2,(n3-n2));


     }
return 0;
}
