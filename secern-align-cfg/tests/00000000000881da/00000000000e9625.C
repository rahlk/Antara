#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50000

void main()
{
 int t,n,a,b,c=0,cch=0,rest,last,i,j;
 char arr[max],s[max],ch,rch;
 scanf("%d",&t);
 
 while(t--)
 {
 	arr[0]='\0';
 	s[0]='\0';
 	//printf("Enter n\n");
 	scanf("%d",&n);
	scanf("%s",arr);
	//arr[]={'S','E','S','E','S','E','E','S'};
 	last=2*n-2;
 	cch=0;
 	c++;
 	//while(1) 	{
 		//printf("Origial: %s\n\n",arr);
 		if(arr[last-1]=='E'){	ch='S';rch='E'; } 	
		 else {ch='E';rch='S';}
		 
		 if(arr[0]==arr[last-1])				//loophole
		 {
		 	for(i=1;i<2*n-3;i++)
		 	{
		 		if(arr[i]==ch){
			 		cch++;
			 		if(arr[i+1]==ch)
			 		break;
		 		}
			}
			 if(cch%2!=0)	
			 for(j=0;j<cch;j++)
			 s[j]=ch;
			 
			 for(j=cch;j<cch+n-1;j++)
			 s[j]=rch;			 
			 
			 for(j=cch+n-1;j<=last-1;j++)
			 s[j]=ch;		 
		 }
		 else
		 {
		 	//printf("Equal	ch: %c	rch: %c		N: %d\n",ch,rch,n);
		 	//if(n%2!=0)	{
		 		for(j=0;j<n-1;j++)		 		s[j]=rch;		 		
		 		//printf("Add:	%s		LAST:%d\n",s,last);
		 		for(j=n-1;j<last;j++)	{s[j]=ch;}//1	printf("Heklke j: %d	CH:%c	s[j]: %c\n",j,ch,s[j]);	 			}
		 	//}
		 	
		 }
		 printf("Case #%d: %s\n",c,s);
		 //break; 	
	//}	
 } 
}
