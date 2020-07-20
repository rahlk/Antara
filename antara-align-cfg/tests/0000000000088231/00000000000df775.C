#include<stdio.h>
//#include<Math.h>

int main(){
	long int n;
	int i,checkb1,checkb2;
	scanf("%d",&n);
	int a =100;
	long int val[a],b1,b2,saveb1,saveb2;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	
	for(i=0;i<n;i++)
	{			
				b1=val[i]-1;
				b2=1;
				
				//printf("%d %d",b1[i],b2[i]);
				saveb1 = b1;
				saveb2 = b2;
				
					while(saveb1 >0 || saveb2 >0)
					{
						checkb1 = saveb1 % 10;
						checkb2 = saveb2 % 10;
						
						if(checkb1==4 || checkb2==4)
						{
							saveb1 = --b1;
							saveb2 = ++b2;
							
						//	ub1[i] = ub1[i]-1;
						//	ub2[i] = ub2[i]+1;
						//	printf("1");
							continue;
						}
						saveb1 = saveb1 /10;
						saveb2 = saveb2 /10;
						//printf("2");
					}
					printf("Case #%d: %ld %ld\n",i+1,b1,b2);	
	}//end of for
}