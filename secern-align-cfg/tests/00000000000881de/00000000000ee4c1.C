#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ceilg(int a, int b){
	if(a%b){
		return (a/b)+1;
	}
	else{
		return (a/b);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	for (int m = 1; m <= t; ++m)
	{
		int n,b,f;
		scanf("%d%d%d",&n,&b,&f);
		int broken[n];
		for (int i = 0; i < n; ++i)
		{
			broken[i] = -1;
		}
		int complete = 0;
		int parts[n+1];
		int parts_new[n+1];
		int size[n];
		int size_new[n];
		for (int i = 0; i < n+1; ++i)
		{
			parts[i] = parts_new[i] = -1;
		}
		for (int i = 0; i < n; ++i)
		{
			size[i] = size_new[i] = -1;
		}
		for (int i = 0; i < ceilg(n,b)+1; ++i)
		{
			parts[i] = (i)*(b);
			size[i] = b;
		}
		size[ceilg(n,b)] = -1;
		if(n%b != 0){
			parts[n/(b) + 1] = n;
			size[n/(b)] = n%(b);
		}
		int n_parts = ceilg(n,b);
		while(!complete && f){
			complete = 1;
			//Giving output here
			for (int i = 1; i < n_parts + 1; ++i)
			{
				for (int j = parts[i-1]; j < parts[i]; ++j)
				{
					printf("%d",(i+1)%2);
				}
			}
			printf("\n");
			fflush(stdout);
			//Taking input here
			char out[n-b+1];
			scanf("%s",out);
			//Processing input
			if(strcmp(out,"-1") == 0){
				exit(-1);
			}
			int j = 0;
			for (int i = 0; i < n_parts; ++i)
			{
				int count = 0;
				while(broken[i] != 0 && j<n-b && count <size[i] && out[j] == 48 + (i%2)){
					count++;
					j++;
				}
				if(broken[i] == -1 && size[i] == count){
					complete*=1;
					for (int k = parts[i]; k < parts[i+1]; ++k)
					{
						broken[k] = 1;
					}
				}
				else if(broken[i] == -1 && count == 0){
					complete*=1;
					for (int k = parts[i]; k < parts[i+1]; ++k)
					{
						broken[k] = 0;
					}
				}
				else if(broken[i] == -1){
					complete = 0;
					size[i] = size[i] - count;
				}
			}
			parts_new[0] = 0;	
			int n_parts2 = 0;
			for (int i = 0; i < n_parts; ++i)
			{
				int n_div = ceilg(parts[i+1]-parts[i],size[i]);
				for (int j = 0; j < n_div; ++j)
				{
					parts_new[n_parts2 + j + 1] = size[i] + parts_new[n_parts2+j];
					size_new[n_parts2 + j] = size[i];
				}
				if((parts[i+1]-parts[i])%size[i]){
					parts_new[n_parts2+n_div] = parts[i+1];
					size_new[n_parts2+n_div-1] = (parts[i+1]-parts[i])%size[i];
				}
				n_parts2 = n_parts2 + n_div;
			}
			n_parts = n_parts2;
			for (int i = 0; i < n; ++i)
			{
				size[i] = size_new[i];
			}
			for (int i = 0; i < n+1; ++i)
			{
				parts[i] = parts_new[i];
			}
			f--;
		}
		for (int i = 0; i < n; ++i)
		{
			if(broken[i] == 0){
				printf("%d ",i);
			}
		}
		printf("\n");
		fflush(stdout);
		int ret;
		scanf("%d",&ret);
		if(ret == -1){
			exit(-1);
		}
	}
}