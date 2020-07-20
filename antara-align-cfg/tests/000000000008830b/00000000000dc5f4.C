#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime1(int,int);
int* unique(int *,int);
int compare(const void*,const void*);
int main()
{
    int T,N,L,x=1,i,p1,p2,j;
    int *ciper,*prime,*prime2,*p;
    char *y;
    scanf("%d",&T);
    while(x<=T)
    {
        scanf("%d %d",&N,&L);
        y=(char*)malloc((L+2)*sizeof(char));
        ciper=(int*)malloc(L*sizeof(int));
        prime=(int*)malloc((L+1)*sizeof(int));
        prime2=(int*)malloc((L+1)*sizeof(int));
        p=(int*)malloc(26*sizeof(int));
        for(i=0;i<L;i++)
        {
            scanf("%d",&ciper[i]);
        }
        p1=prime1(1,N);
        for(i=p1;i<=N;i++)
        {
			if(ciper[0]%p1==0)
            {
            	break;
            }
            p1=prime1(p1,N);
        }
        p2=ciper[0]/p1;
        if(ciper[1]%p1==0)
        {
            prime2[0]=prime[0]=p2;
        }
        else
        {
            prime2[0]=prime[0]=p1;
        }
        for(i=1;i<=L;i++)
        {
            prime2[i]=prime[i]=ciper[i-1]/prime[i-1];
        }
        qsort(prime,L+1,sizeof(int),compare);
        p=unique(prime,L);
        for(i=0;i<=L;i++)
        {
            for(j=0;j<26;j++)
            {
                if(prime2[i]==p[j])
                {
                    y[i]=j+'A';
                    break;
                }
            }
        }
        y[L+1]='\0';
        printf("Case #%d: %s\n",x,y);
        free(ciper);
        free(y);
        free(prime);
        free(p);
        free(prime2);
        x++;
    }
}
int prime1(int p,int n)
{
    p+=1;
	int i,flag=0;
    while(p<n)
    {
    for(i=2;i<sqrt(p);i++)
    {
        if(p%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
      break;  
    }
    else
    {
    	flag = 0;
        p++;
    }
    }
    return p;
}
int* unique(int* prime,int L)
{
    int i,j=1;
    int *p=(int*)malloc(26*sizeof(int));
    p[0]=prime[0];
    for(i=1;i<=L;i++)
    {
		if(prime[i]!=prime[i-1])
        {
            p[j]=prime[i];
			++j;
        }
    }
    return p;
}
int compare(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}