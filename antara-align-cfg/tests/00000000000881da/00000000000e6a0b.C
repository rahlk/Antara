#include<stdio.h>
#include<string.h>
//char str[]="";
int main()
{
    int m=1;
    scanf("%d",&m);
    int n=0;
    for(n=1;n<=m;n++){
    //scanf("%s",str);
    int N=0;
    //scanf("%d",&N);
    //printf("%d",N);
    scanf("%d",&N);
    char str[]="";
    scanf("%s",str);
    if(2*N - 2!=strlen(str))
        return 0;
    int a[N][N];
    int i=0,j=0;
    for(i=0;i<N;++i)
    {
        for(j=0;j<N;++j)
            a[i][j]=1;
    }
    int r=0,c=0;
    int ec=0,sc=0;
    for(i=0;i<strlen(str);++i)
    {
        if(str[i]=='S')
        {
            r++;
            sc++;
            a[r][c]=0;
        }
        else if(str[i]=='E'){
            c++;
            ec++;
            a[r][c]=0;
        }
        else
        {
            return 0;
        }
    }
   /*  for(i=0;i<N;++i)
    {
        printf("\n");
        for(j=0;j<N;++j)
            printf("%d\t",a[i][j]);
    }*/
    printf("Case #%d: ",n);
    c=r=0;
    if(str[0]=='S')
    {
        printf("E");
        ec--;
        c++;
    }
    else
    {
        printf("S");
        sc--;
        r++;
    }
   // printf("%d %d %d %d",c,ec,r,sc);
while(ec>0 && sc>0)
{
    if(ec>sc)
    {
        if(c+1<N && a[r][c+1]==1)
        {
            //printf("P1");
            printf("E");
            c++;
            ec--;
        }
        else if((c+2)<N && a[r][c+2]==1)
        {
            //printf("P2");
            printf("E");
            printf("E");
            c++;
            c++;
            ec--;
            ec--;

        }
        else if((r+1)<N && (c+1)<N && a[r+1][c+1]==1)
        {
            //printf("P3");
            /*printf("S");
            r++;
            sc--;
            printf("E");
            c++;
            ec--;*/
            if(a[r+1][c]==1)
            {
                printf("S");
                r++;
                sc--;
                printf("E");
                c++;
                ec--;
            }
            else{
                printf("E");
                r++;
                sc--;
                printf("S");
                c++;
                ec--;
            }
        }
        else  if(r+1<N && a[r+1][c]==1)
        {
            //printf("P4");
            printf("S");
            r++;
            sc--;
        }
        else if(r+2<N && a[r+2][c]==1)
        {
            //printf("P6");
            printf("S");
            printf("S");
            r++;
            r++;
            sc--;
            sc--;
        }
        else
        {
            //printf("P8");
            printf("E");
            c++;
            ec--;
        }
    }
    else
    {
        if(r+1<N && a[r+1][c]==1)
        {
            //printf("P5");
            printf("S");
            r++;
            sc--;
        }
        else if(r+2<N && a[r+2][c]==1)
        {
            //printf("P6");
            printf("S");
            printf("S");
            r++;
            r++;
            sc--;
            sc--;
        }
        else if((r+1)<N && (c+1)<N && a[r+1][c+1]==1)
        {
            //printf("P7");
            printf("S");
            r++;
            sc--;
            printf("E");
            c++;
            ec--;
        }
        else if(c+1<N && a[r][c+1]==1)
        {
            //printf("P8");
            printf("E");
            c++;
            ec--;
        }
        else if((c+2)<N && a[r][c+2]==1)
        {
            //printf("P2");
            printf("E");
            printf("E");
            c++;
            c++;
            ec--;
            ec--;

        }
        else
        {
            //printf("P4");
            printf("S");
            r++;
            sc--;
        }

    }
}
if(ec>0)
{
    for(i=0;i<ec;++i)
        printf("E");
}
if(sc>0)
{
    for(i=0;i<sc;++i)
        printf("S");
}
printf("\n");
    }
    return 0;
}
