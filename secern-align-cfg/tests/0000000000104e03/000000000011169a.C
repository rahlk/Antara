#include<stdio.h>
int b,a;
void verify(int r, int c)
{ int i,j,count=0,x,y;
    printf("%d %d",r,c);
    do{
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {x=r+i;y=r+j;
            if(x==r+1&&y==r+2)
            continue;
            else
             printf("\n%d %d",x,y);
             
        count++;
            } 
        }
    }while(count<=b*a-1);
    
}
int main()
{
    int t,d,i;
    scanf("%d",&t);
    d=t;
    for(i=0;i<t;i++){

    scanf("%d %d",&a,&b);
    
    if(a==b)
    {
        printf("Case #%d: IMPOSSIBLE\n",i+1);
    }
    else 
    {printf("Case #%d: POSSIBLE\n",i+1);
     verify(a,b-a);
    }
}
}