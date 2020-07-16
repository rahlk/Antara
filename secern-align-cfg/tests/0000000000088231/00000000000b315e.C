#include<stdio.h>
#include<string.h>
int main()
{
    char str[101][101],str1[100],str2[100];
    int a,i,j,l2;
    scanf("%d",&a);
    printf("Enter %d numbers: ",a);
    for(i=0;i<=a;i++)
    {
    	gets(str[i]);
    }
    for(i=0;i<=a;i++)
    {
    	j=0;
    	while(str[i][j]!='\0')
    	{
    	if(str[i][j]=='4')
    	{
    		str1[j]='3';
    		str2[j]='1';
			j++;	
		}
		else
		{
			str1[j]=str[i][j];
			str2[j]='0';
			j++;
		}
		}
		str1[j]='\0';str2[j]='\0';
		l2=strlen(str2);
		strrev(str2);
		for(j=l2-1;j>=0;j--)
		{
			if(str2[j]=='0')
			str2[j]='\0';
			else
			j=-1;
		}
		strrev(str2);
		printf("\n%s %s",str1,str2);
		str1[0]='\0';str2[j]='\0';
	}
    return 0;
}