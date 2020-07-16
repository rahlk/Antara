#include<stdio.h>
int main()
{
	int t,i1=1;
	//long r,num_1,temp,sum=0,i,temp_sum_1=0,temp_sum_2=0;
	scanf("%d",&t);
	while(t--)
	{
		int num;
		scanf("%d",&num);
		int n1,n2,a,b,c,a1,b1,c1,x,y,z,x1,y1,z1;
		if(num>0&&num<=9)
		{
			n1=num/2;
			n2=n1;
			printf("Case #%d: %d %d\n",i1++,n1,n2);
		}
		if(num>10&&num<=99)
		{
			int d1,d2,e1,e2;
			n1=num/2;
			n2=n1;
			d1=((n1%100)/10);
			d2=n1%10;
			e1=((n2%100)/10);
			e2=n2%10;
			if(d1==4&&e1==4)
			{
				int res1,res2;
				res1=d1-1;
				res2=e1+1;
				printf("Case #%d: %d%d",i1++,res1,res2);
			}
			if(d2==4&&e2==4)
			{
				int res_1,res_2;
				res_1=d2-1;
				res_2=e2-1;
				printf("Case #%d: %d%d",i1++,res_1,res_2);
			}
		}
		if(num>=100&&num<=999)
		{
		n1=num/2;
		n2=n1;
		a=n1/100;
		b=( (n1%100)/10);
		c=n1%10;
		a1=n2/100;
		b1=( (n2%100)/10);
		c1=n2%10;
		if(a==4&&a1==4)
		{
			x=a-1;
			x1=a1+1;
			printf("Case #%d: %d%d%d %d%d%d\n",i1++,x,b,c,x1,b1,c1);
		}
		if(b==4&&b1==4)
		{
			y=b-1;
			y1=b1+1;
			printf("Case #%d: %d%d%d %d%d%d",i1++,a,y,c,a1,y1,c1);
		}if(b==4&&b1==4)
		{
			z=c-1;
			z1=c1+1;
			printf("Case #%d: %d%d%d %d%d%d",i1++,a,b,z,a1,b1,z1);
		}
		}
	if(num>1000&&num<=99999)
	{	
	n1=num/2;
	n2=n1;
	printf("Case #%d: %d %d",i1++,n1,n2);
	/*while(n1!=0){
	r=n1%10;
	temp=r+1;
	if(temp==10)
	temp=0;
	n1=n1/10;
	sum=(sum*10)+temp;

	}

	while(sum!=0){
	i=sum%10;
	sum=sum/10;
	temp_sum_1=(temp_sum_1*10)+i;
	}
	
	while(n2!=0){
	r=n2%10;
	temp=r+1;
	if(temp==10)
	temp=0;
	n2=n2/10;
	sum=(sum*10)+temp;

	}

	while(sum!=0){
	i=sum%10;
	sum=sum/10;
	temp_sum_2=(temp_sum_2*10)+i;
	}*/
	//printf("%ld %ld",temp_sum_1,temp_sum_2);
	}
	}
}