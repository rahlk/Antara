//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> 
using namespace std;


// A function to print all prime factors of a given number n
void primeFactors(long long n, vector<unsigned long long>& pair){
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
//        printf("%d ", 2);
    	pair.push_back(2);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (long long i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
//            printf("%d ", i);
        	pair.push_back(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2){
    	pair.push_back(n);
//        printf ("%d ", n);
    }
}



int main() {

	unsigned long long T;
	cin >> T;
//	T = 1;

	for (unsigned long long i = 0; i < T; i++) {

		unsigned long long L, N = 0;
		cin >> N;
		cin >> L;
//		N = 103;
//		L = 31;

		vector<unsigned long long> products;
		for(unsigned long long j = 0; j < L; j++){

			unsigned long long numb;
			cin >> numb;

			products.push_back(numb);
		}

//		cout << T << " " << N << " " << L << endl;

//		vector<unsigned long long> products = {217, 1891 ,4819, 2291 ,2987 ,3811, 1739 ,2491, 4717, 445, 65, 1079, 8383, 5353 ,901 ,187 ,649 ,1003 ,697 ,3239, 7663, 291, 123 ,779, 1007, 3551, 1943, 2117, 1679 ,989, 3053};

		vector<unsigned long long> factors;
		vector<unsigned long long> factors_1;

		vector< vector<unsigned long long> > product_factors;

		primeFactors(products[0], factors);

		if(products[1] % factors[0] == 0){
			factors_1.push_back(factors[0]);
			factors_1.push_back(products[1] / factors[0]);
		}
		else{
			factors_1.push_back(factors[1]);
			factors_1.push_back(products[1] / factors[1]);
		}

		product_factors.push_back(factors);
		product_factors.push_back(factors_1);

		for(unsigned long long k = 2; k < (unsigned long long)products.size(); k++){

			factors[0] = product_factors[k-1][1];
			factors[1] = products[k] / factors[0];

			product_factors.push_back(factors);
		}

//		for(unsigned long long k = 0; k < (unsigned long long)product_factors.size(); k++){
//			cout << products[k] << " " << product_factors[k][0] << " " << product_factors[k][1] << endl;
//		}

		vector<unsigned long long> all_primes;

		all_primes.push_back(product_factors[0][0]);
		all_primes.push_back(product_factors[0][1]);

		for(unsigned long long k = 1; k < (unsigned long long)product_factors.size(); k++){

			all_primes.push_back(product_factors[k][1]);
		}

		sort( all_primes.begin(), all_primes.end() , less<unsigned long long>());
		all_primes.erase( unique( all_primes.begin(), all_primes.end() ), all_primes.end() );


//		for(unsigned long long k = 0; k < (unsigned long long)all_primes.size(); k++){
//
//			cout << all_primes[k] << " ";
//		}
    
		string alphabet = "abcdefghijklmnopqrstuvwxyz";
		unordered_map<unsigned long long, string> umap;
//		cout << endl << all_primes.size() << " " << alphabet.length() << endl;

		for(unsigned long long k = 0; k < (unsigned long long)all_primes.size(); k++){

			umap[all_primes[k]] =  alphabet.at(k);
		}

//		// Traversing an unordered map
//		for (auto x : umap)
//			cout << x.first << " " << x.second << endl;

//		cout << umap[product_factors[0][0]];
//		for(unsigned long long k = 0; k < product_factors.size(); k++){
//
//			cout << umap[product_factors[k][1]];
//		}

		string out = "";

		out = out + umap[product_factors[0][0]];

		for(unsigned long long k = 0; k < product_factors.size(); k++){

			out = out + umap[product_factors[k][1]];
		}
		transform(out.begin(), out.end(), out.begin(), ::toupper);
		cout << "Case #" << i + 1 << ": " << out;

	}


	return 0;
}
