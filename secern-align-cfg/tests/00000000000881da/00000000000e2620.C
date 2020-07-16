#include<stdio.h>
#include<stdlib.h>
int main(){
	char p[100000];
	char q[100000];
	int t,i,n,j=0,k,count1,count2;
	scanf("%d",&t);
	for(i=0;i<t;i=i+1){
		scanf("%d",&n);
		scanf("%s",p);
		j=0;
		while(j< ((2*n)-2)){
			if(p[j]=='S' && j==0){
				q[j]='E';
				j=j+1;
			}
			else if(p[j]=='E' && j==0){
				q[j]='S';
				j=j+1;
			}
			else if(j==1){
				q[j]='E';
				j=j+1;
			}
			else if(j>1){
				count1=0;
				count2=0;
				for(k=0;k<j;k=k+1){
					if(p[k]=='E'){
						count1=count1+1;
					}
					if(q[k]=='E'){
						count2=count2+1;
					}
				}
					if(count1==count2){
						if(p[j]=='S'){
							q[j]='E';
						}
						else{
							q[j]='S';				
						}
						j=j+1;
					}
					else if(count2>count1){
						q[j]='S';
						j=j+1;
					}
					else{
						q[j]='E';
						j=j+1;
					}
					
				
			
			}
		}
		q[j]='\0';
		printf("Case #%d: %s\n",i+1,q );


	}


}