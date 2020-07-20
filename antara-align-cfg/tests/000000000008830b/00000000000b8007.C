#include <iostream>

using namespace std;

int T;
int N;
int L;

int main() {

    int k;

    cin >> T;

    for (int i = 0; i < T; i++) {

        cin >> N;
        cin >> L;

        int* primos;
        primos = new int[L + 1];

        char* output;
        output = new char[L + 1];

        for (int j = 0; j < L; j++) {

            cin >> k;

            if (j == 0) {
                for (int l = 3; l <= N; l = l + 2) {

                    if ((k % l) == 0) {

                        primos[0] = l;
                        primos[1] = (k / l);

                        break;

                    }

                }
            }

            else if (j == 1) {
                if ((k % primos[1]) == 0) {
                    primos[2] = (k / primos[1]);
                }
                else {
                    primos[2] = primos[0];
                    primos[0] = primos[1];
                    primos[1] = primos[2];

                    primos[2] = (k / primos[1]);
                }
            }

            else{
                primos[j+1] = (k / primos[j]);
            }

        }

        int lastmin = 0;

        for (char b = 'A'; b <= 'Z'; b++) {

            int min = N;

            for (int a = 0; a < (L + 1); a++) {
                if ((primos[a] < min) && (primos[a] > lastmin)) {
                    min = primos[a];
                }
            }

            lastmin = min;

            for (int a = 0; a < (L + 1); a++) {
                if (primos[a] == min) {
                    output[a] = b;
                }
            }

        }

        cout << "Case #" << i + 1 << ": ";

        for (int z = 0; z < (L + 1); z++) {
            cout << output[z];
        }

        cout << "" << endl;

        delete[] primos;
        delete[] output;
    }

    return 0;

}