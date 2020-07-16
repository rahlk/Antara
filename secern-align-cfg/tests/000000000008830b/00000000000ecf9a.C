#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
	unsigned long int n,*d,primos[100],alfabeto[26];
	int t,l,i,j,divisores,k,aux;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		scanf("%ld %d",&n,&l);
		divisores=0;
		d=(unsigned long int*)malloc(sizeof(unsigned long int)*l);
		for(j=0;j<l;j++){
			scanf("%ld",&d[j]);
		}
		for(j=0;j<26;j++){
			alfabeto[j]=0;
		}
		for(j=0;j<l;j++){
			if(divisores==0){
				for(k=2;k<=sqrt(d[j]);k++){
					if(d[j]%k==0){
						if(d[j+1]%k==0){
							primos[divisores]=d[j]/k;
							divisores++;
							primos[divisores]=k;
							divisores++;
						}
						else{
							primos[divisores]=k;
							divisores++;
							primos[divisores]=d[j]/k;
							divisores++;
						}
						if(primos[0]!=primos[1]){
							alfabeto[0]=primos[0];
							alfabeto[1]=primos[1];
						}
						else{
							alfabeto[0]=primos[0];
						}
					}
				}
			}
			else{
				primos[divisores]=d[j]/primos[divisores-1];
				divisores++;
			}
		}
		for(j=0;j<divisores;j++){
			for(k=0;k<26;k++){
				if(primos[j]==alfabeto[k])
					break;
				if(alfabeto[k]==0){
					alfabeto[k]=primos[j];
					break;
				}
			}
		}
		j=1;
		while(j!=0){
			j=0;
			for(k=0;k<25;k++){
				if(alfabeto[k]>alfabeto[k+1]){
					aux=alfabeto[k+1];
					alfabeto[k+1]=alfabeto[k];
					alfabeto[k]=aux;
					j++;
				}
			}
		}
		printf("Case #%d: ",i+1);
		for(j=0;j<divisores;j++){
			for(k=0;k<26;k++){
				if(primos[j]==alfabeto[k]){
					printf("%c",k+'A');
				}
			}
		}
		printf("\n");
	}
	return 0;
}

