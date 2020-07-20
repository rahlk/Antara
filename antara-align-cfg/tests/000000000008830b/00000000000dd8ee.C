#include <stdlib.h>
#include <stdio.h>


    int getIndex(long int *arr,int n,int index){
        int result=0,i;
       int count[10001]={0};
        for(i=0;i<n;i++){
            if(arr[i]<arr[index] && count[arr[i]]==0){
                count[arr[i]]++;
                result++;
            }
        }
        //printf("%d hey\n",result);
        return result;
    }
    void check(long int *a,int n){
	int i,b;
	for(i=0;i<n;i++){
	   // printf("%li\n",a[i]);
		b=getIndex(a,n,i);
		switch(b+1)
		{
			case 1:printf("A");
				break;
			case 2:printf("B");
				break;
			case 3:printf("C");
				break;
			case 4:printf("D");
				break;
			case 5:printf("E");
				break;
			case 6:printf("F");
				break;
			case 7:printf("G");
				break;
			case 8:printf("H");
				break;
			case 9:printf("I");
				break;
			case 10:printf("J");
				break;
			case 11:printf("K");
				break;
			case 12:printf("L");
				break;
			case 13:printf("M");
				break;
			case 14:printf("N");
				break;
			case 15:printf("O");
				break;
			case 16:printf("P");
				break;
			case 17:printf("Q");
				break;
			case 18:printf("R");
				break;
			case 19:printf("S");
				break;
			case 20:printf("T");
				break;
			case 21:printf("U");
				break;
			case 22:printf("V");
				break;
			case 23:printf("W");
				break;
			case 24:printf("X");
				break;
			case 25:printf("Y");
				break;
			case 26:printf("Z");
				break;
		}
	}
	printf("\n");
}
int gc( int a, int b){
	if(b!=0){
		return gc(b,a%b);
	}
	else{
		return a;
	}
}
void gcd(long int *d,int n){
    long int *a=(long int *)malloc((n+1)*sizeof(long int));
	int b=0,i;
	b=gc(d[0],d[1]);
	a[0]=d[0]/b;
	a[1]=b;
	a[2]=d[1]/b;
    for(i=3;i<n;i++){
		a[i]=gc(d[i-1],d[i]);
		//printf("%li\n",a[i]);
	}
	a[n]=d[n-1]/a[n-1];
	check(a,n+1);
}
	
int main(){
	int t,n,l,i;
	long int *d;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&l);
		//printf("%d %d hey\n",n,l);
		d=(long int *)malloc(l*sizeof(long int));
		for(i=0;i<l;i++){
			scanf("%li",&d[i]);
			//printf("%li\n",d[i]);
		}
		gcd(d,l);
	}
	return 0;
}



