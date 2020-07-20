#include<stdio.h>

int main(){

	int t;
	scanf("%d",&t);
	int x=1;

	while(t--){

		int n;
		scanf("%d",&n);

		int v= (2*n)-2;
		char p[v+1];

		scanf(" %s",p);

		int scount_path=0;
		int ecount_path=0;
		int ecount_p=0;
		int scount_p=0;

		char path[v+1];

		p[v]=path[v]='\0';

		if(p[0]=='S'){

				path[0]='E';
				ecount_path++;
				scount_p++;
		}

		else
			{
				 path[0]= 'S';
				 scount_path++;
				 ecount_p++;
			}

		for(int i=1;i<v;i++){

			if(path[i-1]=='S'){
				if(ecount_p==ecount_path && scount_p==scount_path && p[i]=='E'){
					path[i]='S';
					scount_path++;	

				}

				else{
					path[i]='E';
					ecount_path++;
				}
			}

			else{
				if(ecount_p==ecount_path && scount_p==scount_path && p[i]=='S'){
					path[i]='E';
					ecount_path++;	
				}

				else{
					path[i]='S';
					scount_path++;
				}
			}

			if(p[i]=='E')ecount_p++;
			else scount_p++;

		}

		printf("Case #%d:",x);
		printf(" %s\n",path);
		x++;

	}

	return 0;

}