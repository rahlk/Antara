#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

string out[5];
typedef vector<int> vi;


void add(vi & v, int v_st, int v_end, int st, int end, int level=3){
    int k=st;
    int phase = 1<<level;
    int ones =0, zeros = 0;
    while(k < end && out[4-level][k] == '1' ){
        ++ones;
        ++k;
    }
    zeros = (end-st) - ones;
    for (int j= v_st; j < v_end; j++ ) v[j]*=2;
    for (int j= v_st+(phase-ones); j < v_end; j++ )
        v[j]+=1;
    if (level != 0){
        if (phase-ones)
            add(v, v_st, v_st+(phase-ones), st, k, level-1);
        if (v_st+(phase-ones) != v_end)
            add(v, v_st+(phase-ones), v_end, k, end, level-1);
    }
}

int main() {
    //std::ifstream in("./small.txt");
    //std::ifstream in("./big.txt");
    //std::cin.rdbuf(in.rdbuf());
    int t, n, b, f;
    int numbers[16][2][2];
    vector<int> res;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> b >> f;
        int phase = 16;
        res.clear();
        for(int j = 0; j < b; j++) res.emplace_back(0);
        for(int j = 0; j < 5; j++) {
            for (int k = 0; k < n; ++k) {
                cout << (((k % (phase * 2)) < phase) ? 1 : 0);
            }
            cout << endl << flush;
            cin >> out[j];
            phase /=2;
        }
        int sum = 0;
        char c = '1';
        int how_many = 0;
        int counter = 0;
        for(int j = 0; j < out[0].length(); j++) {
            if (sum == 16) {
                counter+=16;
                sum = 0;
                c = c == '1' ? '0' : '1';
            }
            if (out[0][j] == c)
                sum +=1;
            else {
                add(res, how_many, how_many+16-sum, j-sum, j);
                for (int k= how_many; k < how_many+16-sum; k++ ) res[k] += counter;
                how_many += 16-sum;
                counter+=16;
                sum = 1;
                c = c == '1' ? '0' : '1';
            }
        }
        if (n%16-sum){
            add(res, how_many, how_many+n%16-sum, n-n%16, n);
            for (int k= how_many; k < how_many+16-sum; k++ ) res[k] += counter;
        }

        cout << res[0];
        for(int j = 1; j < b; j++){
            cout << " " << res[j];
        }
        cout << endl;
    }
    return 0;
}