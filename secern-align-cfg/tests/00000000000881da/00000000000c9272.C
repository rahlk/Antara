#include<stdio.h>
#include<math.h>
struct ans
{
	int info;
	struct ans *next;
};

struct ans *addnode(struct ans *,int);
void printlist(struct ans *);

int main()
{
	int t,n,i,j,k;
	scanf("%d",&t);
	struct ans *start[t];
	for(j=0;j<t;j++)
	{
		start[j]=NULL;
	}
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);                              //s=0 e=1 
		char p[2*n-2];                               
		scanf("%s",&p);
		for(j=0;j<(2*n-2);j++)
		{
			if(p[j]=='S')
			{
				start[i]=addnode(start[i],1);
			}
			else
			{
				start[i]=addnode(start[i],0);
			}
		}
	}
	
	for(i=0;i<t;i++)
	{
		printf("Case #%d: ",i+1);
		printlist(start[i]);
		printf("\n");
	}
	return 0;
}

struct ans *addnode(struct ans *ptr,int i)
{
	struct ans *a,*q;
	q=ptr;
	a=(struct ans *)malloc(sizeof(struct ans));
	a->info=i;
	a->next=NULL;
	if(ptr==NULL)
	{
		ptr=a;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=a;
	}
	return ptr;
}

void printlist(struct ans *ptr)
{
	while(ptr!=NULL)
	{
		if(ptr->info==0)
		{
			printf("S");
		}
		else
		{
			printf("E");
		}
		ptr=ptr->next;
	}
}
