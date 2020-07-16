#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int T,i=0,j=0,s=0,t=0,count1=0,count2=0,N;
    char *p,*q;
    if(scanf("%d",&T)){};
    for(i=0;i<T;i++) 
    {
        if(scanf("%d",&N)) {};
        p   =   (char *)malloc((2*N-1)*sizeof(char));
        if(scanf("%s",p)){};
        q   =   (char *)malloc((2*N-1)*sizeof(char));
		s       =   0;
		t       =   0;
		count1  =   0;
		count2  =   0;
		while(s<((2*N)-2) && t<((2*N)-2))
		{
		    if(count1 == N-1)
			{
				while(t<((2*N)-2))
				{
					if(t==(2*N-3)) q[t]      =   'E';
					else q[t]      =   'S';
					t	=	t	+	1;
				}
				break;
			}
		    else if(count2 == N-1)
			{
				while(t<((2*N)-2))
				{
					if(t==(2*N-3)) q[t]      =   'S';
					else q[t]      =   'E';
					t	=	t	+	1;
				}
				break;
			}
		    else if(p[s] == 'E')
		    {
		        count1       =   count1+1;
			if(count1 == N-1)
			{
				while(t<((2*N)-2))
				{
					if(t==(2*N-3)) q[t]      =   'E';
					else q[t]      =   'S';
					t	=	t	+	1;
				}
				break;
			}
		        q[t]      =   'S';
		        q[t+1]    =   'E';
		        s   =   s+1;
		        t   =   t+2;
		        while(p[s] == 'E')
		        {
		            count1  =   count1 +  1;
			    if(count1 == N-1)
			    {
				while(t<((2*N)-2))
				{
					if(t==(2*N-3)) q[t]      =   'E';
					else q[t]      =   'S';
					t	=	t	+	1;
				}
				break;
			    }
		            q[t] =   p[s];
		            s   =   s+1;
		            t   =   t+1;
		        }
		        s   =   s   +   1;
		    }
		    else if(p[s] == 'S')
		    {
		        count2       =   count2+1;
			if(count2 == N-1)
			{
				while(t<((2*N)-2))
				{
					if(t==(2*N-3)) q[t]      =   'S';
					else q[t]      =   'E';
					t	=	t	+	1;
				}
				break;
			}
		        q[t]      =   'E';
		        q[t+1]    =   'S';
		        s   =   s+1;
		        t   =   t+2;
		        while(p[s] == 'S')
		        {
		            count2  =   count2 +  1;
				    if(count2 == N-1)
				    {
					     while(t<((2*N)-2))
				       	{
					    	if(t==(2*N-3)) q[t]      =   'S';
					     	else q[t]      =   'E';
					    	t	=	t	+	1;
					     }
					break;
				    }
		            q[t] =   p[s];
		            s   =   s+1;
		            t   =   t+1;
		        }
		        s   =   s   +   1;
		    }
		}
		printf("Case #%d: %s\n",i+1,q);
	    }
    return 0;
}




