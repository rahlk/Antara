#include <stdio.h>
#define X 0
#define Y 1

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
        int path[2*1000][2];
        //0: 0 0 E
        //1: 0 1 S
        //2: 1 0 S
        //3: 2 0

        path[0][X]=0;
        path[0][Y]=0;
        for (int j = 0; j < tam; ++j)
        {
            if (str[j]=='E')
            {
                path[j+1][X]=path[j][X];
                path[j+1][Y]=path[j][Y]+1;
            }
            else
            {
                path[j+1][X]=path[j][X]+1;
                path[j+1][Y]=path[j][Y];
            }
        }
        int out[2000][2];
        out[0][X]=0;
        out[0][Y]=0;
        int s = 0;
        int e = 0;
        int sMenor = 0;
        while (s == 0 || e!=s)
        {
            for (int j = 0; j < tam; ++j)
            {

                if ((out[j][X] == path[j][X]) && (out[j][Y] == path[j][Y]))
                {
                    int a = path[j+1][Y]-path[j][Y];
                    int b = path[j+1][X]-path[j][X];
                    out[j+1][X] = out[j][X] + a;
                    out[j+1][Y] = out[j][Y] + b;
                    s+=a;
                    e+=b;
                }
                else
                {
                    if (sMenor)
                        if (s <= e)
                        {
                            out[j+1][X] = out[j][X] + 1;
                            out[j+1][Y] = out[j][Y];
                            s++;
                        }
                        else
                        {
                            out[j+1][X] = out[j][X];
                            out[j+1][Y] = out[j][Y] + 1;
                            e++;
                        }
                    else
                        if (s <= e)
                        {
                            out[j+1][X] = out[j][X] + 1;
                            out[j+1][Y] = out[j][Y];
                            s++;
                        }
                        else
                        {
                            out[j+1][X] = out[j][X];
                            out[j+1][Y] = out[j][Y] + 1;
                            e++;
                        }

                }
            }
            //printf("%d %d\n",e,s );
            sMenor++;
        }
        printf("Case #%d: ",i+1 );


        char output[2000];
        for (int i = 0; i < tam; ++i)
            if (out[i+1][X] > out[i][X])
                output[i]='S';
            else
                output[i]='E';
        printf("%s\n",output );

    }
    return 0;
}