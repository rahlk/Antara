#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void* a, const void* b){
	char* l = (char*)a;
	char* r = (char*)b;
	int size_min = strlen(l);
	int big = 0;
	if(size_min>strlen(r)){
		size_min=strlen(r);
		big = 1;
	}
	for (int i = 0; i < size_min; ++i)
	{
		if(l[i] == r[i]){

		}
		else if((l[i] == 'R' && r[i] != 'R') || (l[i]=='P' && r[i] == 'S')){
			return -1;
		}
		else if((l[i] == 'S' && r[i] != 'S')||(l[i] == 'P' && r[i] == 'R')){
			return 1;
		}
	}
	return (-1*big);
}

int check_poss(char ans[], int k, int l, char a[l][501], int sizemax){
	if(k >= sizemax){
		return 0;
	}
	int flag_R,flag_P,flag_S;
	flag_R = flag_S  = flag_P =0;
	for (int i = 0; i < l && !(flag_R && flag_S && flag_P); ++i)
	{
		if(strlen(a[i]) > k){
			if(a[i][k] == 'R'){
				flag_R = 1;
			}
			else if(a[i][k] == 'S'){
				flag_S = 1;
			}
			else{
				flag_P = 1;
			}
		}
	}
	if(flag_R == 0 && flag_R == flag_P && flag_R == flag_S){
		return 0;
	}
	if((flag_R && flag_S && flag_P)){
		return 1;
	}
	else{
		if(flag_R == 1){
			int n = 0;
			while(a[n][k] == 'R'){
				n++;
			}
			if(check_poss(ans,k+1,n,a,sizemax) == 0){
				ans[k] = 'R';
				return 0;
			}
			else if(check_poss(ans,k+1,l-n,&a[n],sizemax) == 0){
				ans[k] = a[l-1][k];
				return 0;
			}
			else{
				return 1;
			}
		}
		else if(flag_P == 1){
			int n = 0;
			while(a[n][k] == 'P'){
				n++;
			}
			if(check_poss(ans,k+1,n,a,sizemax) == 0){
				ans[k] = 'P';
				return 0;
			}
			else if(check_poss(ans,k+1,l-n,&a[n],sizemax) == 0){
				ans[k] = a[l-1][k];
				return 0;
			}
			else{
				return 1;
			}
		}
	}
	if(flag_S == 1){
		ans[k] = 'P';
		return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	for (int m = 1; m <= t; ++m)
	{
		int n;
		scanf("%d",&n);
		char a[n][501];
		int sizemax=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%s",a[i]);
			if(strlen(a[i])>sizemax){
				sizemax=strlen(a[i]);
			}
		}
		char ans[sizemax+1];
		for (int i = 0; i < sizemax+1; ++i)
		{
			ans[i] = '\0';
		}
		qsort((void*)a, n, sizeof(a[0]), comp);
		if(check_poss(ans,0,n,a,sizemax) == 1){
			printf("Case #%d: IMPOSSIBLE\n",m);
		}
		else{
			printf("Case #%d: %s\n",m,ans);
		}
	}
}