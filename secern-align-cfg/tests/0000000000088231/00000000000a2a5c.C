#include <bits/stdc++.h>
using namespace std;

bool checaQuatro(int a){

    int num, dig;
		num = a;
		while(num != 0) {
			dig = num%10;
			num = num/10;
			if(dig == 4) {
				return true;
			}
		}
		return false;
}
int main(){
    int t, n, a, b;
    bool checkA, checkB;
    cin >>  t;
    for(int i = 0; i < t; i++){
        cin >> n;
        a = (n/2) + (n%2);
        	b = n/2;
        	checkA = checaQuatro(a);
        	checkB = checaQuatro(b);
        	if(checkA == true) {
        		b = b + (a/2);
        		a = (a/2) + (a%2);
        	}
        	else if(checkB == true){
        		a = a + (b/2);
        		b = (b/2) + (b%2);
        	}
            cout << "Case #"<< (i + 1)<< ": " << a << " " <<b;
    }
}

