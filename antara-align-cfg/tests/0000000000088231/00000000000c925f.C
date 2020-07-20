#include <stdio.h>
int four(int);
int main(void) {
	int i,c,d,e,T,N,A,B;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    scanf("%d",&N);
	    c=four(N);
	    if(c==0){
	        A=1;
	        B=N-A;
	 label: d=four(A);
	        e=four(B);
	        if(d==1&&e==1)
	        {
	            printf("Case #%d: %d %d\n",i,A,B);
	        }
	        else{
	            A++;
	            B=N-A;
	            goto label;
	    }
	    
	}
	}
	return 0;
}
int four(int n)
{
    int a,b=0;
    while(n>0)
    {
        a=n%10;
        if(a==4){
            b++;
        }
        n=n/10;
    }
    if(b!=0)
    return 0;
    else
    return 1;
}