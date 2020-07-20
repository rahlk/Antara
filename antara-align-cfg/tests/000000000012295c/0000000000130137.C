#include <stdio.h>
#include<string.h>
int main(void) {
    int t = 0;
    scanf("%d",&t);
    for(int s = 1 ;s <= t; s++)
    {
        int p,peeps;
        int x=0,y=0;
        char d;
        scanf("%d%d",&peeps,&p);
        int maxIntersection = 0;
    	int street[100][100];
        for(x = 0; x <= p; x++)
        {
        	for(y = 0; y <= p; y++)
        	{
        		street[x][y] = 0;
        	}
        }




	    int minX,minY;
	    for(int i = 0; i < peeps; i++)
	    {
	        scanf("%d %d %c",&x,&y,&d);
	        if(d == 'N')
	        {
	            street[x][y+1] = street[x][y+1] + 1;
	            if(street[x][y+1] >= maxIntersection)
	            {
	                maxIntersection = street[x][y+1];
	                minY = y+1;
	            }
	        }
	        else if(d == 'E')
	        {
	            street[x+1][y] = street[x+1][y] + 1;
	            if(street[x+1][y] >= maxIntersection)
	            {
	                maxIntersection = street[x+1][y];
	                minX = x+1;
	            }
	        }
	        else if(d == 'S')
	        {
	            street[x][y-1] = street[x][y-1] + 1;
	            if(street[x][y-1] >= maxIntersection)
	            {
	                maxIntersection = street[x][y-1];
	                minY = y-1;
	            }
	        }
	        else if(d == 'W')
	        {
	            street[x-1][y] = street[x-1][y] + 1;
	            if(street[x-1][y] >= maxIntersection)
	            {
	                maxIntersection = street[x-1][y];
	                minX = x-1;

	            }
	        }
	    }
	     printf("Case #%d: %d %d\n",s,minX,minY);
    }

	return 0;
}

