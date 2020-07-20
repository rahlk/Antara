#include<iostream>
#include<string>
using namespace std;

int t;
string s,s1,s2;
bool flag;
int main(){
    cin >> t;
    for(int z=1;z<=t;z++){ 
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(s[i]==’4’){
                flag=true;
                s1+=’2’;
                s2+=’2’;
            }
            else{
                s1+=s[i];
                if(flag){
                    s2+=’0’;
                }
            }
        }
        if(s2.size()==0){
            int idx=0;
            for(int j=s1.size()-1;j>=0;j=j-1){
                if(s1[j]>=’1’){
                    s1[j]=(((s1[j]-’0’)-1)+’0’);
                    break;
                }
                idx++;
            }
            s2+=’1’;
            for(int j=0;j<idx;j++){
                s2+=’0’;
            }
        }
        cout << ”Case #” << t << ”: ” << s1 << ” ” << s2 << ”\n”;
    }
 return 0;   
}