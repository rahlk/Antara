#include <stdio.h>
#include <string.h>



int main(){
	int t;
	int n;
	int i,j,c=0;
	scanf("%d",&t);
	struct ar{
		char word[50];
		int  wordnum;
		};
	char ch;
	while (t--){
			scanf("%d",&n);
			
			struct ar a[n+2];
			
			for (i=0;i<=n;i++){
				while (c!=1){
					scanf("%c",&ch);
					a[i].word[j]=ch;
					a[i].wordnum = i;
					if (ch=='\0'){
						c=1;
						}
					}
				}
			
		}
			
			
	}
	
