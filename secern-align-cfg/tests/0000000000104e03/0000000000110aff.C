#include<stdio.h>
#include<stdlib.h>
int round(double number)
{
    return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
}
int r,c,ans,a[100],b[100],m[100][100],count;
int check(int r1,int c1,int count)
{
    int i1,j1,f=0;
    if(count<(r*c)){

    m[r1][c1]=count;

    count++;
    for(i1=1;i1<=r;i1++)
    {
        for(j1=1;j1<=c;j1++)
        {
            if(i1==r1 || j1==c1 || (abs(i1+j1))==(abs(r1+c1)) || (abs(i1-j1))==(abs(r1-c1)) || m[i1][j1]>0)
            {
                f=0;

            }
            else
            {
                f=1;
                a[count]=i1;
                b[count]=j1;
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
        check(a[count],b[count],count);
    }
    else
        return 0;
}
int main()
{
    int i,j,testcase,tc;
    scanf("%d",&testcase);
for(tc=1;tc<=testcase;tc++){
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            m[i][j]=0;
    }
    float mid=(float)c/2;
    int limit=round(mid);
    a[1]=r;
    b[1]=limit;
    ans=check(r,limit,1);
    if(ans==1)
        printf("Case #%d: IMPOSSIBLE\n",tc);
    else
    {
    printf("Case #%d: POSSIBLE\n",tc);

    int v=r*c;
    for(i=1;i<=v;i++)
        printf("%d %d\n",a[i],b[i]);
    }
}
}
