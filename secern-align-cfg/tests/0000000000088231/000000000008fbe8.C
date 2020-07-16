#include<stdio.h>
int main(){
int i,j=0;
long int a,c;
scanf("%d",&i);
while(i--)
{j++;
    scanf("%d",&a);
   if(a%2==0){
        c=a/2;
   printf("Case #%d: %d %d\n",j,c,c);
   }
   else{
     c=a-1;
    printf("Case #%d: %d %d\n",j,c,1);
}}
return 0;}