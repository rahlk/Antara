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

	//printf("%llu ",b[i]);
	printf("Case #%llu: %llu  %llu\n",i+1,b[i],a[i]-b[i]);
	}
	
/*	ll i=0,n=0,r=0,k=0;


	for(i=0;i<t;i++){

		scanf("%llu",&n);    

		k=0;


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



		if(!chk){
			k=k*10;
		}

		printf("Case #%llu: %llu  %llu\n",i+1,k,n-k);

	}
*/
	return 0;

}