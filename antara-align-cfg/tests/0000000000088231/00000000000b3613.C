#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

//#define __DEB__ 

string get_digits(uint32_t v) {
	uint32_t first = 0;
	uint32_t second = 0;
	uint_fast8_t counter = 0;
	while (v > 0)
	{
		uint_fast8_t next = v % 10;
		uint32_t p = pow(10, counter);
		if (next == 4) {
			first += 2 * p;
			second += 2 * p;
		}
		else
		{
			first += next * p;
		}

		counter++;
		v /= 10;
	}

	ostringstream stringStream;
	stringStream << first << " " << second;
	return stringStream.str();
}


int main()
{
#ifdef  __DEB__
	ifstream in("in.txt");
	cin.rdbuf(in.rdbuf());
#endif //  __DEB__

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 0;
	cin >> t;
	uint32_t v = 0;
	while (t > 0) {
		cin >> v;
		cout << get_digits(v) << endl;
		t--;
	}
}
