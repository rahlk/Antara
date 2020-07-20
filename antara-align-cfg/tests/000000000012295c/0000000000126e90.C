#include<stdio.h>
#include<string.h>


int main() {
	int T;
	int pN,qN;

	scanf("%d", &T);

	for (int a = 1; a <= T; a++)
	{
		int c1 = 0, c2 = 0;
		int p1 = 0, p2 = 0;
		char D=NULL;
		getchar();
		scanf("%d %d",&pN,&qN);
		for (int a = 0; a < pN; a++)
		{
		    getchar();
			scanf("%d %d %c", &p1, &p2, &D);
			if (D == 'N' && p2 >= c2)
				c2 = p2+1;
			if (D == 'E' && p1 >= c1)
				c1 = p1+1;
			if (D == 'W' && p1 <= c1)
			    c1 = p1-1;
			if (D == 'S' && p2 <= c2)
			    c2=p2-1;
		}
		printf("Case #%d: %d %d\n", a,c1, c2);
	}
	return 0;
}