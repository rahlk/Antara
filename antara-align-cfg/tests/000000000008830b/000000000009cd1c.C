#include <stdio.h>
#include<stdlib.h> 

int int_cmp(const void *a, const void *b) 
{ 
    const int *ia = (const int *)a; // casting pointer types 
    const int *ib = (const int *)b;
    return *ia  - *ib; 
	/* integer comparison: returns negative if b > a 
	and positive if a > b */ 
} 
int gcd(int a, int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 

int main() 
{ 
	//freopen("inp.in", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
   int t,n,l,j,a[101],i,prime[30],np,hc,ans[101];
   char c;
     scanf("%d",&t);
    for(int case1 =1 ;case1<= t; case1++)
    {

     scanf("%d",&n);

     scanf("%d",&l);
   		for(i=0;i<l;i++)
    	{

     scanf("%d",&a[i]);
    	}
    	np=1;
    	hc=gcd(a[0],a[1]);
    	ans[0]=a[0]/hc;
    	ans[1]=hc;
    	prime[0]=hc;
    	for(i=1;i<l;i++){
    		ans[i+1]=a[i]/ans[i];
    	}
    	int flag=0;
    	for(i=0;i<=l;i++)
    	{
    		flag=0;
    		for(j=0;j<np;j++)
    		{
    			if(prime[j]==ans[i])
    				flag=1;
    		}
    		if(flag==0)
    			prime[np++]=ans[i];
    	}

    	qsort(prime, np, sizeof(int), int_cmp);
   		printf("Case #%d: ",case1);
    	for(i=0;i<=l;i++)
		{    		
			for(j=0;j<np;j++)
			{
			    c=('A'+j);
				if(prime[j]==ans[i])
				{
				    if(j==0)
				    printf("A");
				    
				    if(j==1)
				    printf("B");
				    
				    if(j==2)
				    printf("C");
				    
				    if(j==3)
				    printf("D");
				    
				    if(j==4)
				    printf("E");
				    
				    if(j==5)
				    printf("F");
				    
				    if(j==6)
				    printf("G");
				    
				    if(j==7)
				    printf("H");
				    
				    if(j==8)
				    printf("I");
				    
				    if(j==9)
				    printf("J");
				    
				    if(j==10)
				    printf("K");
				    
				    if(j==11)
				    printf("L");
				    
				    if(j==12)
				    printf("M");
				    
				    if(j==13)
				    printf("N");
				    
				    if(j==14)
				    printf("O");
				    
				    if(j==15)
				    printf("P");
				    
				    if(j==16)
				    printf("Q");
				    
				    if(j==17)
				    printf("R");
				    
				    if(j==18)
				    printf("S");
				    
				    if(j==19)
				    printf("T");
				    
				    if(j==20)
				    printf("U");
				    
				    if(j==21)
				    printf("V");
				    
				    if(j==22)
				    printf("W");
				    
				    if(j==23)
				    printf("X");
				    
				    if(j==24)
				    printf("Y");
				    
				    if(j==25)
				    printf("Z");
				    
				    
				}
			}
		}
		printf("\n");
    }
    return 0; 
} 