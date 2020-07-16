/*基础题。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <utility>
#include <vector>
using namespace std;

#define NUM 100005
#define LEN 55
int cx[NUM], cy[NUM];
int main()
{
	int kase, tk, i, j;
	int rx, ry, p, q, x, y;
	char dir;
	scanf("%d", &kase);
	for(tk = 1; tk<=kase; tk++) {
		memset(cx, 0, sizeof(cx));
		memset(cy, 0, sizeof(cy));
		scanf("%d %d", &p, &q);
		for(i=0; i<p; i++) {
			scanf(" %d %d %c", &x, &y, &dir);
			switch (dir) {
				case 'N':
					for(j=y+1; j<=q; j++) cy[j]++;
					break;
				case 'S':
					for(j=y-1; j>=0; j--) cy[j]++;
					break;
				case 'E':
					for(j=x+1; j<=q; j++) cx[j]++;
					break;			
				case 'W':
					for(j=x-1; j>=0; j--) cx[j]++;
					break;
			}
		}
		for(i=1, rx=0; i<=q; i++) {
			if (cx[i] > cx[rx]) rx = i;
		}
		for(i=1, ry=0; i<=q; i++) {
			if (cy[i] > cy[ry]) ry = i;
		}
		printf("Case #%d: %d %d\n", tk, rx, ry);
	}
	return 0;
}
