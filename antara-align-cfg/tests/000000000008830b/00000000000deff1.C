#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long prime1(long,long);
long* unique(long *,long);
int compare(const void*,const void*);
int main()
{
    long T,N,L,x=1,i,p1,p2,j;
    long *ciper,*prime,*prime2,*p;
    char *y;
    scanf("%ld",&T);
    while(x<=T)
    {
        scanf("%ld %ld",&N,&L);
        y=(char*)malloc((L+2)*sizeof(char));
        ciper=(long*)malloc(L*sizeof(long));
        prime=(long*)malloc((L+1)*sizeof(long));
        prime2=(long*)malloc((L+1)*sizeof(long));
        p=(long*)malloc(26*sizeof(long));
        for(i=0;i<L;i++)
        {
            scanf("%ld",&ciper[i]);
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
        qsort(prime,L+1,sizeof(long),compare);
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
        printf("Case #%ld: %s\n",x,y);
        free(ciper);
        free(y);
        free(prime);
        free(p);
        free(prime2);
        x++;
    }
    return 0;
}
long prime1(long p,long n)
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
long* unique(long* prime,long L)
{
    int i,j=1;
    long *p=(long*)malloc(26*sizeof(long));
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
    return(*(long*)a-*(long*)b);
}