#include iostream

using namespace std;
  
int main() {

	int t,n,i1,i2,n2,r,r1,r2;
	
	cin >> t;
	i1=0;
	while (i1<t)
	{
		cin >> n;
		i1++;
		
		r1=0;
		r2=1;
		n2=n-1;
		i2=1;
		while (n2>0){
			r=n2%10;
			if (r==4){r1+=3*i2;r2+=i2;}
			else {r1+=r*i2;};
			i2=i2*10;
			n2=(n2-r)/10;
		}
		
		cout  <<"Case #"<< i1 <<": "<< r1 << " " << r2 << endl;

		
	}
	
	return 0;
}