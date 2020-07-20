

#include <stdio.h>
#include <string.h>
int main()
{
    int y,t,n,i,x=1;
    
    scanf("%d",&t);
    while(t>0)
    {
    scanf("%d",&n);
    char arr[1000],ans[1000],ans1[1000];
    scanf("%s",arr);
  	int len = strlen(arr);
  	for(i=0;i<len;i++)
  	{
  	    if(arr[i]=='S')
  	        ans[i]='E';
  	    else
  	    ans[i]='S';
  	    
  	}
 ans[i]='\0';
    printf("Case #%d: %s",x,ans);
    x++;
    t--;
    }
    return 0;
}