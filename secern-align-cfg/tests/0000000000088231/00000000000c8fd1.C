#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int t,c=1;
	char n[106];
	scanf("%d",&t);
	while(t--){
		scanf("%s", n);
		calculateResult(n,c++);
	}
	return 0;
}

void calculateResult(char n[], int c){
	char a0[] = {'0','0','1','1','1','2','3','5','5','6'};
	char b0[] = {'0','0','1','2','3','3','3','2','3','3'};
	char a[106], b[106];
	int i,ai,bi,len = strlen(n);
	if(len>=2){
		for(i=0,ai=0,bi=0;i<len;i++){
			if(n[i] != '4'){
				if(n[i] == '1' && i==0){
					if(n[1] != '0'){
						a[ai++] = '1';	
					}else{
						a[ai++] = '8';
						b[bi++] = '2';
						i++;
					}
				}else if(i == 0){
					a[ai++] = a0[n[0]-'0'];
					b[bi++] = b0[n[0]-'0'];
				}else{
					a[ai++] = '0';
					b[bi++] = n[i];
				}
			}else{
				a[ai++] = '1';
				b[bi++] = '3';
			}
		}
		a[ai]=  '\0';
		b[bi] = '\0';
	}else{
		a[0] = a0[n[0]-'0'];
		b[0] = b0[n[0]-'0'];
		a[1] = '\0';
		b[1] = '\0';
	}
	printf("Case #%d: %s %s\n",c,a,b);
	
	return;
}