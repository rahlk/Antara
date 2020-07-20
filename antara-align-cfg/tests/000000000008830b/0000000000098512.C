#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
	if(b>a){
		int tmp=a;
		a=b;
		b=tmp;
	}
	if(a%b==0)return b;
	return gcd(b,a%b);
}
int cmp(const void *p1,const void *p2){
	int *s1=(int*)p1,*s2=(int*)p2;
	if(*s1<*s2)return -1;
	if(*s1>*s2)return 1;
	return 0;
}
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int N,L,value[105],cipher[105],lookup[26];
		scanf("%d%d",&N,&L);
		for(int j=0;j<L;j++)scanf("%d",&value[j]);
		int a=gcd(value[0],value[1]);
		cipher[0]=value[0]/a;
		for(int j=1;j<=L;j++)cipher[j]=value[j-1]/cipher[j-1];
		int fill=0;
		for(int j=0;j<=L;j++){
			int yes=0;
			for(int k=0;k<fill;k++){
				if(lookup[k]==cipher[j])yes=1;
			}if(!yes){
				lookup[fill++]=cipher[j];
			}
		}
		qsort(lookup,26,sizeof(int),cmp);
		printf("Case #%d: ",i+1);
		for(int j=0;j<=L;j++){
			for(int k=0;k<26;k++){
				if(cipher[j]==lookup[k]){
					printf("%c",'A'+k);
					break;
				}
			}
		}printf("\n");
		//for(int i=0;i<26;i++)printf("%d ",lookup[i]);
		//printf("\n");
	}
}
