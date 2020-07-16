#include <stdio.h>
#include<string.h>
int main() {
	int test,i,num,m,k,a;
	scanf("%d",&test); 
	for (a=1;a<=test;a++)
	{m=0;k=0;
	    printf("Case #%d: ",a);
	    
	    scanf("%d",&num);
        char str[2*num];
	    scanf("%s",str);
	    if (str[0]=='S'&&str[strlen(str)-1]=='E')
	    {
	        for (i=0;i<strlen(str);i++)
	        {if (i<num-1) printf("E");
	        else printf("S");
	        }printf("\n");
	    }
	    else if (str[0]=='E'&&str[strlen(str)-1]=='S')
	    {
	        for (i=0;i<strlen(str);i++)
	        {if (i<num-1) printf("S");
	        else printf("E");
	        }printf("\n");
	    }
	    else if (str[0]=='E'&&str[strlen(str)-1]=='E')
	    { for (i=0;i<strlen(str);i++)
	        {
	            if (i==0)
	            {printf("S"); k++;}
	            else if (i!=0&&str[i]=='S'&&str[i+1]=='S')
	            {printf("E"); m++;
	            break;}
	            else
	            {if (str[i]=='E') m++;
	            else if(str[i]=='S') k++;
	            printf("%c",str[i]);
	                
	            }
	        }
	        while(1)
	        if (m<num-1) 
	        {
	            m++;printf("E");
	        }
	        else
	        break;
	        while(1)
	        if (k<num-1)
	        {k++;printf("S");}
	        else
	        break;
	        printf("\n");
	    }
	    else if (str[0]=='S'&&str[strlen(str)-1]=='S')
	    { for (i=0;i<strlen(str);i++)
	        {
	            if (i==0)
	            {printf("E"); m++;}
	            else if (i!=0&&str[i]=='E'&&str[i+1]=='E')
	            {printf("S"); k++;
	            break;}
	            else
	            {
	                if (str[i]=='E') m++;
	            else if(str[i]=='S') k++;
	               printf("%c",str[i]);
	                
	            }
	            
	        }
	        while(1)
	        if (k<num-1) 
	        {k++;printf("S");}
	        else
	        break;
	        while(1)
	        if (m<num-1)
	        {m++;printf("E");}
	        else
	        break;
	        printf("\n");
	    }
	}
	return 0;
}