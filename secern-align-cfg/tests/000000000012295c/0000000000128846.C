// test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int cases, index_cases;
int i,j,P,Q,max, maxx, maxy;
int intersections[10000][10000];
int p, x, y;
char d[3];
int sx, sy, ex, ey;

int main()
{

//		freopen("A-small-attempt1.in", "rt", stdin);
//		freopen("B-small-attempt1.out", "wt", stdout);

	cases = 0;
	//read the number of test cases 
	scanf("%d", &cases);
	//	printf("Cases = %d\n",cases);
	for (index_cases = 0; index_cases < cases; index_cases++)
	{
		scanf("%d", &P);
		scanf("%d", &Q);
		memset(&intersections, 0, sizeof(intersections));
		maxx = 0;
		maxy = 0;
		max = 0;
		for (p = 0; p < P; p++)
		{
			scanf("%d", &x);
			scanf("%d", &y);
			scanf("%s", &d);
			if (d[0] == 'N')
			{
				sx = 0;
				sy = y + 1;
				ex = Q;
				ey = Q;
			}
			else
			{
				if (d[0]=='S') 
				{
					sx = 0;
					sy = 0;
					ex = Q;
					ey = y;
				}
				else 
				{
					if (d[0]=='E') 
					{
						sx = x+1;
						sy = 0;
						ex = Q;
						ey = Q;
					}
					else
					{
						sx = 0;
						sy = 0;
						ex = x;
						ey = Q;
					}
				}
			}
			for (i = sx; i < ex; i++)
			{
				for (j = sy; j < ey; j++)
				{
					intersections[i][j]++;
					if (intersections[i][j] > max)
					{
						max = intersections[i][j];
						maxx = i;
						maxy = j;
					}
					else
					{
						if ((intersections[i][j] == max) && (i < maxx))
						{
							max = intersections[i][j];
							maxx = i;
							maxy = j;
						}
						else
						{
							if ((intersections[i][j] == max) && (i == maxx) && (j < maxy))
							{
								max = intersections[i][j];
								maxx = i;
								maxy = j;
							}
						}
					}
				}
			}			
		}
		printf("Case #%d: %d %d\n", index_cases + 1, maxx, maxy );

	}//end case
} //end 

