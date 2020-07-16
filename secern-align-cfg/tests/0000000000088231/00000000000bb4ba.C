#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int dp[10][103];

void mymain(int tst)
{
	string num;
	cin >> num;

	int len = num.length();

	for (int i = 0; i < 10; i++)
	{
		int k = len;
		for (int j = 0; j < len; j++)
		{
			if (num[j] - '0' - i >= 0) dp[i][k--] = num[j] - '0' - i;
			else dp[i][k--] = -(num[j] - '0' + 10 - 1);
		}
	}

	int carry = 0;
	string ans1;
	string ans2;

	for (int i = 1; i <= len; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j  == 4) continue;
			if (i == len && j == 0) continue;
			
			int c = dp[j][i];

			if (c >= 0 && c != 4)
			{
				if(i != len || c != 0) ans1 += c + '0';
				ans2 += j + '0';
				break;
			}
		}
	}

	reverse(ans1.begin(), ans1.end());
	reverse(ans2.begin(), ans2.end());

	cout << "Case #" << tst << ": " << ans1 << " " << ans2 << endl;
}

int main()
{
	cin.sync_with_stdio(false);
	int tst;
	scanf("%d", &tst);

	for (int i = 1; i <= tst; i++)
	{
		mymain(i);
	}

	return 0;
}