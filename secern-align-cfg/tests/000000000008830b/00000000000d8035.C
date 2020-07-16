#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

void max(int &a, int &b){
	if( a < b ){
		int sauv;
		sauv = a;
		a = b;
		b = sauv;
	}
}
		
int pgcd(int a, int b){
	int c = 0;
	max(a,b);
	while(a != b){
		max(a,b);
		c = a - b;
		a = b;
		b = c;
	}
	return c;
}

void factorisation(vector<int> &t){
	t[0] = t[1] / pgcd(t[1],t[2]);
	t[1] = pgcd(t[1],t[2]); 
	for(unsigned i = 2; i < t.size(); i++)
		t[i] = t[i]/t[i-1];
}

int rechercheVect(const vector<int> &t, int val){
	for(unsigned i = 0; i < t.size(); i++)
		if(t[i] == val)
			return i;
	return -1; 
}

void matriceKeys(vector<int>t, vector <int> &keys){
	sort (t.begin(), t.end());

	for(unsigned i = 1; i < t.size(); i++)
		if(t[i-1] != t[i])
			keys.push_back(t[i-1]);
	int taille = t.size();

	if(t[taille-1] != t[taille-2])
		keys.push_back(t[taille-1]);
}

int main(){
	int nbTest, max, taille;
	cin >> nbTest;
	
	for(int i = 1; i <= nbTest; i++){
		char c = 0;
		vector<int> keys = {};
		cin >> max >> taille;
		taille++;	
		vector<int> encrypted(taille);
		for(int i = 1; i < taille; i++)
			cin >> encrypted[i];

		factorisation(encrypted);
		matriceKeys(encrypted, keys);

		cout << "Case #" << i << ": ";
		for(int i = 0; i < taille; i++){
			c = 'A' + rechercheVect(keys, encrypted[i]);
			cout << c;
		}
		cout << endl;
	}
		
}
