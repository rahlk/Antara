#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int T, N, A, B;
    cin >> T;
    int sub;
    for(int i = 1; i <= T; i++){
        cin >> N;
        int n = N;
        
        int digit = 0;
        while(n > 0){
            n /= 10;
            digit++;
        }
        
        for(int j = 0; j < digit; j++){
            A += pow(10, j);
        }
        B = N - A;#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int T, N, A, B;
    cin >> T;
    int sub;
    for(int i = 1; i <= T; i++){
        cin >> N;
        int n = N;
        A = 0;
        B = 0;
        
        int digit = 0;
        while(n > 0){
            n /= 10;
            digit++;
        }
        
        for(int j = 0; j < digit; j++){
            A += pow(10, j);
        }
        B = N - A;
        
        int b = B;
        for(int j = 0; j < digit; j++){
            if(b % 10 != 4){
                b /= 10;
            }
            
            else{
                int add = pow(10, j);
                A += add;
                B -= add;
                b /= 10;
            }
        }
        
        cout << "Case #" << i << ": " << A << " " << B << endl;
    }
}
        
        int b = B;
        for(int j = 0; j < digit; j++){
            if(b % 10 != 4){
                b /= 10;
            }
            
            else{
                int add = pow(10, j);
                A += add;
                B -= add;
                b / = 10;
            }
        }
        
        cout << "Case #" << i << ": " << A << " " << B << endl;
    }
}