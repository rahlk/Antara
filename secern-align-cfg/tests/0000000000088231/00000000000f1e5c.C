/*#include<stdio.h>
#define MAX 100000

int main()
{
    int t,n,i,j=0;
    scanf("%d",&t);

    char str[MAX],str1[MAX];

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        scanf("%s",str);

        while(str[j]!='\0')
        {
            if(str[j]=='S')
                str1[j]='E';
            else
                str1[j]='S';

            j++;
        }

        printf("Case #%d: %s\n",i+1,str1);
        j=0;

    }
    return 0;
}*/

/*#include<stdio.h>

long long unsigned count=0;

long long unsigned countdigi(long long unsigned n)
{
    long long unsigned total=0;
    while(n != 0)
    {
        n /= 10;
        ++total;
    }
    return total;
}

long long unsigned checknum(long long unsigned a)
{
    long long unsigned x,y;

    y=countdigi(a);

    while(a!=0)
    {
        x=a%10;
        if(x!=4)
          {
              count++;
              a=a/10;
          }
    }

    if(y==count)
        {
            count=0;
            return 1;
        }

    return 0;
}

int main()
{
    long long unsigned t,n,i,j,m=0;
    scanf("%llu",&t);

    for(i=0;i<t;i++)
    {
        scanf("%llu",&n);

        for(j=1;j<n;j++)
        {
            if(checknum(j)==1)
            {
                    if(checknum(n-j)==1)
                    {
                        m=j;
                        break;
                    }
            }
        }

        printf("Case #%llu: %llu %llu\n",i+1,m,n-m);
    }

    return 0;
}*/

#include<stdio.h>
typedef long long unsigned ll;
//typedef int ll;
ll reverse(ll a){

	ll k,r;

	while(a!=0){
		r=a%10;
		k=k*10+r;
		a=a/10;
	}
	return k;
}



int main(){
	ll t;  scanf("%llu",&t);

	    ll a[t],b[t];


	      ll i=0,n=0,r=0,k=0;



	      for(i=0;i<t;i++){

	      scanf("%llu",&a[i]);

	      }

	      for(i=0;i<t;i++){

	      k=0;

	      n=a[i];

	      ll chk=n%10;

	      n=reverse(n);

	      while(n!=0){

	      r=n%10;

	      if(r==4){
	      k=k*10+3;
	      }
	      else{
	      k=k*10+r;

	      }
	      n=n/10;
	      }

	      b[i]=k;

	      if(!chk){
	      b[i]=k*10;
	      }



	      }


	      for(i=0;i<t;i++){

	printf("Case #%llu: %llu  %llu\n",i+1,b[i],a[i]-b[i]);
	}

	return 0;
}
