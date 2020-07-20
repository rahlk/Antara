#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define DEBUG 0

typedef long long ll;

ll gcd(ll a, ll b) {
   ll t;
   
   while (b != 0) {
      t = b;
      b = a % b;
      a = t;
   }
   
   return a;
}

int ll_cmp(const void *lhs, const void *rhs) {
   ll result = * (const ll *) lhs - * (const ll *)  rhs;
   if (result == 0) { return 0; }
   else if (result < 0) { return -1; }
   else { return 1; }
}


int main() {
   ll T;
   scanf("%lld", &T);

   for (ll t = 1; t <= T; ++t) {
      /* get input */
      ll N, L;
      scanf("%lld", &N);
      scanf("%lld", &L);

      ll cipher[L];
      for (ll l = 0; l < L; ++l) {
         scanf("%lld", &cipher[l]);
      }

      /* compute all 26 primes */
      // set<ll> primes_set;
      // vector<ll> primes_vec(L + 1);
      // map<ll,char> primes_map;
      ll primes_vec[L + 1];

      /* find the first prime */
      ll i;
      for (i = 1; cipher[i] == cipher[0]; ++i) {}
      ll first_prime = cipher[0] / gcd(cipher[0], cipher[i]);
      primes_vec[0] = first_prime;
      if (DEBUG) {
         fprintf(stderr, "first prime = %lld\n", first_prime);
      }

      /* find all the other primes */
      for (i = 1; i < L + 1; ++i) {
         ll prime = cipher[i - 1] / primes_vec[i - 1];
         primes_vec[i] = prime;
      }

      /* sort list */
      ll primes_sorted[L + 1];
      memcpy(primes_sorted, primes_vec, sizeof(primes_vec));
      qsort(primes_sorted, L + 1, sizeof(ll), ll_cmp);
      
      /* make set */
      ll primes_set[26];
      char letter = 0;
      for (i = 0; i < L + 1;) {
         primes_set[letter++] = primes_sorted[i++];
         while (i < L + 1 && primes_sorted[i] == primes_sorted[i - 1]) {
            ++i;
         }
      }
      
      /* prll out encoding */
      if (DEBUG) {
         for (i = 0; i < 26; ++i) {
            fprintf(stderr, "%c = %lld\n", (char) i + 'A', primes_set[i]);
         }
      }

      /* decode message */
      char msg[L + 1 + 1];
      for (i = 0; i < L + 1; ++i) {
         ll prime = primes_vec[i];
         char letter;
         int j;
         for (j = 0; j < 26; ++j) {
            if (primes_set[j] == prime) {
               break;
            }
         }
         letter = j + 'A';
         msg[i] = letter;
      }
      msg[i] = '\0';

      /* prll decoded message */
      printf("Case #%lld: %s\n", t, msg);
   }

   return 0;
}
