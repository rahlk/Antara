#include<stdio.h>

#include<stdlib.h>

#include<string.h>
int stlen(char a[])
{
    int i,len=0;
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()

{

    char a[1000][1000],b[1000][1000];

    int t,n=0,i,x,j;

    scanf("%d",&t);

    while(t>0)

    {
        scanf("%d",&x);
        scanf("%s",a[n++]);

        t--;

    }
  //  printf("%d",n);
    for(i=0;i<n;i++)

    {
        

        for(j=0;j<stlen(a[i]);j++)

        {

            if(a[i][j]=='E')

                b[i][j]='S';

            else

                b[i][j]='E';

        }


        //printf("%s",b[i]);

    }
    for(i=0;i<n;i++)
	printf("%s\n",b[i]);

    return 0;

}