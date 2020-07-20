
#include<stdio.h>

int convert(int num)
{
    if(num)
    {
        int res = convert(num/10);
        int t = num%10;
        res *=10;
        t = t == 4 ? 1:0;
        res = res + t;
        return res;
    }
    return 0;
}

int main()
{
	//code
	long long int t, i=1;
	scanf("%lld", &t);
	while(i<=t){
	    long long int n;
	    scanf("%lld", &n);
	    long long int a = convert(n);
	    printf("Case #%lld: %lld %lld\n", i,a, n-a);
	    i++;
	}

	return 0;
}