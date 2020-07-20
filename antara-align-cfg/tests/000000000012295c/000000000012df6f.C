#include<stdio.h>
#include<string.h>


int main() {
	int T;
	scanf("%d", &T);

	for (int a = 1; a <= T; a++)
	{
		int p1 = 0, p2 = 0;
		int temp1 = 0, temp2 = 0;
		int pN = 0, qN = 0;
		char D = NULL;

		getchar();
		scanf("%d %d", &pN, &qN);
		int point1[100000] = { 0 };
		int point2[100000] = { 0 };
		for (int a = 0; a < pN; a++)
		{
			getchar();
			scanf("%d %d %c", &p1, &p2, &D);
			if (D == 'N' )
			for(int j=p2+1;j<100000;j++){
					point2[j]++;}
			if (D == 'E')
			for(int j=p1+1;j<100000;j++){
					point1[j]++;}
			if (D == 'W')
			for(int j=p1-1;j>=0;j--){
					point1[j]++;}
			if (D == 'S')
			for(int j=p2-1;j>=0;j--){
					point2[j]++;}
		}
		for (int i = 0; i < 100000; i++)
		{
			if (point1[i] > temp1)
				temp1 = i;
			if (point2[i] > temp2)
				temp2 = i;
		}

		printf("Case #%d: %d %d\n", a, temp1, temp2);
	}
	return 0;
}