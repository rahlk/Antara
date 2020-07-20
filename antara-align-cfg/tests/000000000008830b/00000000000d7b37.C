# include<stdio.h>
# include<stdlib.h>

int gcd(int,int);
void comp_primenum_alpha(int t,char a[],int n[],int p[],int l)
{
	printf("Case #%d: ",t);
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(p[i]==n[j])
			printf("%c",a[j]);
		}
	}
}
void sort(int num[],int n)
{
	for(int j=1;j<n;j++)
	{
		int key=num[j];
		int i=j-1;
		while(i>=0 &&num[i]>key)
		{
			num[i+1]=num[i];
			i--;
		}
		num[i+1]=key;
	}
}
int * store_distinctNum(int p[],int m)
{	
	int *temp=(int *)malloc(26*sizeof(int));
	int dup;
	for(int i=0;i<m;i++)
	{
		dup=0;
		int j;
		for(j=0;j<i;j++)
		{
			if(p[i]==temp[j])
			{
				dup=1;
				break;
			}
		}	
		if(dup==0)
		temp[j]=p[i];	
	}
	return temp;
}
int * bulid_primeArr(int p[],int L)
{
	int *temp=(int *)malloc((L+1)*sizeof(int));
	for(int i=1;i<=L;i+=2)
	{
		int mid=gcd(p[i],p[i+1]);
			if(i==1)
			{
				temp[i-1]=p[i]/mid;
				temp[i+1]=p[i+1]/mid;
			}else
				temp[i+1]=p[i+1]/mid;
				
			temp[i]=mid;
	}
	return temp;
}

int gcd(int a,int b)
{
	if (a == 0) 
       return b; 
    if (b == 0) 
       return a;  
    if (a == b) 
        return a;  
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}

int main()
{
	char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		int N,L;
		scanf("%d %d",&N,&L);
		int *ptr=(int *)malloc(L*sizeof(int));
		for(int j=1;j<=L;i++)
		scanf("%d ",ptr[j]);
		int *prime=(int *)malloc((L+1)*sizeof(int));
		prime=bulid_primeArr(ptr,L);
		int *num=(int *)malloc(26*sizeof(int));
		num=store_distinctNum(prime,L+1);
		sort(num,26);
		comp_primenum_alpha(i,alpha,num,prime,L+1);
	}
	return 0;
}
