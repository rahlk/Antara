#include <cstdio>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#define MP make_pair
#define N 1050
#define pi 3.1415926535897932384626433832795

using namespace std;

vector<pair<pair<int, int>, int> > now, pre;
vector<int> ans;
int tes,n,b,f,cnt[N];
char tp[N];
 
string test_store()
{
	cout<<tp<<endl;
	fflush(stdout);
	string str;
	cin>>str;
	return str;
}

int guess()
{
	string str = "";
	for (int i = 0; i < b; i++)
	{
		if (i) str += " ";
		str += to_string(ans[i]);
	}
	cout<<str<<endl;
	fflush(stdout);
	int x;
	cin>>x;
	return x;
}
 
void check()
{
	int m = now.size();
	for (int i = 0, k = 0; i < m; i++, k ^= 1)
	{
		int l = now[i].first.first, r = now[i].first.second;
		if (now[i].second == r - l + 1) continue;
		for (int j = l; j <= r; j++) tp[j] = k + '0'; 
	}
	string ret = test_store();
	for (int i = 0, pos = 0, k = 0; i < m; i++)
	{
		int l = now[i].first.first, r = now[i].first.second;
		if (now[i].second == r - l + 1) continue;
		if (!now[i].second)
		{
			pos += r - l + 1;
			continue;
		}
		now[i].second = 0;
		for (int j = l; j <= r; j++, pos++)
			if (pos >= n - b || ret[pos] != k + '0')
			{
				now[i].second = r - j + 1;
				break;
			}	
		k ^= 1;
	}
}
 
void split()
{
	pre = now;
	now.clear();
	int m = pre.size();
	for (int i = 0; i < m; i++)
	{
		int l = pre[i].first.first, r = pre[i].first.second, w = pre[i].second;
		if (!w || r - l + 1 == w)
		{
			now.push_back(pre[i]);
			continue;
		}
		int mid = (l + r) >> 1;
		now.push_back(MP(MP(l, mid), 200));
		now.push_back(MP(MP(mid + 1, r), 200));
	}
}
 
int main()
{
	//freopen("in.txt","r",stdin);
	int tt,i; 
	scanf("%d",&tes);
	for (tt=1;tt<=tes;tt++){
		scanf("%d%d%d",&n,&b,&f);
		
		for (int i = 0; i < n; i++) tp[i] = '0';
		tp[n] = '\0';
		ans.clear();
		for (int i = 0; i < n; i += b)
		{
			int l = i, r = min(i + b - 1, n - 1);
			now.push_back(MP(MP(l, r), 200));
		}
		check();
		for (int i = 1; i < f; i++)
		{
			split();
			check();
		}
		int sz = now.size();
		for (int i = 0; i < sz; i++)
		{
			int l = pre[i].first.first, r = pre[i].first.second, w = pre[i].second;
			if (w != r - l + 1) continue;
			for (int j = l; j <= r; j++) ans.push_back(j);
		}
		if (guess() != 1)
		{
			printf("Error!");
			return 0;
		}
	}
	return 0;
}