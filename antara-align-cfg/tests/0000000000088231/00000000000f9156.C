#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int number1,testcase;
    scanf("%d",&number1);
    testcase=number1;
    while(number1--)
    {
        int part,fours,a,i=0;
        scanf("%d",&part);
        fours=part;
        a=part;
        do
        {
            if(fours%10==4)
            {
                part -= pow(10,i);
            }
        fours/=10;
        i++;
    }
    while(fours);
    printf("case #%d: %d %d\n",testcase-number1,part,a-part);
}
}