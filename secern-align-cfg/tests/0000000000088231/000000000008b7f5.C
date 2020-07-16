#include <stdio.h>

int testNum(int num, const int digit);   //prototype

int main(int T, int N){
int Sum = N;
int input, A, B;
int TestnumA, TestnumB;
const int UnwantedNum = 4;
int TimesRun = T;

for (int TimesRan=1; TimesRan <= TimesRun; TimesRan++){
for(int i = 1; i < Sum; i++){
B=i;
A=Sum-B;
TestnumA = testNum(A, UnwantedNum);
TestnumB = testNum(B, UnwantedNum);
if (TestnumA && TestnumB){
printf("Case # %d : %d and %d", TimesRun, A, B);
break;
}   // end of if
printf("No integer solution exists.");
}   // end of for
}   // end of for
return 0;
}   // end of main

int testNum(int num, const int digit){
int tmp = num;
int LengthOfNum = 0;
while(tmp != 0){
tmp = tmp / 10;
LengthOfNum++;
}   //count length of number

for(int i = 0; i<LengthOfNum; i++){
if(num % 10 == digit)return 0;
}
return 1;
}