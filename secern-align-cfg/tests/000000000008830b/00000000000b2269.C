#include<stdio.h>

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int binary(int a[], int l,int r,int num)
{
	int mid,flag=-1;
	
	if(l<=r)
	{
		mid=(r+l)/2;
		if(a[mid]==num)
		{
			flag=1;
			return mid;
		}
		else if(a[mid]>num)
		return binary(a,l,mid-1,num);
		else
		return binary(a,mid+1,r,num);
	}
}

int main()
{
int t,o;
scanf("%d", &t);
for(o=1;o<=t;o++)
{
    int n,l,a[100001],b[100001],x[27],c[100001],i,j,temp;
    char name;
    
    scanf("%d %d", &n,&l);
    for(i=0;i<l;i++)
    scanf("%d", &a[i]);
    
    for(i=0;i<l;i++)
    {
    	c[i+1]=gcd(a[i],a[i+1]);
	}
	
	c[0]=a[0]/c[1];
	c[l]=a[l-1]/c[l-1];
	
	b[0]=c[0];
	j=1;
	for(i=1;i<l+1;i++)
	{
		b[i]=c[i];
	}
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		if(b[i+1]==b[i])
		b[i]=-1;
	}
	j=0;
	for(i=0;i<=l;i++)
	{
		if(b[i]!=-1)
		{
			x[j]=b[i];
			j++;
		}
	}
	
	printf("Case #%d: ",o);
	for(i=0;i<l+1;i++)
	{
		name=(97+binary(x,0,25,c[i]));
		printf("%c",name);
	}
	printf("\n");
	
}
return 0;
}