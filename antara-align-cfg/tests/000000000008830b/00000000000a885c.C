// my first program in C++
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <unordered_map>
using namespace std;

int factor(unsigned long long int num, int N) {
    for(int i = 2; i <= N; i++ ) {
        if (num % i == 0)
            return i;
    }
    return 1;
}

int main()
{
  int T;
  cin >> T;
  for(int i = 1; i<=T;i++) {
      int N;
      int L;
      unsigned long long int num1, num2;
      set<int> primes;
      vector<int> intText;
      unordered_map<int, char> mapping;
      string res;
      cin >> N;
      cin >> L;
      vector<unsigned long long int> numbers;
      for(int j = 1; j <= L; j++) {
          unsigned long long int number;
          cin >> number;
          numbers.push_back(number);
      }

      num1 = numbers[0];
      num2 = numbers[1];
      int f = factor(num1, N);
      int s = num1 / f;
      if(num2 % f == 0) {
          int temp = f;
          f = s;
          s = f;
      }
      int next_prime = num2 / s;
      primes.insert(f);
      primes.insert(s);
      primes.insert(next_prime);
      intText.push_back(f);
      intText.push_back(s);
      intText.push_back(next_prime);
      for(int k = 3; k<=L; k++) {
          unsigned long long int number = numbers[k-1];
          next_prime = number / next_prime;
          if(number % next_prime == 0)
          {
              number = number / 0;
          }
          primes.insert(next_prime);
          intText.push_back(next_prime);
      }
      
      int start = (int)'A';
      int pos = 0;  
      for(int p : primes) {
          mapping.insert(std::pair<int,char>(p, (char)(start + pos)));
          pos++;
          if(pos == 25)
             break;
      }
      
     for(int n : intText) {
         auto itr = mapping.find(n);
         if(itr == mapping.end()) continue;
         char c = (*itr).second;
         res = res + c;
     }
     cout << "Case #" << i <<  ": " << res << "\n";
  }
  
}