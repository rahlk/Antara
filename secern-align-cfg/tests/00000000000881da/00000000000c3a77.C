#include <stdio.h>
#include<stdlib.h>

int main()
{
int i,j,nom,t,d,a,b,ecnt=0,scnt=0;
scanf("%d",&t);
for(j=0;j<t;j++)
{
 scanf("%d",&d);
 nom=2*d-2;
 char moves[nom];
 scanf("%s",moves);

for (i=0;i<nom;i++) 
{
  if(moves[i]=='S')
    moves[i]='E';
  else if(moves[i]=='E')
    moves[i]='S';
}
printf("Case #%d: %s\n",j+1,moves);
}
exit(0);
}
