#include<stdio.h>
#include<malloc.h>
int main()
{
int *p[2],nt,np,nq,i,j,k,count,max[2][100],large=0,flag,t,min,x,y,e;
char *d;
scanf("%d",&nt);
for(k=0;k<nt;k++)
{
scanf("%d",&np);
scanf("%d",&nq);
p[0]=(int*)malloc(sizeof(int)*np);
p[1]=(int*)malloc(sizeof(int)*np);
d=(char*)malloc(sizeof(char)*np);
for(j=0;j<np;j++)
{
    scanf("%d",&p[0][j]);
    scanf("%d",&p[1][j]);
    scanf("%c",&d[j]);
}
t=0;
for(i=0;i<=nq;i++)
{
    for(j=0;j<=nq;j++)
    {
        count=0;
        for(e=0;e<np;e++)
        {
            flag=0;
            if(j==p[1][e] && d[e]=='E' && i>=p[0][e])
            {
                flag=1;
            count++;
            }
            if(j==p[1][e] && d[e]=='W' && i<=p[0][e]) {
                count++;
                flag=1;
            }
            
            if(i==p[0][e] && d[e]=='N' && j>=p[1][e]){
                flag=1;
             count++;
            }
            if(i==p[0][e] && d[e]=='S' && j<=p[1][e]) 
            {
                flag=1;
            count++;
            }
            if(flag==1 && i==j) --count;
            if(count>large) large=count;
            if(large==count && large!=0)
            {
                max[0][t]=i;
                max[1][t]=j;
                ++t;
            }
        }
    }
}//i ends
min=9999999;
for(i=0;i<t;++i)
{
    j=max[0][i]+max[0][i];
   if(j<min)
   {
        min=j;
        x=max[0][i];
        y=max[1][i];
   }
}
printf("case #%d: %d %d \n",k+1,x,y);
}//k ends
}