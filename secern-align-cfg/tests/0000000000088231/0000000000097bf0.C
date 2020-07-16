#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	long a[size];
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<size;i++){
		int res=a[i]%2;
		int re=(int)a[i]/2;
		if(res==0)
		printf("Case #%d: %d %d\n",i+1,re,re);
		else
		printf("Case #%d: %d %d\n",i+1,re,re+1);
	}
}