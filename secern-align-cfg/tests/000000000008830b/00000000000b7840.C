#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	int T, loopT;
	loopT = 0;
	
	cin >> T;
	while (T--){
		int N, L;	
		cin >> N >> L;
		int arr[104];
		int text[104];
		int temp;		
		set<int> key;
		set<int> :: iterator itr;
		
		for (int i = 0; i < L; i++) cin >> arr[i];
		
		for (int i = 0; i < L-1; i++)
		{
			temp = __gcd(arr[i], arr[i+1]);
			text[i] = arr[i]/temp;
			text[i+1] = temp;
			key.insert(text[i]);
			key.insert(text[i+1]);
		}
		text[L] = arr[L-1] / text[L-1];
		key.insert(text[L]);
		/*for (itr = key.begin(); itr != key.end(); ++itr){				
			cout << *itr << endl;
		}*/
		
		cout << "Case #" << ++loopT << ": ";
		for (int i = 0; i <= L; i++)
		{
			int cnt = 0;
			for (itr = key.begin(); itr != key.end(); ++itr){				
				if (text[i] == *itr)
				{
					cout << char(cnt+'A');
					break;
				}			
				cnt++;	
			}
		}
		cout << endl;
		
	}
	return 0;
}
