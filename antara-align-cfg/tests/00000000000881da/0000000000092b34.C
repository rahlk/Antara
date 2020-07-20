#include<stdio.h>
int main(){
	int t,n,len,i,count=0;
	scanf("%d",&t);
	while(t--){
        count++;
        scanf("%d",&n);
        len=(2*n)-2;
        char *p=(char*)malloc(sizeof(char)*len);
        char *q=(char*)malloc(sizeof(char)*len);
        scanf("%s",p);
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
