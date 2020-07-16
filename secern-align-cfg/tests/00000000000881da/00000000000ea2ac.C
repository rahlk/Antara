#include<stdio.h>
#include<string.h>
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
		long long int n,x,i,j,temp;
		scanf("%lld",&n);
		x=2*n-2;
		char str[x];
		scanf("%s",str);
		i = 0;
       j = strlen(str) - 1;
 
      while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
      }
		printf("%s",str);
	}
}