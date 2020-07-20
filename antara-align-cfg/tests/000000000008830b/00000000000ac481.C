#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
#define MAXN 1000002
using namespace std;
int T,K,L;
long long int N;
long long int a[105];
//char s[MAXN],a[MAXN],b[MAXN];

long long int gcd(long long int a,long long int b)
{
     return b?gcd(b,a%b):a;
}
void solve(){
    //int s[L+1];
    //int n = 0;
    vector<long long int>v ;
    long long int x = gcd(a[0],a[1]);
    v.push_back(a[0]/x);
    v.push_back(x);
    for(int i=1;i<L;++i){
        x = a[i]/x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();++i){
        if(v[i]==v[i-1]){
            v.erase(v.begin()+i);
            --i;
        }
    }
    x = gcd(a[0],a[1]);
    for(int i=0;i<v.size();++i){
        if(v[i]==a[0]/x){
            printf("%c",char(65+i));
            break;
        }
    }
    for(int i=0;i<v.size();++i){
        if(v[i]==x){
            printf("%c",char(65+i));
            break;
        }
    }
    for(int i=1;i<L;++i){
        x = a[i]/x;
        for(int j=0;j<v.size();++j){
            if(v[j]==x){
                printf("%c",char(65+j));
                continue;
            }
        }
    }
    putchar('\n');
}
int main(){

    scanf("%d",&T);
    //Ptable();
    for(int c=1;c<=T;++c){
        scanf("%I64d%d",&N,&L);
        for(int i=0;i<L;++i)
            scanf("%I64d",&a[i]);
        printf("Case #%d: ",c);
        solve();
        //printf("%d\n",ans);
    }
    return 0;
}
