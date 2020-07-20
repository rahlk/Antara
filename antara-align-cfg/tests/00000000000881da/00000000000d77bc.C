#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
int t,n[1000],i,j;
char a[100][100],b[100][100];
scanf("%d",&t);

for(i=0;i<t;++i)
{
scanf("%d",&n[i]);
scanf("%s",a[i]);
}
int ac[2],bc[0];
ac[0]=bc[0]=0;
ac[1]=bc[0]=0;
for(i=0;i<t;++i)
{
 for(j=0;j<strlen(a[i]);++j)
 {  if(j==0)
    {


        if(a[i][0]=='E')
        {
            b[i][0]='S';
            bc[0]=bc[0]+1;
        ac[1]=ac[1]+1;
        }
        else
        {   b[i][0]='E';
            bc[1]=bc[1]+1;
            ac[0]=ac[0]+1;
        }
    }
    else
    {   if((ac[0]==bc[0])&&(ac[1]==bc[1]))
        {if(a[i][j]=='E')
            {
            b[i][j]='S';
            bc[0]=bc[0]+1;
            ac[1]=ac[1]+1;
            }
        else
            {   b[i][j]='E';
                bc[1]=bc[1]+1;
                ac[0]=ac[0]+1;
            }
        }
        else
        {
            if(ac[1]>=bc[1]&&ac[0]<=bc[0])
            {   b[i][j]='E';
                bc[1]=bc[1]+1;
                ac[0]=ac[0]+1;
            }
            else
            {   b[i][j]='S';
                bc[0]=bc[0]+1;
                ac[1]=ac[1]+1;

            }

        }
    }
}


}


for(i=0;i<t;++i)
{

printf("Case #%d: %s\n",i+1,b[i]);
}

exit(0);
}
