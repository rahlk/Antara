#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

void genePrime(int s, int e, vector<int> &primes)
{
    std::vector<int> t_primes;
    //t_primes.push_back(2);
    for(int i=2; i <= e; i++)
    {
        bool prime=true;
        for(unsigned int j=0;j<t_primes.size() && t_primes[j]*t_primes[j] <= i;j++)
        {
            if(i % t_primes[j] == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
        	t_primes.push_back(i);
        }
    }
    primes.clear();
    for( unsigned int i = 0; i < t_primes.size(); i++ )
    {
    	if( t_primes[i] >= s )
    	{
    		primes.push_back(t_primes[i]);
    	}
    }
}

void primesMapLetter( vector<int> &primes, map<int, char> &m )
{
	for( int i = 0; i < 26; i++ )
	{
		m[primes[i]] = 'A' + i;
	}
}

void run()
{
	int N, L;
	cin >> N >> L;
	vector<int> c_digit(L);
	vector<int> c_digit1 = vector<int>(L+1);
	for( int i = 0; i < L; i++)
	{
		cin >> c_digit[i];
	}
	vector<int> primes;
	genePrime(2, N, primes);

	int n1, n2, m1, m2;
	for( unsigned int i = 0; i < primes.size(); i++ )
	{
		if(c_digit[0] % primes[i] == 0 && c_digit[1] % primes[i] == 0)
		{
			n1 = primes[i];
			n2 = c_digit[0] / primes[i];

			m1 = primes[i];
			m2 = c_digit[1] / primes[i];
			break;
		}
	}

	c_digit1[1] = n1;

	c_digit1[0] = c_digit[0] / c_digit1[1];
	for( unsigned int i = 2; i < c_digit1.size(); i++ )
	{
		c_digit1[i] = c_digit[i - 1] / c_digit1[i - 1];
	}

	map<int, bool> sss;
	vector<int> primess;
	for( unsigned int i = 0; i < c_digit1.size(); i++ )
	{
		if( sss.find(c_digit1[i]) == sss.end() )
		{
			sss[c_digit1[i]] = true;
			primess.push_back(c_digit1[i]);
		}
	}
	sort(primess.begin(), primess.end());
	map<int, char> m;
	primesMapLetter( primess,  m );

	for( int i = 0; i < L + 1; i++ )
	{
		cout << m[c_digit1[i]];
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	for( int i = 0; i < n; i++ )
	{
		cout << "Case #" << i + 1 << ": ";
		run();
	}
    return 0;
}
