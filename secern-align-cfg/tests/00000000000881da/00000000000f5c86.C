/*Problem 1*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int T;
    int N;
    string strPth, strOut;

    cin >> T;
    for (int Tidx=0;Tidx<T;Tidx++) {
        cin >> N;
        cin >> strPth;
        replace(strPth.begin(),strPth.end(),'E','-');
        replace(strPth.begin(),strPth.end(),'S','E');
        replace(strPth.begin(),strPth.end(),'-','S');

        cout << "Case #" << Tidx+1 << ": "
            << strPth << endl;
    }
    return 0;
}
