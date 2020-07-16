#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int i,t,l,n,j,k,temp1,temp2,flag,z,m;
	int *p,*q,x,y,r[26];
	
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d %d",&n,&l);
	    p=(int *)malloc((l+1)*sizeof(int));
	    q=(int *)malloc((l)*sizeof(int));
	    for(j=0;j<l;j++)
	    {
	        scanf("%d ",&q[j]);
	        
	    }
	    x=q[0];
	    if(x%2==0)
	    {
	       temp1=2;
	       temp2=x/2;
	    }
	    else if(x%3==0)
	    {
	        temp1=3;
	        temp2=x/3;
	    }
	    else
	    {
	        y=sqrt(x);
	        temp1=5;
	        temp2=7;
	        for(j=2;temp1<=y;j++)
	        {
	            
	            if(x%temp1==0)
	            {
	                temp2=x/temp1;
	                flag=1;
	            }
	            else
	            {
	                if(x%temp2==0)
	                {
	                    temp1=x/temp2;
	                    flag=1;
	                }
	            }
	            if(flag==1)
	            break;
	            temp1=6*(j)-1;
	            temp2=6*(j)+1;
	        }
	    }
	        k=0;
	       if(q[1]%temp1==0)
	       {
	           p[0]=temp2;
	       }
	       else
	       {
	           p[0]=temp1;
	       }
	    if(temp1==temp2)
	    {
	        r[0]=temp1;
	        k++;
	        p[1]=temp1;
	        for(j=2;j<(l+1);j++)
	        {
	            p[j]=q[j-1]/temp2;
	            temp2=p[j];
	            flag=0;
	            for(z=0;z<k;z++)
	            {
	                if(temp2==r[z])
	                {
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag==0)
	            {
	                for(m=k;temp2<r[m-1] && m>0;m--)
	                {
	                   r[m]=r[m-1]; 
	                }
	                r[m]=temp2;
	                k++;
	            }
	        }
	    }
	      else if(p[0]==temp1)
	       {
	        p[1]=temp2;
	        if(temp1>temp2)
	        {
	            r[0]=temp2;
	            r[1]=temp1;
	            k=2;
	        }
	        else
	        {
	            r[0]=temp1;
	            r[1]=temp2;
	            k=2;
	        }
	          for(j=2;j<l+1;j++)
	        {
	            p[j]=q[j-1]/temp2;
	            temp2=p[j];
	            flag=0;
	            for(z=0;z<k;z++)
	            {
	                if(temp2==r[z])
	                {
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag==0)
	            {
	               for(m=k;temp2<r[m-1] && m>0;m--)
	                {
	                   r[m]=r[m-1]; 
	                }
	                r[m]=temp2;
	                k++;
	            }
	        }
	       }
	       else
	       {
	           p[1]=temp1;
	           if(temp1>temp2)
	        {
	            r[0]=temp2;
	            r[1]=temp1;
	            k=2;
	        }
	          else
	        {
	            r[0]=temp1;
	            r[1]=temp2;
	            k=2;
	        }
	          for(j=2;j<l+1;j++)
	        {
	            p[j]=q[j-1]/temp1;
	            temp1=p[j];
	            flag=0;
	            for(z=0;z<k;z++)
	            {
	                if(temp1==r[z])
	                {
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag==0)
	            {
	              for(m=k;temp1<r[m-1] && m>0;m--)
	                {
	                   r[m]=r[m-1]; 
	                }
	                r[m]=temp1;
	                k++;
	            }
	        }
	       
	     }
	     printf("Case #%d: ",i);
	    for(j=0;j<l+1;j++)
	       {
	         k=0;
	         while(r[k]!=p[j])
	         k++;
	         printf("%c",65+k);
	       }
	       printf("\n");
	    
	}
	return 0;
}