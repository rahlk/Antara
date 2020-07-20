#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int id=1;id<=T;id++)
    {
        int P,Q,i;
        scanf("%d %d",&P,&Q);
        int a[500][3],j,c=0,count[500];
        char b;
        for(i=0;i<P;i++)
        {
        scanf("%d %d %c",&a[i][0],&a[i][1],&b);
        if(b=='W')
           a[i][0]--;
        if(b=='E')
           a[i][0]++;
        if(b=='N')
           a[i][1]++;
        if(b=='S')
           a[i][1]--;
        a[i][2]=0;
        if(P==1)
        {
        if(b=='N'||b=='S')
        printf("Case #%d: 0 %d\n",id,a[i][1]);
        else
        printf("Case #%d: %d 0\n",id,a[i][0]);
        c=1;
        }
        }
        if(c!=1)
        {
        for(i=0;i<P;i++)
        {
            count[i]=1;
            if(a[i][2]==0)
            {
                a[i][2]=1;
                for(j=i+1;j<P;j++)
                {
                    if((a[i][0]==a[j][0])&&(a[i][1]==a[j][1]))
                      { 
                       count[i]++;
                       a[j][2]=1;
                      }
                }
            }
            if(count[i]>=(P/2))
            {
            printf("Case #%d: %d %d\n",id,a[i][0],a[i][1]);
            c=1;
            break;
            }
        }
    }
}
    return 0; 
}