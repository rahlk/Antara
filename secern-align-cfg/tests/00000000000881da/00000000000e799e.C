#include<stdio.h>
#include<stdlib.h>
int main(){
	char p[100000];
	char q[100000];
	int t,i,n,j=0;
	scanf("%d",&t);
	for(i=0;i<t;i=i+1){
		scanf("%d",&n);
		scanf("%s",p);
		j=0;
		while(j< ((2*n)-2)){
		    if(p[j]=='E'){
		        q[j]='S';
		        j=j+1;
		    }
		    else{
		        q[j]='E';
		        j=j+1;
		    }
		    
		}
		q[j]='\0';
		printf("Case #%d : %s\n",i+1,q);
	}
}						