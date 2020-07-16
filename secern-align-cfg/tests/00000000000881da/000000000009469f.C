#include<stdio.h>
#include<string.h>
int main(){
	int t,n,i,count=0;
	long int len;
	scanf("%d",&t);
	while(t--){
        count++;
        scanf("%d",&n);
        len=(2*n)-2;
        char p[len],q[len];
        scanf("%s",p);
        strupr(p);
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
