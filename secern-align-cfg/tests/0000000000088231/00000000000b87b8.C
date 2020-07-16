#include <stdio.h>
int getposition(int Number);
int pow(int b,int p);
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
            else{
                int sub=pow(10,pos-1);
                TempNumber-=sub;
            }
        }
        printf("Case #%d: %d %d\n",T,Number-TempNumber,TempNumber);
    }
    return 0;
}
int pow(int b,int p){
    int ans=1;
    for(;p>0;p--)
        ans*=b;
    return ans;
}
int getposition(int Number){
    int pos=1;
    for(;Number>0;Number/=10,pos++)
        if(Number%10==4)
            return pos;
    return 0;
}