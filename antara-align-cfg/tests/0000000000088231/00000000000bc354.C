#include<stdio.h>
#include<math.h>

int main() {
    int TestCases;
    scanf("%d", &TestCases);
    for(int T = 0; T<TestCases;T++) {
        int Number = TempNumber;
        scanf("%d", &Number);
        for(;;){
            int pos = getPosition(TempNumber);
            if(pos == 0)
               break;
               else
               TempNumber -= pow(10,pos-1);
        }
        printf("Case #%d: %d %d\n",T,Number-TempNumber,TempNumber);
    }
    return 0;
}
int getPosition(int Number) {
    int pos =1;
    for(;Number>0;Number/=10,pos++){
        if(Number%10 == 4)
            return pos;
    }
    return 0;
}