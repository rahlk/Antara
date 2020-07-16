#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void prime1(long*,int);
void unique(long *,long*,int);
int compare(const void*,const void*);
int main()
{
    int T,N,L,x=1,i,j;
    long *p1=1,p2;
    long *ciper,*prime,*prime2,*p;
    char *y;
    scanf("%d",&T);
    while(x<=T)
    {
        scanf("%d %d",&N,&L);
        y=(char*)malloc((L+2)*sizeof(char));
        ciper=(long*)malloc(L*sizeof(long));
        prime=(long*)malloc((L+1)*sizeof(long));
        prime2=(long*)malloc((L+1)*sizeof(long));
        p=(long*)malloc(26*sizeof(long));
        for(i=0;i<L;i++)
        {
            scanf("%ld",&ciper[i]);
        }
        prime1(p1,N);
        for(i=(*p1);i<=N;i++)
        {
			if(ciper[0]%(*p1)==0)
            {
            	break;
            }
            prime1(p1,N);
        }
        p2=ciper[0]/(*p1);
        if(ciper[1]%(*p1)==0)
        {
            prime2[0]=prime[0]=p2;
        }
        else
        {
            prime2[0]=prime[0]=*p1;
        }
        for(i=1;i<=L;i++)
        {
            prime2[i]=prime[i]=ciper[i-1]/prime[i-1];
        }
        qsort(prime,L+1,sizeof(long),compare);
        unique(prime,p,L);
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
        *p1=1;
        free(ciper);
        free(y);
        free(prime);
        free(p);
        free(prime2);
        x++;
    }
    return 0;
}
void prime1(long* p,int n)
{
    (*p)+=1;
	int i,flag=0;
    while((*p)<n)
    {
    for(i=2;i<sqrt(*p);i++)
    {
        if((*p)%i==0)
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
        (*p)++;
    }
    }
    return;
}
void unique(long* prime,long * p, int L)
{
    int i,j=1;
    p[0]=prime[0];
    for(i=1;i<=L;i++)
    {
		if(prime[i]!=prime[i-1])
        {
            p[j]=prime[i];
			++j;
        }
    }
    return;
}
int compare(const void*a,const void*b)
{
    return(*(long*)a-*(long*)b);
}