#include <stdio.h>
#include <stdlib.h>
int main() {
     char c[100];
	 int a[1000],b[26],n,p,s,low,high,flag;
	 int j=0,i,k,l,d,count=0;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	     scanf("%d",&p);
	    
	     low=p/26;
	   // printf("%d\n",low);
	     high=p;
	     //printf("%d\n",high);
	     while(low<=high)
	     {
	         flag=0;
	         for(i=2;i<=low/2;i++)
	         {
	             if(low%i==0)
	             {
	                 flag=1;
	                 break;
	             }
	         }
	         if(flag==0)
	         {
	             b[j]=low;
	             j++;
	         }
	         low++;
	    }
	     scanf("%d\n",&s);
	    //printf("%d",s);
	     //for(i=0;i<26;i++)
	    // printf("%d ",b[i]);
	    l=0;
	     for(i=0;i<s;i++)
	     scanf("%d",&a[i]);
	     for(i=0;i<s;i++)
	     {
	      if(i==0)
	      {
	         k=s;
	        d=a[i]/k;
	        printf("%d %d",k,d);
	      }
	      else
	      {
	        d=k;
	        k=a[i]/d;
	      }
	      while(l<s)
	      {
	      for(i=0;(i<26)&&(b[i]==d);i++);
	     
	      c[l]=65+i;
	      l++;
	      }
	    }
	    
	 }
	 for(i=0;i<l;i++)
	    printf("%c ",c[i]);
	
	
	return 0;
}
