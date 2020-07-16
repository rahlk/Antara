#include <iostream>
#include <vector>
#include <map>
#include <stdio.h>
#include <algorithm>

using namespace std;

vector<unsigned long> primes;

vector<unsigned long> get_primes(unsigned long max){
    vector<unsigned long> primes;
    char *sieve;
    sieve = new char[max/8+1];
    // Fill sieve with 1
    memset(sieve, 0xFF, (max/8+1) * sizeof(char));
    for(unsigned long x = 2; x <= max; x++)
        if(sieve[x/8] & (0x01 << (x % 8))){
            primes.push_back(x);
            // Is prime. Mark multiplicates.
            for(unsigned long j = 2*x; j <= max; j += x)
                sieve[j/8] &= ~(0x01 << (j % 8));
        }
    delete[] sieve;
    return primes;
}

pair <unsigned int, unsigned int> factor (unsigned int n)
{
   for (unsigned int i = primes.size()-1; i >= 1; i--)
   {
      if (primes [i] <= n && n % primes [i] == 0)
        return pair<unsigned int, unsigned int> (primes [i], n / primes [i]);
    }
    return pair<unsigned int, unsigned int> (0, 0);
}

int main ()
{
    unsigned int T;
    unsigned int N;
    unsigned int L;

    primes = get_primes (10000);

    cin >> T;
    for (unsigned int i = 0; i < T;i++)
    {
      cin >> N >> L;
      unsigned int numbers[L];

      vector <unsigned int> ordered_primes;

      cin >> numbers[0];
      pair <unsigned int, unsigned int>  result = factor (numbers [0]);

      //cout << "N:" << numbers [0] <<" L :" << result.first << ";P :" << result.second << endl;

      for (unsigned int j = 1; j < L; j++){
        cin >> numbers[j];
        pair <unsigned int, unsigned int>  result_n = factor (numbers [j]);

        if (result.first == result_n.first || result.first == result_n.second)
        {
            ordered_primes.push_back (result.second);
        }
        else
        {
            ordered_primes.push_back (result.first);
        }

        if (j < L-1)
        {
          result = result_n;
        }
        else
        {
          if (result_n.first == result.first || result_n.first == result.second){
            ordered_primes.push_back (result_n.first);
            ordered_primes.push_back (result_n.second);
          }
          else {
            ordered_primes.push_back (result_n.second);
            ordered_primes.push_back (result_n.first);
          }

        }

        //cout << "N:" << numbers [j]<<  " :L" << result_n.first << ";P " << result_n.second << endl;
      }
      /*cout << "Start: ";
      for (int i = 0; i < ordered_primes.size (); i++)
        cout << " " << ordered_primes [i];
      cout << endl;*/

      // Sort the obtained primes, with repitions
      vector <unsigned int> result_primes = ordered_primes;
      sort (result_primes.begin(), result_primes.end ());

      /*cout << "Start ordered: ";
      for (int i = 0; i < result_primes.size (); i++)
        cout << " " << result_primes [i];
      cout << endl;*/

      //Establish the key map
      map<unsigned int, char> key;
      char current = 'A';
      key.insert (pair <unsigned int, char> (result_primes [0], current));
      //cout << current << "->" << result_primes [0] << endl;

      for (unsigned int z = 1; z < result_primes.size ();z++)
      {
        if (result_primes [z] != result_primes [z-1]){
            current ++;
            key.insert (pair <unsigned int, char> (result_primes [z], current));
            //cout << current << "->" << result_primes [z] << endl;
            //cout << (char)(key.find(result_primes [z])->second) << "->" << result_primes [z] << endl;
        }
      }

      // Apply the map to the primes in the right order
      /*for (unsigned int z = 0; z < ordered_primes.size (); z++)
      {
          cout << ordered_primes[z] << "-> "<<(char)(key.find(ordered_primes [z])->second) << ";";
      }*/

      // Apply the map to the primes in the right order
      cout << "Case #" << i + 1 << ": ";
      for (unsigned int z = 0; z < ordered_primes.size (); z++)
      {
          cout << (char)(key.find(ordered_primes [z])->second);
      }

      cout << endl;

    }
}
