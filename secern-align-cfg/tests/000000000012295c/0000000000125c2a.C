#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int T;
    int P, Q;
    int X[505], Y[505];
    char Dir[505];
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d", &P, &Q);
        int x_ans = 0;
        int x_count = 0;
        int y_ans = 0;
        for(int j = 0; j < P; j++)
        {
            scanf("%d %d %c ", &X[j], &Y[j], &Dir[j]);
        }
        for(int x = 0; x < Q; x++)
        {
            int count = 0;
            for(int p = 0; p < P; p++)
            {
                if(Dir[p] == 'E')
                {
                    if(x > X[p])
                    {
                        count ++;
                    }
                }
                if(Dir[p] == 'W')
                {
                    if(x < X[p])
                    {
                        count ++;
                    }
                }
                if(x_count < count)
                {
                    x_ans = x;
                }
            }
        }
        printf("%d %d", x_ans, x_count);
        for(int y = 0; y < Q; y++)
        {
            int count = 0;
            for(int p = 0; p < P; p++)
            {
                if(Dir[p] == 'N')
                {
                    if(y > y[p])
                    {
                        count ++;
                    }
                }
                if(Dir[p] == 'S')
                {
                    if(y < Y[p])
                    {
                        count ++;
                    }
                }
                if(y_count < count)
                {
                    y_ans = y;
                }
            }
        }
        
    }
    return 0;
}