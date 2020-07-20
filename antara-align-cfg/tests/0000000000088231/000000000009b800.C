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
    long int n,i=1,new;
    scanf("%d",&n);

    while(1)
    {
        new=n-i;
        if(check(new) || check(i) == 1)
            {i++;
            continue;}
        else
            break;
    }
    printf("%d",new);
    printf("\n%d",i);
}
