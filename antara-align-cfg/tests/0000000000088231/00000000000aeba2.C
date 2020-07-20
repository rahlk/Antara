#include<stdio.h>

void main()
{
    int award,testcase=1,num,part1,part2,count=1;
    scanf("%d",&testcase);
    while(testcase>0)
    {
        scanf("%d",&award);
           for(part1=1;part1<award;part1++)
           {
             part2=award-part1;
             if(part1+part2==award && isFour(part2)==0 && isFour(part1)==0)
                     {
                       printf("Case #%d: %d %d",count,part1,part2);
                       break;
                     }
           }
        count++;
        testcase--;
    }

}

int isFour(int part)
{
    int num=part,rem;
    while(num>0)
    {
        rem = num%10;
        if(rem == 4)
        {
           return 1;
        }
        num=num/10;
    }
    return 0;
}
