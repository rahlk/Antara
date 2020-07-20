#include<stdio.h>
#include<math.h>
int main()
{
	int t, z,y;
	scanf("%d",&t);
	for(z=1;z<=t;z++)
	{   char ar[1001];
		int n,l,num,i,count,k=0,a[26],s[1000],x,m,p;
		scanf("%d %d",&n,&l);
		for(i=0;i<l;i++)
		{
			scanf("%d",&s[i]);
		}
		
    for(num = 1;num<=n;num++)
   	  {  

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
        {
		a[k]=num;
		k++;
        } 
      }

		x=s[0];
		
			for(m=0;m<26;m++)
			{
				if((x%a[m])==0)
				{
					p=a[m];
					ar[0]=(char)(65+m);
				}
			}
			for(i=1;i<l;i++)
			{
				y=s[i]/p;
                for(m=0;m<26;m++)
				{
					if(y==a[m])
					{
						p=a[m];
					ar[i]=(char)(65+m);
					}
					
							}	
							
									
			}
			x=s[l-1];
			for(m=0;m<26;m++)
			{
				if((x%a[m])==0)
				{
					p=a[m];
					ar[l]=(char)(65+m);
				}
			}
			printf("Case #%d: ",z);
			for(i=0;i<l;i++)
			printf("%c",&ar[i]);
			printf("\n");
			}	
	
}