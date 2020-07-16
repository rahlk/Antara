#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
typedef struct code{
	int val[26];
	char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
}Codage;
int premier(int n,int N){
	if(N<10000){
		if(n<3 || n%2==0) return 0;
		for(int i=3;i<(n/2);i++){
		if(n%i==0) return 0;
		}
		return 1;
	}
	else{
		for(int i=2;i<=(n/2);i++){
		if(n%i==0) return 0;
		}
		return 1;
	}
}
void GenererCode(int N,Codage *c){
	
	if(N<0){
		int k=N,pos=0;
		do{
		
		while(!premier(k,N)){
			k++;
		}
		c->val[pos]=k++;
		pos++;
		}while(pos!=26);
	}
	else{
		int i=3,pos=0;
		do{
		c->val[pos]=i;
		for(int k=i+1;k<N;k++){
			if(premier(k,N)){
				i=k;
				break;
			} 
		}
		
		pos++;
		}while(pos!=26);
	}
	
}

char* Texte(int code[],int N,int L){
	Codage c; char *text=(char*)malloc(255);
	GenererCode(N,&c);	int q,m=0,n=0,b;
	for(int i=0;i<26;i++){
		q = code[n]/c.val[i];
		if(premier(q,N) && (code[n]%c.val[i])==0 && q<N && m!=L){
			
			b = code[++n]/q;
			if(premier(b,N)  && b<N){
				text[m++]=c.alpha[i];
				
				int k=1;
				while(k<L){
					q=b;
					for(int p=0;p<26;p++)
						if(c.val[p]==b){
							text[m++]=c.alpha[p];
							
						}
					b = code[++k]/q;
					
				}
				break;
			}
				
		}
		
	}
	text[m]='\0';
	return text;
}
int main(int argc , char*argv[]){
	
	int T,N,L,*code; 
	
	char **text,line[20];
	do{
		scanf("%d",&T);
		getchar();
	}while(T<1 || T>100);
	text=(char**)malloc(T*sizeof(char*));
	
	for(int i=0;i<T;i++){
		text[i]=(char*)malloc(255);
		do{
			gets(line);
			sscanf(line,"%d%d",&N,&L);
		}while(N<101 || N>10000 || (L<2 || L>100));
		
		code =(int*)malloc(L*sizeof(int));
		int k=0;
		
		do{
			scanf("%d",&code[k]);
			getchar();
			k++;	
		}while(k!=L);
		
		text[i]=Texte(code,N,L);
		free(code);
		
	}

	for(int i=0;i<T;i++){
		printf("case n °%d : %s\n",i+1,text[i]);
	}
	return 0;
}