#include <iostream>
#include <string>

int main() {
    int T;
    std::cin >> T;
    for (int t = 1; t <= T; ++t) {
        std::string N;
        std::cin >> N;

        std::string A, B;
        for (char c : N) {
            if (c == '4') {
                A.push_back('2');
                B.push_back('2');
            } else {
                A.push_back(c);
                B.push_back('0');
            }
        }

        while (B.front() == '0') B.erase(B.begin());
        std::cout << "Case #" << t << ": " << A << " " << B << std::endl;
    }
    return 0;
}