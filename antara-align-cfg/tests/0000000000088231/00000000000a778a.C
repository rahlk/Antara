#include <stdio.h>
long long int No2=0,No3=0;
void checkValue(int);
long long int checkForFOUR(long long int);
int main()
{
    int T;
    scanf("%d",&T);
    //printf("%d",T);
    checkValue(T);
  //printf("Hello, World!\n %d , %d", No2,No3);
  return 0;
}
void checkValue(int T){
    long int No=0;
    for (int i=1; i <= T; i++){
        scanf("%ld",&No);
        No2 = checkForFOUR(No);
        No3 = No - No2;
        printf("Case #%d: %ld %ld\n",i,No2,No3);
    }
}
long long int checkForFOUR(long long int No){
    long int x = 1, No1 = No, No2 = No;
    while(No1 > 0){
        if(No1 % 10 == 4){
            No2 = No2 - x;
        }
        x = x * 10;
        No1 = No1 / 10;
    }
    return No2;
} 