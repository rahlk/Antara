#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
    if(*(long long int*)b - *(long long int*)a < 0)
        return 1;
    if(*(long long int*)b - *(long long int*)a == 0)
        return 0;
    if(*(long long int*)b - *(long long int*)a > 0)
        return -1;
}

//qsort (a, n, sizeof(long long), compare);

int main(){
	long long int t, p, q , x, y, i , j;
	char d;
	scanf("%lld", &t);
	for (int a = 1; a <=t; a++){
		long long int south[500] = {0}, north[500] = {0}, west[500] = {0}, east[500] = {0};
		int s=0,n=0,w=0,e=0;
		scanf("%lld %lld", &p, &q);
		for (i = 0; i < p; i++){
			scanf("%lld %lld %c", &x,&y,&d);
			switch(d){
				case 'W':west[w++] = x;
						break;
				case 'S':south[s++] = y;
						break;
				case 'E':east[e++] = x;
						break;
				case 'N':north[n++] = y;
						break;

			}
		}
		qsort (west, w, sizeof(long long), compare);
		qsort (south, s, sizeof(long long), compare);
		qsort (east, e, sizeof(long long), compare);
		qsort (north, n, sizeof(long long), compare);
		long long int x_max = w, x_pos = 0, y_max = s, y_pos = 0, count;
		j = 0;
		count = s;
		for (i = 0; i < n; i){
			if (j == s){
				count++;
				if (count > y_max){
					y_max = count;
					y_pos = north[i]+1;
				}
				i++;
			}
			else if (north[i] + 1> south[j]){
				j++;
				count--;
			}
			else if (north[i] + 1 < south[j]){
				count++;
				if (count > y_max){
					y_max = count;
					y_pos = north[i]+1;
				}
				i++;
			}
			else if (north[i] + 1 == south[j]){
				i++;
				j++;
			}
		}
		j = 0;
		count = w;
		for (i = 0; i < e; i){
			if (j == w){
				count++;
				if (count > x_max){
					x_max = count;
					x_pos = east[i]+1;
				}
				i++;
			}
			else if (east[i] +1 > west[j]){
				j++;
				count--;
			}
			else if (east[i] + 1< west[j]){
				count++;
				if (count > x_max){
					x_max = count;
					x_pos = east[i]+1;
				}
				i++;
			}
			else if (east[i] + 1 == west[j]){
				i++;
				j++;
			}
		}
		printf("Case #%d: %lld %lld\n", a, x_pos, y_pos);
	}
}