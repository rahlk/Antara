#include <iostream>
#include <string>
int main()
{
  int T;
  std::cin >> T;
  for (int t = 1; t <= T; ++t) {
    std::string in, out1, out2;
    bool first = true;
    std::cin >> in;
    for (auto it : in) {
      if (it == '4') {
        first = false;
        out1 += '3';
        out2 += '1';
      } else {
        out1 += it;
        if (!first)
          out2 += '0';
      }
    }
    std::cout << "Case #" << t << ": " << out1 << " "
      << ((out2 == "") ? "0" : out2) << std::endl;
  }
  return 0;
}
