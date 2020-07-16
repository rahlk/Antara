#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1;i <= t;i++){
        int num;
        cin >> num;
        string str;
        cin >> str;
        cout << "Case #" << i << ": ";
        for (int j = 0;str[j] != '\0';j++){
            if (str[j] == 'S')
                cout << "E";
            if (str[j] == 'E')
                cout << "S";
        }

        cout << endl;
    }

    return 0;
}
