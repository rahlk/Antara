#include <stdio.h>
#include <stdlib.h>

void quickSort(unsigned long long int a[],int l,int u){
	int j;
	if(l<u)
	{
		j = partition(a,l,u);
		quickSort(a,l,j-1);
		quickSort(a,j+1,u);
	}
}

int partition(unsigned long long int a[],int l,int u){
	unsigned long long int v,temp;
	int i,j;
	v=a[l];
	i=l;
	j=u+1;

	do
    {
		do
			i++;

		while(a[i]<v&&i<=u);

		do
			j--;
		while(v<a[j]);

		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);

	a[l]=a[j];
	a[j]=v;

	return j;
}


unsigned long long int gcd (unsigned long long int a, unsigned long long int b){
    long int r=a%b;
    if(r==0){
        return b;
    }
    else{
        return gcd(b,r);
    }
}

int main(){
    int t;
    scanf("%d",&t);
    int m=1;
    while(m<=t){
        unsigned long long int n=0;
        int l=0;
        scanf("%llu %d",&n,&l);
        int q=l;
        unsigned long long int a[101];
        unsigned long long int b[101];
        for(long int i=0;i<l;i++){
            scanf("%llu",&a[i]);
        }
        unsigned long long int com=0;
        com=gcd(a[0],a[1]);
        b[0]=a[0]/com;
        b[1]=com;
        for(long int i=2;i<l+1;i++){
            b[i]=a[i-1]/b[i-1];
        }
        unsigned long long int c[101];

        for(long int i=0;i<l+1;i++){
            c[i]=b[i];
        }
        quickSort(c,0,l);

        char e[101];
        char d[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        //d[26]='\0';
        int k=0;
        l=q;
        int o=0;
        for(int i=0;i<l+1;i++){
            o=0;
            for(int j=0;j<l+1;j++){
                if(c[i]==b[j]){
                    b[j]=0;
                    o=j;
                    break;
                }
            }
            if(c[i-1]==c[i] && i>0){
                e[o]=d[k-1];

            }
            else{
                e[o]=d[k];
                k=k+1;
            }
            if(i==l){
                e[l+1]='\0';
            }
        }
        printf("Case #%d: %s",m,e);
        m=m+1;
        if(m<=t && m>=1){
            printf("\n");
        }
        else{
            exit(0);
        }
    }
    return 0;
}
