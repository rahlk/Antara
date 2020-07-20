#include<stdio.h>
#include<string.h>
int main()
{
int t,num,x=0,y=1;
scanf("%d",&t);
while(t>0)
{
scanf("%d",&num);
char input[num],a[num];
char *g,*k;
int b,c,d,e,z=0;
a[num]=0;
for(x=0;x<num;x++)
{
scanf("%s",&input[x]);
}

for(x=0;x<num;x++)
{
b=strlen(input);
c=strlen(input+1);
g=input;
k=input+1;
printf("%s\n",g);
printf("%s\n",k);
if(b>c)
{
for(d=b-1,e=c-1;d>0 && e>0;d--,e--)
{
if(g[d]==k[e]) z++;
}
}

}



printf("Case #%d: %d\n",y,z);
y++;
t--;
}
return 0;
}