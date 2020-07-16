#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i,j,p;
    scanf("%d",&t);
    while(t<0)
    {
        scanf("%d",&j);
        p=2j-2;
        char str[p],str2[p],t1;
        scanf("%[^\n]",&str);
        for(i=0;i<p;i++)
        {
            if(i==0){
                if(str[i]=='E')
                {
                    str2[i]='S';
                }
                else{
                    str2[i]='E';
                }
            }
            else if(i==1||i==2)
            {
                str2[i]=str[i-1];
            }
            else if(i%3!=0)
            {
                t=str[i];
                if(t1=='E')
                {
                    str2[i]=t1;
                }
                else{
                    str2[i]='S';
                }
            }
            else{
                str2[i]=str[i-1];
            }
        }
        printf("%s", str2);
    }
    return 0;
}