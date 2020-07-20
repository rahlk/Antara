
#include <iostream>
#include <list>
using namespace std;
typedef list<char> clist;
int main()
{
	int noofcase;
	cin >> noofcase;
	clist answer[noofcase];
	int instance = 0;
	int limit;
	int cyphervalue, noofcyphertext;
	while (instance < noofcase)
	{
		++instance;
		cin >> limit;
		cin >> noofcyphertext;
		char myarray[limit + 1];
		myarray[0] = '0', myarray[1] = '0';
		for (int z = 2; z < limit + 1; ++z)
			myarray[z] = '1';
		for (int z = 2; z < (limit + 1) / 2; ++z)
		{
			if (myarray[z] == '1')
				for (int j = z * z; j < limit + 1; j += z)
					myarray[j] = '0';
		}

		cin >> cyphervalue;

		int i = 1, a, b;
		while (true)
		{
			a = cyphervalue % i;
			b = cyphervalue / i;
			if (a == 0 && myarray[i] != '0' && b < limit)
			{
				break;
			}
			++i;
		}
		int count = 0;
		int alphabt = 90, alphabet = 65;
		int k, m;
		for (k = limit, m = 3; count < 26; k--, m++)
		{
			if (myarray[m] != '0')
			{
				myarray[m] = alphabet;
				++count;
				alphabet += 1;
			}
			if (myarray[k] != '0')
			{
				myarray[k] = alphabt;
				++count;
				alphabt -= 1;
			}
		}
		count = 0;
		int l;

		l = cyphervalue / i;
		answer[instance].push_back(myarray[i]);

		i = l;
		while (count < noofcyphertext - 1)
		{
			cin >> cyphervalue;

			l = cyphervalue / i;

			answer[instance].push_back(myarray[i]);
			i = l;
			++count;
		}
		answer[instance].push_back(myarray[i]);
	}
	clist::iterator pos;
	for (instance = 0; instance <= noofcase; ++instance)
	{
		cout << "case#" << instance << ':' << ' ';

		for (pos = answer[instance].begin(); pos != answer[instance].end(); ++pos)
			cout << *pos;
	}
}
