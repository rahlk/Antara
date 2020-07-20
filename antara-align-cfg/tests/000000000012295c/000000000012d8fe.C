#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

// Output


int main(void)
{
    int num;
    scanf("%d",&num);
    int people, max_length;
    int x,y;
    char toward;
    int max_x,min_x,max_y,min_y;
    for (int kkkk = 0; kkkk< num ; kkkk++) {
        scanf("%d %d",&people,&max_length);
        min_y = min_x = 0;
        max_x = max_y = max_length;
        for (int count = 0 ;count < people; count ++ ) {
            scanf ("%d %d %c",&x,&y,&toward );
            switch(toward) {
                case 'N':
                    if(min_y < y)
                        min_y = y+1;
                    break;
                case 'S':
                    if(max_y > y)
                        max_y = y-1;
                    break;
                case 'W':
                    if (max_x > x)
                        max_x = x-1;
                    break;
                case 'E':
                    if (min_x < x)
                        min_x = x+1;
                    break;
            }
        }
        printf("Case #%d: %d %d\n",kkkk+1,  min_x, min_y);
    }
    return 0;
}

