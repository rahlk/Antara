#include<bits/stdc++.h>
using namespace std;

int vstd[10];

char enc(int i){
	return (char)'A'+(i-1);
	
}

int main(){
	
	int T=0,F=0,g=0;
	//cin>>T>>F;
	
	string hnahn;
	//cin>>hnahn;
	getline(cin,hnahn);
	while(hnahn[g]!=' '){
		T*=10;
		T+=hnahn[g]-'0';
		g++;
	}
	//cout<<T<<endl;
	for(int t=1;t<=T;t++){
		for(int i=0;i<5;i++) vstd[i] = 0;
		set<int> s;
		int hano = 0;
		for(int i=1;i<=595;i++){
			if(i%5 == 0){
				for(int j=0;j<5;j++){
					if(!vstd[j]){
						hano*=10;
						hano+=(j+1);
					}
					vstd[j] = 0;
				}
				s.insert(hano);
				hano = 0;
				continue;
			}
			cout<<i<<endl;
			string c;
			//cin>>c;
			getline(cin,c);
			if(c == "N"){
				//int hnhon = 0;
				//while(1)hnhon++;
				goto BR;
			}
			vstd[c[0]-'A'] = 1;
			hano*=10;
			hano += (c[0]-'A'+1);
		}
		
		int a[5] = {1,2,3,4,5};
		do{
			int hnhn = a[0] * 10000 + a[1] *1000 + a[2]*100 + a[3]*10 +a[4];
			if(!s.count(hnhn)){
				//string s = enc(a[0])+enc(a[1])+enc(a[2])+enc(a[3])+enc(a[4]);
				string sol ="ABCDE";
				sol[0] = enc(a[0]);
				sol[1] = enc(a[1]);
				sol[2] = enc(a[2]);
				sol[3] = enc(a[3]);
				sol[4] = enc(a[4]);
				//cout<<enc(a[0])<<enc(a[1])<<enc(a[2])<<enc(a[3])<<enc(a[4])<<endl<<flush;
				//cout<<s<<endl;
				cout<<sol<<endl;
				break;
			}
		}while(next_permutation(a,a+5));
		
		string ans;
		//cin>>ans;
		getline(cin,ans);
		if(ans[0] == 'N')break;
	}
	BR: ;
	return 0;
}
