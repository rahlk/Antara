#include<stdio.h>

#define MAX 1000000000

char str[MAX];
int length = 0;

void myatoi(char s[], long long N, int *len)
{
	int i = 0;
	long long x = N;
	while(x!=0)
	{
		long long m =  x%10;
		s[i++] = (char)(m+ '0');
		x = x/10;
	}
	s[i] = '\0';
	*len = i;
	//reverse string
	int p = 0, m;
	i = i-1;
	m = i;
	while(p != (i/2+1))
	{
		char k = s[p];
		s[p] = s[m];
		s[m--] = k;
		p++;
	}
}


int main()
{
int test_case = 0;
scanf("%d",&test_case);
long long N = 0;
for(register int i = 0;i<test_case;i++)
{
    N = 0;
    int len = 0, len1 = 0;
    scanf("%lld",&N);
    myatoi(str, N, &len);
    	len1 = len;
	long long a =N, b= 0;
	while(len1 >= 0)
	{
		if(str[len1] == '4')
		{
			int g = len - len1-1;
			int mul=1;
			while(g--)
				mul *= 10;
			a = a-mul;
			b = b+mul;
		}
		len1--;
	}
    printf("case#%d %lld %lld\n",i,a,b);
    str[0] = '\0';
}
return 0;
}