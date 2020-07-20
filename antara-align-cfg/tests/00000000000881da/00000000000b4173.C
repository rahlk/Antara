#include <stdio.h>

int main() {
	//code
	long long int tt,nn,i,j,x=1;
	scanf("%lld",&tt);
	while(x<=tt)
	{
	    scanf("%lld",&nn);
	    char a[(2*nn)];
	    scanf("%s",a);
	    printf("Case #%lld: ",x);
	    for(i=0;i<(2*nn)-1;i++)
	    {
	        if(a[i]=='E')
	        printf("S");
	        else if(a[i]=='S')
	        printf("E");
	    }
	    printf("\n");
	    x++;
	}
	return 0;
}