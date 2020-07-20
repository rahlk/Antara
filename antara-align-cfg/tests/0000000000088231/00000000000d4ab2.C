#include<stdio.h>
#include<math.h>
int A,B,count=0;
/*int check(int temp)
{
	    int rem=temp%10;
	    if(rem==4)
	    {
		return 1;
		break;
	    }

	    temp=temp/10;
	    if(temp!=0)
	    {
	    check(temp);
	    }
	return 0;
}*/
int checkB(int temp1)
{     int ptemp=pow(10,count);
    int rem1=temp1%10;

	    if(rem1==4)
	    {

	       B-=ptemp;
	       A+=ptemp;

	    }
	    temp1/=10;
	    count++;
	    if(temp1!=0)
	    {
	    checkB(temp1);
	    }
	return 0;
}
int main()
{
    int T,c,N,i=1,rem,temp;
    scanf("%d",&T);
    while(i<=T)
    {
	scanf("%d",&N);
	temp=N;
	A=1;
	B=N-1;
//	c=check(temp);
	checkB(B);
//	if(c==1)
//	{
	printf("%d %d \n",A,B);
//	}
count=0;
	i++;
    }
    return 0;
}