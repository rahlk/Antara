#include <stdio.h>


int main(void)
{
  
    
  int n,i,j,k,t,num;
  int maze[1000][1000];
  char way[2500];  
  
  for(i=0;i<1000;i++)
  {
   	for(j=0;j<1000;j++)
        {
      		maze[i][j] = 0;
        }
  }
    
scanf("%d",&t);
    
for(num=0;num<t;num++)    
    
{    
  scanf("%d",&n);
    
  
    
     scanf("%s",way);
  
    
      for(i=0;i<n;i++)
      {
   	 for(j=0;j<n;j++)
         {
      		maze[i][j] = 1;
         }
      }
    
    i=0;
    j=0;
    k=0;
    printf("Case #%d: ",num+1);
    while(way[k] != '\0')
    {
    	if(way[k] != 'E' && maze[i+1][j] != 0)
    	{
    	 	printf("E");
            	i++;
            	k++;
    	}
    
        else if(way[k] != 'S' && maze[i][j+1] != 0)
    	{
    	 	printf("S");
            	j++;
            	k++;
    	}
    
    	
    
    
    }
    printf("\n");
    
}    
       
    
}