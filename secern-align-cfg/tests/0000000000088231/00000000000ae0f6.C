#include<stdio.h>
#include<string.h>
int main ()
{
	int t;
	scanf("%d",&t); 
	while(t--)
	{
		int arr[110],b[110]={0},a[110],i,cnt=0;
		char str[110];
		scanf("%s",str);
		for(i=0;i<strlen(str);i++)
		{
			a[i]=str[i]-48;
			//cout << a[i] << "a[i] ";
			if(a[i]==4)
			{
				arr[cnt]=i;
				cnt++;
				a[i]=2;
				//cout << str[i] << "hello\n";
			}
		}
		for(i=0;i<cnt;i++)
		{
			b[arr[i]]=2;
		}
		for(i=0;i<strlen(str);i++)
		printf("%d",a[i]);
		printf(" ");
		for (i=arr[0];i<strlen(str);i++)
		{
		    printf("%d",b[i]);
		}
		printf("%n");
	}
	return 0;
}
