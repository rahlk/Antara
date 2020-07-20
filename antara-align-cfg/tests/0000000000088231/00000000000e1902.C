#include <iostream>

using namespace std;

int main() {
	
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		 long long int N,B;
		int m=1, A = 0;
		scanf("%d", &N);
		B=N+1;
		while(N%10>0)
{

int r=N%10;
if(r==4 || r==0)
A+=3*m;
else
A+=r*m;
m*=10;
N/=10;

}

		printf( "Case #%d: %d %d\n",  i, A,B-1-A);
		
	}
	return 0;
}
