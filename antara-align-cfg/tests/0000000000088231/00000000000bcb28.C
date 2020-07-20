#include<stdio.h>
#include<stdbool.h>

bool check(int half)
{
    while(half>0)
    {
        if(half%10 == 4)
        {
            return true;
        }
        half = half / 10;
    }
    return false;
}

int partition(int num)
{
    int half = 0;
    half = (int)num/2;
    if(check(half) || check(num-half))
    {
        return partition(half);
    }
    else
    {
        return half;
    }
}

void main()
{
    int i,test;
    scanf("%d",&test);
    int arr[test],result[test];
    for(i=0;i<test;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<test;i++)
    {
        printf("Case #%d: %d %d\n",i+1,partition(arr[i]),arr[i]-partition(arr[i]));
    }
}
