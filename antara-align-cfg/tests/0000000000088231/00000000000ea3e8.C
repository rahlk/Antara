#include <stdio.h>
#include <math.h>
int getposition(int Number);
int main()
{
    int TestCases;
    scanf("%d",&TestCases);
    for(int T=1;T<=TestCases;T++){
        int Number,TempNumber;
        scanf("%d",&Number);
        TempNumber=Number;
        for(;;){
            int pos=getposition(TempNumber);
            if(pos==0)
                break;
            else
                TempNumber-=pow(10,pos-1);
        }
        printf("Case #%d: %d %d\n",T,Number-TempNumber,TempNumber);
    }
    return 0;
}
int getposition(int Number){
    int pos=1;
    for(;Number>0;Number/=10,pos++)
        if(Number%10==4)
            return pos;
    return 0;
}
