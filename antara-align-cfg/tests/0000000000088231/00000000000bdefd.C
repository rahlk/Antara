#include <iostream> 
#include <math.h>
using namespace std;

void solve(long long int num)
{

long long int a, b;
long long int modnum;

    for (a = 1; a < num; ++a)
    {
        b = num - a;
        while (a != 0)
        {
            modnum = a % 10;    
            a = a / 10;  
            if (modnum == 4)
            {
                break;
            }
        }
        
        while (b != 0)
        {
            modnum = b % 10;
            b = b / 10;
            if (modnum == 4)
            {
                break;
            }
        }
        cout<<a <<" "<<b<<endl;
    }
}

int main() {
  int t
  long long int num;
  cin >> t;  
  for (int i = 1; i <= t; ++i) {
    cin >> num;  
    
    cout << "Case #" << i << ": " << solve(num) << endl;
  }    
  return 0;
}