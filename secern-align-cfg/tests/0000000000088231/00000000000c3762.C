#include<stdio.h>
int convert(int num, int a, int b)
{
    if( num )
    {
        int res = convert(num/10,a,b);
        int t = num%10;
        res *=10;
        t = (t == a ? b:t);
        res = res + t;
        return res;
    }
    return 0;
}
int main(){
    int n,nu,newnum;
    scanf("%d",&n);
    while( n )
    {
        scanf("%d",nu);
        newnum = convert(nu,4,2);
        printf("Case #%d: %d %d",4-n,newnum,nu-newnum);
        n--;
    }
    return 0;
}