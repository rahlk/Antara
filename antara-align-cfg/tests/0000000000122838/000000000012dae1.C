#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


void build (std::vector<int>& data, std::vector<int>& a, int v, int tl, int tr) {
    if (tl == tr)
        data[v] = a[tl];
    else {
        int tm = (tl + tr) / 2;
        build(data, a, v * 2, tl, tm);
        build(data, a, v * 2 + 1, tm + 1, tr);
        data[v] = std::max(data[v * 2], data[v * 2 + 1]);
    }
}

int sum (std::vector<int>& data, int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr)
        return data[v];
    int tm = (tl + tr) / 2;
    return std::max(sum(data, v * 2, tl, tm, l, std::min(r, tm)), sum(data, v * 2 + 1, tm + 1, tr, std::max(l, tm + 1), r));
}

int64_t solve(std::vector<int>& x, std::vector<int>& y, int diff) {
    auto sz = x.size();

    std::vector<int> tree1(4 * sz, 0);
    build(tree1, x, 1, 0, sz - 1);
    std::vector<int> tree2(4 * sz, 0);
    build(tree2, y, 1, 0, sz - 1);

    auto query1 = [&](int l, int r) { return sum(tree1, 1, 0, sz - 1, l, r); };
    auto query2 = [&](int l, int r) { return sum(tree2, 1, 0, sz - 1, l, r); };
    auto probe = [&](int l, int r) { return std::abs(query1(l, r) - query2(l, r)) <= diff; };

    int64_t res = 0;
    for (size_t lbound = 0; lbound < sz; ++lbound) {
        size_t l = lbound + 1, r = sz - 1;

        int m1 = x[lbound], m2 = y[lbound];
        for (size_t rbound = lbound; rbound < sz; ++rbound) {
            m1 = std::max(m1, x[rbound]);
            m2 = std::max(m2, y[rbound]);
            if (std::abs(m1 - m2) <= diff) {
                ++res;
            } else {
                ;
            }
        }

    }

    return res;
}

int main() {
    size_t cnt, count, diff;
    std::cin >> cnt;
    for (size_t i = 1; i <= cnt; ++i) {

        std::cin >> count >> diff;
        std::vector<int> x(count, 0), y(count, 0);
        for (int p = 0; p < count; ++p) {
            std::cin >> x[p];
        }
        for (int p = 0; p < count; ++p) {
            std::cin >> y[p];
        }
        auto ans = solve(x, y, diff);
        std::cout << "Case #" << i << ": " << ans << std::endl;
    }
}