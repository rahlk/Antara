#include <stdio.h>

int main(void) {
	// your code goes here
	 long long int i,k,l,r,m,n,a[1000000],b[100000],j;
    scanf("%lli",&n);
    int flag=1;
    while(n--)
    {
        scanf("%lli",&k);
        i=0;
        
        if(k%2==0)
        {
        l=k/2;
        r=k/2;
        }
        else
        {
            l=k/2;
            r=k/2+1;
        }
        while(l)
        {
        a[i]=l%10;
        b[i++]=r%10;
        r=r/10;
        l=l/10;
        
        }
        
        j=i;
        l=i;
         while(i--)
    {
        if(a[i]==4)
        {
            a[i]=a[i]-2;
            b[i]=b[i]+2;
        }
    }
    printf("Case #%lli: ",flag++);
    while(j--)
    printf("%lli",a[j]);
    
    printf(" ");
   while(l--)
    printf("%lli",b[l]);
    
    printf("\n");
    }
	return 0;
}

