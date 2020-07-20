#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  
    int j,i,t,o,x,m;
	char arr[300][500];
    scanf("%d",&t);
    for(x=0;x<t;x++)
    {
		scanf("%d",&o);
		for(i=0;i<o;i++)
		{
			scanf("%s",&arr[i]);
		}
		
		int p,flag=0;
		for(i=0;i<o-1;i++)
		{
			if(arr[i][0]!=arr[i+1][0])
			{printf("Case #%d: IMPOSSIBLE\n",x+1);
			flag=1;
			break;}
		}
		if(flag==0)
		{
	    
                if(arr[0][0]=='R')
			    {
                    m='P';
            	}
                 else  if((arr[0][0])=='P')
				 {
                    m='S';
                 }
                else if((arr[0][0])=='S')
				{
                   m='R';
                }
    
        printf("Case #%d: %c\n",x+1,m);
		}
    }
        
}