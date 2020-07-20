#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef std::vector<int> VI;
typedef std::vector<LL> VLL;

#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define SORT(c) std::sort(ALL(c))
#define RSORT(c) std::sort(RALL(c))
#define PRINTV(v) for(const auto& a : (v) ) std::cerr << a << ' '; std::cerr << '\n';
#define DV(v) for(const auto& a : (v) ) std::cerr << a << ' '; std::cerr << '\n';

std::string sol()
{
	int N,M ;
  std::cin >> N >> M;
  int arr[18] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  //while(N--)
  {
    int min = 0;
    for(int n = 2; n <=18;++n,--N)
    {
      for(int i = 0 ; i < 18; ++i)
        std::cout << n << ' ';
      std::cout << std::endl;

      int a;
      for(int i = 0 ; i < 18; ++i)
      {
        std::cin >> a;
        arr[n-1]+=a;
      }
      min = std::max(arr[n-1], min);
    }
    std::set<int> possibleAns;
    for(int m = min ; m <= M ; m+=arr[17]%18)
    possibleAns.insert(m);
    
    for(int n = 17; n >= 2 ; ++n)
    {
      if(possibleAns.size() == 1)
      {
        while(N--)
        {
          for(int i = 0 ; i < 18; ++i)
            std::cout << 18 << ' ';
          std::cout << std::endl;

          int a;
          for(int i = 0 ; i < 18; ++i)
          {
            std::cin >> a;
          }
        }
        std::cout << *possibleAns.begin() << std::endl;
        return{};
      }

      std::set<int> tmp, setInt;
      for(int m = min ; m <= M ; m+=arr[n-1]%n)
        possibleAns.insert(m);

      std::set_intersection(tmp.begin(),tmp.end(),possibleAns.begin(),possibleAns.end(), std::inserter(setInt, setInt.begin()));
      possibleAns = setInt;
    }

  }

	return {};
}

int main()
{
	int T;
	std::cin >> T;
	for (int i = 1; i <= T; ++i)
	{
    sol();
		//std::cout << "Case #" << i << ": " << sol() << '\n';
	}
  return 0;
}
