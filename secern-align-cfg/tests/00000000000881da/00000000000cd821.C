#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d" ,&T);
    int t = 1;
    for(t = 1; t <= T; t++)
    {
        long long N;
        scanf("%lld", &N);
        char x[60000], y[60000];
        scanf("%s", x);
        int l = strlen(x);
        y[l] = '\0';
        int xe = N-1, xs = N-1, ye = N-1, ys = N-1;
        int i;
        for(i = l-1; i >= 0; i--)
        {
            if(xe != ye || xs != ys)
            {
				if(ye > ys) 
				{
					y[i] = 'E';	
				}
	            else y[i] = 'S';
            }
            else 
            {
	            if(x[i] == 'S') y[i] = 'E';
		        else  y[i] = 'S';
			}
        }
        printf("Case #%d: %s\n", t, y);
    }
    return 0;
}