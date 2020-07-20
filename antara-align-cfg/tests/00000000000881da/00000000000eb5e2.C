#include <string.h>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int q=1;q<=t;q++){
        int n;
        cin>>n;
        string p;
        cin>>p;
        string a;
        for (int i =0;i<p.length();i++){
            if(p[i]=='E'){
                a += 'S';
            }
            else {a+= 'E';}
        }
        cout<<"Case #"<<q<<": "<<a<<endl;
    }
}