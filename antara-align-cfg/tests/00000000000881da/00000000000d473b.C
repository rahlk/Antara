#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for(int i = 0; i < T; i ++)
	{
		int N;
		cin >> N;
		cout << "Case #" << i + 1 << ": ";
//		for(int j = 0; j < 2 * N - 2; j ++)
//		{
//			char c = getchar();
//			if(c == 'E')
//				putchar('S');
//			else if(c == 'S')
//				putchar('E');
//		}
		string s;
		cin >> s;
		for(int j = 0; j < 2 * N - 2; j ++)
		{
			if(s[j] == 'E')
				cout << 'S';
			else if(s[j] == 'S')
				cout << 'E';
		}
		cout << endl;
	}
	return 0;
}
