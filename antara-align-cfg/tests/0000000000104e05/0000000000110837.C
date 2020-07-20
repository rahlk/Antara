#include <iostream>
#include <vector>

using namespace std;


int count(vector<string> w, int b, int e, int pos) {
    if (e-b == 1) {
        return 2;
    }

    int sb = b, se = b + 1, subSum = 0;

    while (sb < e) {
        while (se < w.size() && w[sb][pos] == w[se][pos]) {
            se++;
        }
        if (se - sb > 1) {
            subSum += count(w, sb, se-1, pos + 1);
        }
        sb = se;
        se = sb + 1;
    }

    if (pos > 0 && e - b + 1 >= subSum + 2) {
        subSum += 2;
    }

    return subSum;
}

void sortW(vector<string> w) {
    string tmp;
    for (int i = 0; i < w.size(); i++) {
        int k = i;
        while (k < w.size() - 1 && w[k] > w[k + 1]) {
            tmp = w[k];
            w[k] = w[k+1];
            w[k+1] = tmp;
        }
    }
}

int main() {
    int T;
    string line;
    int N;


    cin >> T;

    for (int i = 0; i < T; i++) {
        vector<string> words;
        vector<string> rwords;

        // if (cin.fail()) {
        //    cin.clear();
        //    cin.ignore(numeric_limits<streamsize>::max());
        // }

        cin >> N;

        for (int j=0; j < N; j++) {

            cin >> line;

            // if (cin.fail()) {
            //    cin.clear();
            //    cin.ignore(numeric_limits<streamsize>::max());
            // }

            string r(line.rbegin(), line.rend());
            words.push_back(line);
            rwords.push_back(r);
        }

        sortW(rwords);

        for (int j=0; j < N; j++) {
            cout << rwords[j] << "\n";
        }

        cout << "Case #" << i + 1 << ": " << count(rwords, 0, N-1, 0) << "\n";
    }

    return 0;
}