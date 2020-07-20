#include<stdio.h>
int check(long int n)
{
    long int rem;
    while(n)
    {
        rem=n%10;
        if(rem==4)
            return 1;
        else
            n=n/10;
    }
    return 0;
}
int main()
{
    long int n,i=1,t,ne,count;
    scanf("%ld",&t);
    for(count=1;count<=t;count++){
    scanf("%ld",&n);
    while(1)
    {
        ne=n-i;
        if(check(ne) || check(i) == 1)
            {i++;
            continue;}
        else
            break;
    }
    printf("Case #%ld : %ld %ld\n",count,ne,i);
    }
}
