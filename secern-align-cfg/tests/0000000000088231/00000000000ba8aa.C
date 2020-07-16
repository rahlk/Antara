#include<stdio.h>
#include<math.h>
void main(){
   long int n[100],t,i,j,m[100],c=0,r=0,p=0,num[100];
   scanf("%li" ,&t);
   if(t>=1&&t<=100){
       for(i=0;i<t;i++){
       scanf("%li" ,&n[i]);
       m[i]=n[i];
           j=0;
            while(m[i]>0){
                r=m[i]%10;
                if(r==4)
                num[i]=num[i]+pow(10,j);
                m[i]=m[i]/10;
                j++;
            }
            printf("case #%li: %li %li" ,i,(n[i]-num[i]),num[i]);
       }
       }
}