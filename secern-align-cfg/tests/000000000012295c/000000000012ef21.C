#include<stdio.h>

struct Result{
    int x;
    int y;
};

int main()
{
    int T;
    scanf("%d",&T);
    if(T<1 || T>100)
    {
        return 0;
    }
    else
    {
        int t=0;
        struct Result result[T];
        for(t=0;t<T;t++)
        {
            result[t].x = 0;
            result[t].y = 0;
            int P,Q;
            scanf("%d",&P);
            if(P<1 || P>500)
                return 0;
            scanf("%d",&Q);
            int positions[Q][Q];
            int qr=0,qc=0;
            for(qr=0;qr<Q+1;qr++)
            {
                for(qc=0;qc<Q+1;qc++)
                {
                    positions[qr][qc]=0;
                }

            }
            int p=0;
            for(p=0;p<P;p++)
            {
                int px=0, py=0;
                char pd='\0';
                scanf("%d",&px);
                scanf("%d",&py);
                scanf("%c",&pd);
                int xtemp=0,ytemp=0;
                switch(pd)
                {
                    case 'N':
                        if(py==Q)
                            return 0;
                        for(xtemp=0;xtemp<Q+1;xtemp++)
                        {
                            for(ytemp=py+1;ytemp<Q+1;ytemp++)
                            {
                                positions[xtemp][ytemp]++;
                            }
                        }
                        break;

                    case 'S':
                        if(py==0)
                            return 0;
                        for(xtemp=0;xtemp<Q+1;xtemp++)
                        {
                            for(ytemp=py-1;ytemp<0;ytemp--)
                            {
                                positions[xtemp][ytemp]++;
                            }
                        }
                        break;

                    case 'E':
                        if(px==Q)
                            return 0;
                        for(ytemp=0;ytemp<Q+1;ytemp++)
                        {
                            for(xtemp=px+1;xtemp<Q+1;xtemp++)
                            {
                                positions[xtemp][ytemp]++;
                            }
                        }
                        break;

                    case 'W':
                        if(px==0)
                            return 0;
                        for(ytemp=0;ytemp<Q+1;ytemp++)
                        {
                            for(xtemp=px-1;xtemp<0;xtemp--)
                            {
                                positions[xtemp][ytemp]++;
                            }
                        }
                        break;
                }
            }
            int rx=0, ry=0;
            for(rx=0;rx<Q;rx++)
            {

                for(ry=0;ry<Q;ry++)
                {
                    if(positions[rx][ry] > positions[rx+1][ry+1])
                    {
                        result[t].x = rx;
                        result[t].y = ry;
                    }
                    else if(positions[rx][ry] < positions[rx+1][ry+1])
                    {
                        result[t].x = rx+1;
                        result[t].y = ry+1;
                    }
                    else;
                }
            }
        }
        for(t=1;t<T+1;t++)
        {
            printf("Case #%d: %d %d\n",t,result[t].x,result[t].y);
        }

    }
}
