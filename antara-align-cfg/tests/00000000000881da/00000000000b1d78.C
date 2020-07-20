#include <stdio.h>
#define X0 0
#define Y0 1
#define X1 2
#define Y1 3

int main(int argc, char const *argv[])
{
    int t;
    scanf ("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        int n;
        char str[2*1000];
        scanf ("%d", &n);
        int tam = (2*n-2);
        scanf ("%s", str);
        int x=0;
        int y=0;
        int path[2*1000][4];
        //path[0][0] x0
        //path[0][1] y0
        //path[0][2] x1
        //path[0][3] y1
        printf("Case #%d: ",i+1 );


        for (int j = 0; j < tam; ++j)
        {
            //x0,y0 -> x1,y1

            if (str[j] == 'E')
            {
                path[j][0] = x;
                path[j][1] = y;
                y = y+1;
                path[j][2] = x;
                path[j][3] = y;

            }
            else
            {
                path[j][0] = x;
                path[j][1] = y;
                x = x+1;
                path[j][2] = x;
                path[j][3] = y;

            }

        }

        int out[2*1000][4];
        out[0][0]=0;
        out[0][1]=0;
        x = 0;
        y = 0;

        //se par, vai pra leste. (+1 y)
        //se impar, vai pra sul (+1 x)

        int s = 0;
        int e = 0;
        for (int j = 0; j < tam; ++j)
        {

            //0: 0 0 0 1
            //1: 0 0 1 1
            //2: 0 0 1 2
            //x: 0 0 2 2
            //y: 0 0 1 3 ()
            //mudou o caminho, precisa consertar
            if (path[j][X0]==out[j][X0] && path[j][Y0]==out[j][Y0])
            {
                //pega outro caminho
                if (path[j][Y1]==path[j][Y0]+1)
                {
                    out[j][X1]=out[j][X0]+1;
                    out[j][Y1]=out[j][Y0];
                    s++;
                }
                else 
                {
                    out[j][X1]=out[j][X0];
                    out[j][Y1]=out[j][Y0]+1;
                    e++;
                }
            }
            else
            {
                if (e<=s)
                {
                    out[j][X1]=out[j][X0];
                    out[j][Y1]=out[j][Y0]+1;
                    e++;
                }
                else                    
                {
                    out[j][X1]=out[j][X0]+1;
                    out[j][Y1]=out[j][Y0];
                    s++;
                }
            }
            out[j+1][X0] = out[j][X1];
            out[j+1][Y0] = out[j][Y1];
            //printf("%d %d  %d %d\n%d %d  %d %d\n\n",out[j][0],out[j][1],path[j][0],path[j][1],out[j][2],out[j][3],path[j][2],path[j][3]); 

        }
        char output[2000];
        for (int i = 0; i < tam; ++i)
            if (out[i][X1] > out[i][X0])
                output[i]='S';
            else
                output[i]='E';
        printf("%s\n",output );

    }
    return 0;
}