#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;
int num(char c) {
    switch (c) {
        case 'A': return 1;
        case 'B': return 2;
        case 'C': return 3;
        case 'D': return 4;
        case 'E': return 5;
        default: return -1;
    }
}
string letter(int c) {
    switch (c) {
case 1: return "A";
case 2: return "B";
case 3: return "C";
case 4: return "D";
case 5: return "E";
default: return "-";

}
}
string getresult() {

    string temp;
    //1. rausf.:
    queue<int> q1[5];
    for (int i=0; i<120;i++) {
        cout<<i*5+1<<"\n";
        cout.flush();
        cin>>temp;
        q1[num(temp[0])].push(i);
    }
    //got the first guess:
    int missing[5];
    for (int i = 0; i<5; i++) {
        if (q1[i].size()!=24) {
            missing[0]=i;
            break;
        }
    }
    //second guess
    queue<int> check= q1[missing[0]];
    queue<int> q2[5];
    while (!check.empty()) {
        int i = check.front();
        cout<<i*5 + 2;
        cout.flush();
        cin>>temp;
        q2[num(temp[0])].push(i);
    }
    //got the 2 guess:
    for (int i = 0; i<5; i++) {
        if (q2[i].size()!=6) {
            missing[1]=i;
            break;
        }
    }
    //3 guess
    check= q2[missing[1]];
    queue<int> q3[5];
    while (!check.empty()) {
        int i = check.front();
        cout<<i*5 + 3;
        cout.flush();
        cin>>temp;
        q3[num(temp[0])].push(i);
    }
    //got the s guess:
    for (int i = 0; i<5; i++) {
        if (q3[i].size()!=2) {
            missing[2]=i;
            break;
        }
    }
    //4 guess
    check= q3[missing[1]];
    queue<int> q4[5];
    while (!check.empty()) {
        int i = check.front();
        cout<<i*5 + 4;
        cout.flush();
        cin>>temp;
        q4[num(temp[0])].push(i);
    }
    //got the s guess:
    for (int i = 0; i<5; i++) {
        if (q4[i].size()!=1) {
            missing[3]=i;
            break;
        }
    }
    //last
    for (int i = 1; ;i++) {
        if (missing[0]!=i&&
            missing[1]!=i&&
            missing[2]!=i&&
            missing[3]!=i) {
            missing[4] = i;
            break;
        }
    }
    return  letter(missing[0]) +
            letter(missing[1])+
            letter(missing[2])+
            letter(missing[3])+
            letter(missing[4]);
}



int main() {


    int cases, figures;
    cin >> cases;
    cin >> figures;//never use...
    for (int j = 1; j <= cases; j++) {
        string res = getresult();
        cout << "Case #"<<j<<": "<<res<<"\n";


    }
    return 0;
}