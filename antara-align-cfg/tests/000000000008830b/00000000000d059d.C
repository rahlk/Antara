#include<stdio.h>
struct{
	char arr[100];
}s[100];
int main(){
	int i,j,t,l=0,sum=0;
	 int alpha[26];
	
	scanf("%d",&t);

	for(i=0;i<t;i++){
		scanf("%s",&s[i].arr);
		}

	for(i=0;i<t;i++){
		l=0;       sum=0;
		for(j=0;j<26;j++)
		alpha[j]=0;
		while(*(s[i].arr+l)!='\0')
		{
			if(s[i].arr[l]>=97)  alpha[(s[i].arr[l++])-

97]=1;
			else  alpha[(s[i].arr[l++])-65]=1;
		}
		for(l=0;l<26;l++)
		{
		 if(alpha[l]==0)
		  sum=sum+(l+1);
		}
		if(sum==0)printf("\nNothing is missing");
		else{
		sum=(sum-1)%26;
		printf("\nString %d Representative is = %c",i+1,sum

+97);
		}
	}
return 0;
}