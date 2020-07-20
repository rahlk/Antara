#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char dir;
	int x;
	int y;

}data;

int check(data a[],int size, int X,int Y, char b)
{
		int i;
		for(i=0;i<size;i++)
		{
			if(a[i].x==X&&a[i].y==Y)
			{
				if(a[i].dir==b)
					return 0;
			}
		}
		return 1;
	
}

int main()
{	
	int T;
	scanf("%d",&T);
	int k;
	for(k=0;k<T;k++){
	int N;
	scanf("%d",&N);
	int size=2*N-2;
	char arr[size];
	scanf("%s",arr);
	data a[size+1];
	int i;
	for(i=0;i<size;i++)
	{	
		a[i].dir=arr[i];
		if(arr[i]=='E'){
			if(i==0)
			{
				a[i].x=0;
				a[i].y=0;
			}
			a[i+1].x=a[i].x+1;
			a[i+1].y=a[i].y;		
		}
		else{
			if(i==0)
			{
				a[i].x=0;
				a[i].y=0;
			}
			a[i+1].x=a[i].x;
			a[i+1].y=a[i].y+1;		
		}
	}
	int count_E=0,count_S=0,X=0,Y=0;
	printf("Case #%d: ",k+1);
	for(i=0;;i++)
	{	
		if(X==N-1 && Y==N-1)
		{
			printf("\n");
			break;
		}
		if(count_E<N-1 && check(a,size,X,Y,'E'))
		{
			printf("E");
			X++;
			
			count_E++;
		}
	     if(count_S<N-1 && check(a,size,X,Y,'S'))
		{
			printf("S");
			Y++;
			
			count_S++;
		}
	}
	}
	return 0;


}