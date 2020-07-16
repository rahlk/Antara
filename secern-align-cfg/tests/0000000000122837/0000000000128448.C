#include <stdlib.h>
#include <stdio.h>

int main(){
	int t,w;
	scanf("%d%d",&t,&w);
	if(w==2){
		return -1;
	}
	for (int m = 0; m < t; ++m)
	{
		int nums[6];
		long int temp;
		fprintf(stdout, "%d\n", 54*6);
		scanf("%ld",&temp);
		temp >> 54;
		nums[5] = temp;
		fprintf(stdout, "%d\n", 54*5);
		scanf("%ld",&temp);
		temp >> 54;
		nums[4] = temp;
		fprintf(stdout, "%d\n", 54*4);
		scanf("%ld",&temp);
		temp >> 54;
		nums[3] = temp;
		fprintf(stdout, "%d\n", 54*3);
		scanf("%ld",&temp);
		temp >> 54;
		nums[2] = temp;
		fprintf(stdout, "%d\n", 54*2);
		scanf("%ld",&temp);
		temp >> 54;
		nums[1] = temp;
		fprintf(stdout, "%d\n", 54*1);
		scanf("%ld",&temp);
		temp >> 54;
		nums[0] = temp;
		fprintf(stdout, "%d %d %d %d %d %d\n",nums[0],nums[1],nums[2],nums[3],nums[4],nums[5]);
		int test;
		scanf("%d",&test);
		if(test == -1){
			return -1;
		}
	}
}