#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void process (char *str,int len,int n){
	int i,j=0,k=0,**a,**b,x=0,y=0;
	a=(int **)malloc(n*sizeof(int));
	b=(int **)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		a[i]=(int *)malloc(n*sizeof(int));
		b[i]=(int *)malloc(n*sizeof(int));
	}
	a[j][k]=1;
	b[x][y]=1;
	for(i=0;i<leng;i++){
		if(str[i]=='E'){
			a[j][k+1]=1
			x+=1;
			if(x<n){
				a[x][y]=1;
			}
			printf("S");
		}
		else{
			a[j+1][k]=1;
			y+=1;
			if(y<n){
				a[x][y]=1;
			}
			printf("E");
		}
	}
	printf("\n");
}
int main(){
	int t,r=1,n;
	char *str;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		str=(char *)malloc((2*n-2)*sizeof(char));
		scanf("%s",str);
		printf("case #%d: ",r);
		process(str,2*n-2,n);
		r++;
	}
}