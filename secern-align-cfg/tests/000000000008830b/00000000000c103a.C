#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

using Int_t = uint64_t;
using PrimeFactors = std::pair<Int_t, Int_t>;

PrimeFactors factorize(Int_t k, Int_t n) {
    std::vector<bool> sieve(n + 1, true);
    for (Int_t i = 2; i <= sqrt(n); ++i) {
        if (sieve[i]) {
            for (Int_t j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
            if (k % i == 0)
                return {i, k / i};
        }
    }
    return {k, 1};
}

std::string solve(const std::vector<Int_t> &cipher, Int_t n) {
    const std::size_t k = cipher.size();
    std::vector<PrimeFactors> factors(k);
    std::set<Int_t> primes;
    std::vector<Int_t> cleartext_primes(1);
    factors[0] = factorize(cipher[0], n);
    primes.insert(factors[0].first);
    primes.insert(factors[0].second);
    for (size_t i = 1; i < cipher.size(); ++i) {
        Int_t factor;
        if (cipher[i] % factors[i - 1].first == 0)
            factor = cipher[i] / factors[i - 1].first;
        else
            factor = cipher[i] / factors[i - 1].second;
        factors[i] = {factor, cipher[i] / factor};
        primes.insert(factors[i].first);
        primes.insert(factors[i].second);
        cleartext_primes.push_back(cipher[i] / factor);
    }
    // first prime in cleartext
    if (factors[0].first == factors[1].first ||
        factors[0].first == factors[1].second)
        cleartext_primes[0] = factors[0].second;
    else
        cleartext_primes[0] = factors[0].first;
    // last prime in cleartext
    if (factors[k - 1].first == factors[k - 2].first ||
        factors[k - 1].first == factors[k - 2].second)
        cleartext_primes.push_back(factors[k - 1].second);
    else
        cleartext_primes.push_back(factors[k - 1].first);
    // map prime factors to characters
    std::map<Int_t, char> charmap;
    {
        char c = 'A';
        for (auto i : primes)
            charmap[i] = c++;
    }
    // create result string
    std::string solution;
    for (auto i : cleartext_primes)
        solution += charmap[i];
    return solution;
}

int main() {
    uint64_t test_cases;
    uint64_t n;
    uint64_t l;
    std::vector<Int_t> cipher;
    std::cin >> test_cases;
    for (uint64_t i = 0; i < test_cases; ++i) {
        std::cin >> n;
        std::cin >> l;
        cipher.resize(l);
        for (auto &c : cipher)
            std::cin >> c;
        std::cout << "Case #" << i + 1 << ": " << solve(cipher, n) << std::endl;
    }
    return 0;
}
