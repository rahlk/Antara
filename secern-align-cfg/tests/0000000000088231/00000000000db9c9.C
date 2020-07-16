#include<stdio.h>
int main()
{
    int i,T,cnt;
    double N,j,k=0,num;
    scanf("%d",&T);
    for(i = 0; i < T; i++)
    {
    	cnt = 0;
    	scanf("%lf",&N);
    	num = N;
        while((int)num != 0)
    	{
        	int num1 = (int)num % 10;
        	if(num1 == 4)
        	{
        		k += pow(10,cnt);
			}
			num = num / 10;
			cnt++;
    	}
    	printf("Case #%d: %.0lf %.0lf\n",i+1,N-k,k);
    }
}