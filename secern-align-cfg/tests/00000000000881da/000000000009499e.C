#include<stdio.h>
#include<string.h>
int main(){
	int t,n,i,count=0,c;
	long int len;
	scanf("%d",&t);
	while(t--){
        count++;
        c=0;
        scanf("%d",&n);
        len=(2*n)-2;
        char p[len],q[len];
        scanf("%s",p);
        while(p[c]!='\0'){
            if(p[c]>='a'&&p[c]<='z'){
                p[c]=p[c]-32;
            }
            c++;
        }
        for(i=0;i<len;i++){
            if(p[i]=='S'){
                q[i]='E';
            }
            else{
                q[i]='S';
            }
        }
        q[len]='\0';
        printf("case #%d: %s",count,q);
        printf("\n");
	}
}
