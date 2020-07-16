#include <stdio.h>
int count=1;
int rem(int a) {
	int rem;
	while(a!=0) {
		rem=a%10;
		if(rem==4)
		return -1;
		a/=10;
	}
}


int main() {
    int  n,T,i,j,temp1,temp2,c,d;
    scanf("%d",&T);
    scanf("%d", &n);

    for(j=1;j<=T;j++) {
    for(i=2;i<n;i++) {
    	temp1=i;
    	temp2=n-temp1;
    	c=rem(temp1);
    	d=rem(temp2);
    	if(c!=-1 &&d!=-1)
    	break;
    }
  printf("Case#%d: %d %d\n",j,temp1,temp2);
    if(j!=T)
    scanf("%d", &n);
    }
    return 0;
}
