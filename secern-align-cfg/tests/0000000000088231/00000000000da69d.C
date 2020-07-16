#include<stdio.h>
int main(){

int i,num1,num2,num3,count=1,b,k,d,j;
    scanf("%d",&b);
     for(j=0;j<b;j++){
            count=1;
         scanf("%d",&num1);
        num2=num1;
        num3=num1;
       while(num1/10!=0){
            count++;
         num1=num1/10;
       }
            i=1;
          for(k=1,i=1;k<=count;k++){
             d=(num2/i)%10;
             if(d==4){
                num2=num2-i;
             }
             i=i*10;
          }
          printf("Case #%d: %d %d\n",j+1,num2,(num3-num2));


     }
return 0;
}
