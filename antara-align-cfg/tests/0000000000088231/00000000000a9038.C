#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int power(int num,int p){
    int ans=1;
for(int i=0;i<p;i++){
    ans=num*ans;
}
return ans;
}

int main(){
int T,tempN,count,count4,count3,oriN;
scanf("%d",&T);
int N[T];
for(int l=0;l<T;l++){
    scanf("%d",&N[l]);
}
for(int l=0;l<T;l++){
tempN=N[l]; //variable to calculate no. of digits in the number
 count=0;
 oriN=N[l];
//calculating no. of digits in the number
for (int i=0;tempN!=0;i++){
        tempN=tempN/10;
    ++count;
}
//num[] to store the digits of number in the opposite order
int num[count];
 count4=0;
//to store the digits in array num[]
for(int i=0;N[l]!=0;i++){
    num[i]=N[l]%10;
    if(num[i]==4) ++count4; //counting number of 4s
    N[l]=N[l]/10;
}
//array to store the position of 4s
int arr4[count4];
{int i,j;
j=0;
for(i=0;i<count;i++){
    if(num[i]==4){
        arr4[j]=i;
        num[i]=1;
        j++;
    }
}}
 int countNum=0;
for(int i=(count-1);i>=0;i--){
    countNum=num[i]*power(10,i)+countNum;
}
printf("case #%d: %d %d \n",l,countNum,(oriN-countNum));}
return 0;
}