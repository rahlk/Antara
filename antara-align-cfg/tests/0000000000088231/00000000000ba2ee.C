#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int t,i=0,n1,ctr=0,i1=0,flag=0,temp=0,i3=1,i4=0;
	long long int t1,t2,n;
	int po4[100];
	scanf(" %d",&t);
	int tp=t;
	while(t--)
	{
		i4=i1;
		ctr=-1;
		flag=0;
		scanf(" %d",&n);
		t1=n/2;
		t2=t1;
		n1=t1;
		while(n1)
		{
			++ctr;
		//    printf("\n n1 is %d",n1);
			i=n1%10;
		//	printf("\n i is %d",i);
			if(i==4)
			{
				++i1;
		//	    printf("\nthe value of ctr is %d",ctr);
				flag=1;
				po4[i1]=ctr;
		//		printf("\n i1 when stroing in po4 is %d",i1);
			}
		//	printf("\n i1 is %d\n",i1);
			n1=n1/10;
		}
		if(flag==1)
		{
		//	printf("\ni1 is %d and i4 is %d",i1,i4);
			for(i=i4+1;i<=i1-i4;i++)
			{
		//	    printf("\nthe value of po4[i] is %d and i is %d\n",po4[i],i);
				temp=temp+pow(10,po4[i]);
			}
		//	printf("\n the value of temp is %d",temp);
			t1=t1-temp;
			t2=t2+temp;
		}
		printf("Case #%d: %d %d",i3++,t1,t2);
		if(i3!=tp+1)
		printf("\n");
	}
}