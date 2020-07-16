#include<stdio.h>
void main()
{
	int N[100],a[1000][1000],m,i,j,n[1000];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d,",&N[i],&n[i]);
		for(j=0;j<n[i];j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		pri(N[i],n[i],a,i);
	}
	
}
void pri(int N,int n,int a[][],int l)
{
	int m=1,j=0,k=1,i,p[1000],s[1000];
	while(m<=n)
	{
		for(i=0;i<N;i++)
		{
			if(checkprime(i))
			{
	            if(a[l][j]%i==0)
				{
		                 p[k]=i; k++;
						 p[k]=a[i][j]/i;
						 j++;
						 k++;	
						 break;	 			
				}			
			}
		}
		for(;j<n;j++)
					{
		                 p[k+1]=a[l][j]/p[k];k++;				
	    			 }
	}int temp;
	for(i=0;i<k-1;i++)
	s[i]=p[i];
	for(i=0;i<k-1;i++)
	for(j=0;j<k-1;j++)
	{
		if(s[i]>s[j])
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
	int size = sizeof(s) / sizeof(s[0]);
    size=	removeDuplicates(s,size);
    for(i=1;i<=n+1;i++)
    {
    	for(j=0;j<size;j++)
    	{
    		if(s[j]==p[i])
    		{
    			printf("%c",65+i);
			}
		}
	}
}
int removeDuplicates(int arr[], int n) 
{ 
   int i;
     if (n==0 || n==1) 
        return n; 
  
    int temp[n]; 
   int j = 0; 
    for (i=0; i<n-1; i++) 
  
         if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
  
     temp[j++] = arr[n-1]; 
  
     for (i=0; i<j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
}
int checkprime(int num){
    int i;
    int flg=0;
    for(i=2;i<(num-1);i++)
    {
        if(num%i==0){
            flg=1;
            break;
        }
    }
    if(flg) return 0;
    else return 1;
}
