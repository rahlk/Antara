#include<stdio.h>

int T,N,i,j,l,A[100],B[100],k=0,p,q,s;

int main()
{
	printf("enter the total cases");
	scanf("%d",&T);
	
for(l=0;l<T;l++)
{
		
    printf("enter the Number");
    scanf("%d",&N);
    
    
    
    for(i=0;i<=N;i++)
    {
    
        for(j=0;j<=N;j++)
        {
        	p=i;
        	q=j;
        	
        	while(p>0)
        	{
        		s=p%10;
        	    p=p/10;
        		
        		if(s==4)
        		{
        			goto exit;
				}
			}
			while(q>0)
			{
				s=q%10;
				q=q/10;
				
				if(s==4)
				{
					goto exit;
				}
			}
            if(i+j==N && i!=4 && j!=4)
            {
                A[k]=i;
                B[k]=j;
                k++;
				i=N+1;	        
                exit:
                j=N+1;
                
            }
        }
    }
    
    
    
       
        
    
}

for(i=0;i<T;i++)
{
	printf("case #%d %d %d",i+1,A[i],B[i]);
}
    return 0;
}