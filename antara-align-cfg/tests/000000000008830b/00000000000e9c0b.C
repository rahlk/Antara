#include<stdio.h>

int ind(int fac)
{
	int inde;
	int num[]={3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103};
	for(int i=0;i<26;i++)
	{
		if(num[i]==fac)
		{
			inde=i;
			break;
		}
	}
	return inde;
}

int main()
{
    int n,m=0,p=2;
	char alph[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d",&n);
    int a[2];
    int factors[2];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[0]);
        scanf("%d",&a[1]);
        int b[a[1]];
        for(int j=0;j<a[1];j++)
        {
            scanf("%d",&b[j]);
        }
        for(int k=b[0];k>=3;k--)
        {
            if(b[0]%k==0)
            {
                factors[m++]=k;
            }
			
        }
		int len=a[1];
        int a=factors[1];
		char cipher[len+1];
		int index1=ind(factors[2]);
		int index2=ind(factors[1]);
		cipher[0]=alph[index1];
		cipher[1]=alph[index2];
		for(int j=1;j<len;j++)
		{
			factors[2]=b[j]/factors[1];
			index1=ind(factors[2]);
			cipher[p++]=alph[index1];
			factors[1]=factors[2];
		}
		for(int h=0;h<(len+1);h++)
		{
			printf("Case #%d: %c",i,cipher[h]);
		}
    }
}
