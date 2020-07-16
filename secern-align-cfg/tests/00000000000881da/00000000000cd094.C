#include<stdio.h>

#include<stdio.h>
char s[50000];
int main(){
	int n,t,i,num=1;
    scanf("%d",&t);
    while(t--){
        
        scanf("%d",&n);
        scanf("%s",s);
        for(i=0;i<n;i++){
        	if(s[i]=='S')
        		s[i]='E';
        	else
        		s[i]='S';
		}
		printf("Case #%d: %s\n",num++,s);
        
        
    }
}