#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {
    int n;
    int A,B;
    cin >> n;
    for(int c=0; c<n; c++) {
        int input;
        cin >> input;
        char* number;
        itoa(input, number);
        for(int i=0; i<number.size(); i++) {
            if(number[i] == '4'){
                int j = number.size() - i;
                A += 2 * pow(10, j);
                B = input - A;
            }
        }
        cout << "Case #" << c+1 << ": "<< A << " "<< B << endl;
    }
}