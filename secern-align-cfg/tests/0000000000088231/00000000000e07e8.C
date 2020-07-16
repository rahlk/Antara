#include<stdio.h>
#include<math.h>
int main(){
   long int n[100],i,j,t,m[100],c=0,r=0,p=0,num[100];
   scanf("%li" ,&t);
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
       return 0;
}