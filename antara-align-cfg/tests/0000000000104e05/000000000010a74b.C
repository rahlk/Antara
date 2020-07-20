#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	char str[50];
	int flag;
	char a;
}*p,*tmp;

int check(char *s1,char *s2){
	char *t1,*t2;
	int i=0,j=0,k=-1;
	t1=s1; t2=s2;
	while(*t1!='\0'){
		t1=t1+1;
		i=i+1;
	}
	t1=t1-1;
	while(*t2!='\0'){
		t2=t2+1;
		j=j+1;
	}
	t2=t2-1;
	while(i>0&&j>0){
		if(*t1!=*t2){
			return(k);
		}
		k=k+1;
		t1=t1-1;
		t2=t2-1;
		i--;
		j--;
	}
	return(k);
}

int main(void){
	
	int t,n,lvar,lvar2,lvar3,tmp1,tmp2,mp;
	char ch;
	scanf(" %d",&t);
	for(lvar=0;lvar<t;++lvar){
		scanf(" %d",&n);
		p=(struct node *)malloc(sizeof(struct node)*n);
		tmp=p;
		for(lvar2=0;lvar2<n;++lvar2){
			scanf(" %s",tmp->str);
			tmp->flag=0;
			tmp->a=0;
			tmp=tmp+1;
		}
		tmp=p;
		for(lvar2=0;lvar2<n;++lvar2){
			//printf("\nTaking %s",(p+lvar2)->str);
			tmp1=-1;
			if((p+lvar2)->flag==0){
				for(lvar3=lvar2+1;lvar3<n;++lvar3){
					if((p+lvar3)->flag==0){
						tmp2=check((p+lvar2)->str,(p+lvar3)->str);
						if(tmp2>tmp1)
						{
						tmp1=tmp2;
						mp=lvar3;
						}
						//printf("\n---compared to %s : ",(p+lvar3)->str,tmp2);
					}
				}
				if(tmp1!=-1){
					ch=(p+lvar2)->str[strlen((p+lvar2)->str)-1-tmp1];
					//printf("\n------Accent Char %c",ch);
					for(lvar3=0;lvar3<n;++lvar3){
						if((p+lvar3)->a==ch)
							break;
					}
					if(lvar3>=n){
						(p+mp)->flag=1;
						(p+lvar2)->flag=1;
						(p+mp)->a=ch;
						(p+lvar2)->a=ch;
						//printf("\n------Accent Char %c changed",ch);
					}
					else{
						//printf("\n------Accent Char %c not changed",ch);
					}
				}
			}
		}
		tmp1=0;
		for(lvar3=0;lvar3<n;++lvar3){
			if((p+lvar3)->flag==1)
				tmp1++;
		}
		printf("Case #%d: %d\n",lvar+1,tmp1);
		free(p);
		tmp=p=NULL;
	}
	
	return(0);
}