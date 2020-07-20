#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<math.h>
int main()
{
    int T,i=0,j=0,s=0,t=0,count1=0,count2=0,*N;
    char **p,**q;
    if(scanf("%d",&T)){};
    N   =   (int *)malloc(T*sizeof(int));
    p   =   (char **)malloc(T*sizeof(char *));
    q   =   (char **)malloc(T*sizeof(char *));
    for(i=0;i<T;i++) 
    {
        if(scanf("%d",N+i)) {};
        p[i]   =   (char *)malloc((2*N[i]-1)*sizeof(char));
        //for(j=0;j<(2*N[i]-2);j++)
            if(scanf("%s",p[i])){};
        //P[i]    =   inp.nextLine();
	
    }
    
    //for(i=0;i<T;i++) p[i]   =   (char *)malloc((2*N)*sizeof(char *));
    
    for(i=0;i<T;i++) 
    {
	q[i]   =   (char *)malloc((2*N[i]-1)*sizeof(char));
		s       =   0;
		t       =   0;
		count1  =   0;
		count2  =   0;
		while(s<((2*N[i])-2) && t<((2*N[i])-2))
		{
		    if(count1 == N[i]-1)
			{
				while(t<((2*N[i])-2))
				{
					if(t==(2*N[i]-3)) q[i][t]      =   'E';
					else q[i][t]      =   'S';
					t	=	t	+	1;
				}
				break;
			}
		    else if(count2 == N[i]-1)
			{
				while(t<((2*N[i])-2))
				{
					if(t==(2*N[i]-3)) q[i][t]      =   'S';
					else q[i][t]      =   'E';
					t	=	t	+	1;
				}
				break;
			}
		    else if(p[i][s] == 'E')
		    {
		        count1       =   count1+1;
			if(count1 == N[i]-1)
			{
				while(t<((2*N[i])-2))
				{
					if(t==(2*N[i]-3)) q[i][t]      =   'E';
					else q[i][t]      =   'S';
					t	=	t	+	1;
				}
				break;
			}
		        q[i][t]      =   'S';
		        q[i][t+1]    =   'E';
		        s   =   s+1;
		        t   =   t+2;
		        while(p[i][s] == 'E')
		        {
		            count1  =   count1 +  1;
			    if(count1 == N[i]-1)
			    {
				while(t<((2*N[i])-2))
				{
					if(t==(2*N[i]-3)) q[i][t]      =   'E';
					else q[i][t]      =   'S';
					t	=	t	+	1;
				}
				break;
			    }
		            q[i][t] =   p[i][s];
		            s   =   s+1;
		            t   =   t+1;
		        }
		        s   =   s   +   1;
		    }
		    else if(p[i][s] == 'S')
		    {
		        count2       =   count2+1;
			if(count2 == N[i]-1)
			{
				while(t<((2*N[i])-2))
				{
					if(t==(2*N[i]-3)) q[i][t]      =   'S';
					else q[i][t]      =   'E';
					t	=	t	+	1;
				}
				break;
			}
		        q[i][t]      =   'E';
		        q[i][t+1]    =   'S';
		        s   =   s+1;
		        t   =   t+2;
		        while(p[i][s] == 'S')
		        {
		            count2  =   count2 +  1;
				    if(count2 == N[i]-1)
				    {
					     while(t<((2*N[i])-2))
				       	{
					    	if(t==(2*N[i]-3)) q[i][t]      =   'S';
					     	else q[i][t]      =   'E';
					    	t	=	t	+	1;
					     }
					break;
				    }
		            q[i][t] =   p[i][s];
		            s   =   s+1;
		            t   =   t+1;
		        }
		        s   =   s   +   1;
		    }
		}
		printf("Case #%d: %s\n",i+1,q[i]);
	    }
   /* for(i=0;i<T;i++) 
    {
        printf("Case #%d: %s\n",i+1,q[i]);
        //printf("")
    }*/
    return 0;
}



