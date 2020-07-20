#include<stdio.h>
#include<stdlib.h>
int round(double number)
{
    return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
}
int row,col,answer,arr[100],bii[100],m[100][100],count;
int check(int r1,int c1,int count)
{
    int i1,j1,f=0;
    if(count<(row*col)){

    m[r1][c1]=count;

    count++;
    for(i1=1;i1<=row;i1++)
    {
        for(j1=1;j1<=col;j1++)
        {
            if(i1==r1 || j1==c1 || (abs(i1+j1))==(abs(r1+c1)) || (abs(i1-j1))==(abs(r1-c1)) || m[i1][j1]>0)
            {
                f=0;

            }
            else
            {
                f=1;
                arr[count]=i1;
                bii[count]=j1;
                break;
            }
        }
        if(f==1){break;}
    }
    if(f==0)
    {

        return 1;
        }
    else
        check(arr[count],bii[count],count);
    }
    else
        return 0;
}
int main()
{
    int i,j,testcase,tc;
    scanf("%d",&testcase);
for(tc=1;tc<=testcase;tc++){
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
            m[i][j]=0;
    }
    float mid=(float)col/2;
    int limit=round(mid);
    arr[1]=row;
    bii[1]=limit;
    answer=check(row,limit,1);
    if(answer==1)
        printf("Case #%d: IMPOSSIBLE\n",tc);
    else
    {
    printf("Case #%d: POSSIBLE\n",tc);

    int v=row*col;
    for(i=1;i<=v;i++)
        printf("%d %d\n",arr[i],bii[i]);
    }
}
}
