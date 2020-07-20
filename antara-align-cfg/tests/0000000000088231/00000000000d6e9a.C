#include<stdio.h>
int check4(long int n)
{
    int r;
    while(n!=0)
    {
        r=n%10;
        if(r==4)
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int main()
{
    int count,test;
    long int num,a,b;
    scanf("%d",&test);
    for(count=1;count<=test;count++)
    {
        scanf("%ld",&num);
        for(a=1;a<num;a++)
        {
            if(check4(a)==1){
            b=num-a;
            if(check4(b)==1)
            {
                break;
            }
            }
            else if(check4(a)==0)
            {
              continue;
            }
        }
        printf("Case #%d: %ld %ld\n",count,a,b);
    }
    return 0;
}