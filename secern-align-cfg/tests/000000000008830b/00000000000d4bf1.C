#include <iostream>
#include <utility>
#include <cmath>
#include <set>
#include <vector>
#include <map>

std::pair<int, int> primeFactors(int n) { 
    std::pair<int, int> p = std::make_pair(-1, -1);
    while (n % 2 == 0) {
        if (p.first == -1) {
           p.first = 2;
        } else {
           p.second = 2;
        }
        n = n / 2; 
    } 
    for (int i = 3; i <= sqrt(n); i = i+2) { 
        while (n % i == 0)  { 
            if (p.first == -1) {
                p.first = i;
            } else {
                p.second = i;
            }
            n = n/i; 
        } 
    } 
    if (n > 2) {
        if (p.first == -1) {
           p.first = n;
        } else {
           p.second = n;
        }
    }
    return p;
} 

struct Element {
    int nr;
    int n1;
    int n2;
};

int main() {
    int c;
    std::cin >> c;
    for (int k = 1; k <= c; ++k) {
        std::set<int> s;
        std::vector<Element> v;
        int n, l;
        std::cin >> n >> l;
        int nr;
        std::cin >> nr;
        Element el;
        el.nr = nr;
        auto p = primeFactors(nr);
        el.n1 = p.first;
        el.n2 = p.second;
        s.insert(p.first);
        s.insert(p.second);
        v.push_back(el);
        std::cin >> nr;
        el.nr = nr;
        if (nr % v[0].n1 == 0) {
            el.n1 = v[0].n1;
            el.n2 = nr / el.n1;
            std::swap(v[0].n1, v[0].n2);
        } else {
            el.n1 = v[0].n2;
            el.n2 = nr / el.n1;
        }
        s.insert(el.n1);
        s.insert(el.n2);
        v.push_back(el);
        for (int j = 2; j < l; ++j) {
            std::cin >> nr;
            el.nr = nr;
            el.n1 = v[j - 1].n2;
            el.n2 = nr / el.n1;
            s.insert(el.n1);
            s.insert(el.n2);
            v.push_back(el);
        }
        std::map<int, char> m;
        for (int i = 0; i <= 25; ++i) {
            std::set<int>::iterator it = s.begin();
            std::advance(it, i);
            m[*it] = 'A' + i;
        }
        std::string ans;
        for (int i = 0; i < v.size(); i += 2) {
            ans += m[v[i].n1];
            ans += m[v[i].n2];
        }
        std::cout << "Case #" << k << ": " << ans << '\n';
    }
    return 0;
}