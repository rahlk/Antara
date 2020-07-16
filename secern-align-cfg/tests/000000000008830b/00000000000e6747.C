#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t,n,p,l,k,q;
    cin>>t;
   
    for(int j=1;j<=t;j++){
        cin>>n>>l;
         int inp[l],out[l+1],arr[26],out1[l+1];
        for(int i=0;i<l;i++)cin>>inp[i];
        
        for(int i=3;i<inp[0];i=i+2){
            if(inp[0]%i==0&&inp[1]%i==0){p=i;break;}
        }
        
        out[0]=inp[0]/p;out[1]=p;out[2]=inp[1]/p;
        
        
        
        for(int i=3;i<=l;i++){
           out[i]=inp[i-1]/out[i-1];
        }
        
        for(int i=0; i<=l;i++){
            out1[i]=out[i];
        }
        sort(out1,out1+l+1);
        arr[0]=out1[0];k=1;
        for(int i=1; i<=l;i++){
            if(out1[i]==out1[i-1])continue;
            arr[k++]=out1[i];
        }
        cout<<"Case #"<<j<<": ";
        char ch;
        for(int i=0;i<=l;i++){
            for(int k=0;k<26;k++){
                if(arr[k]==out[i]){ch=k+'A';cout<<ch;break;}
            }
        }cout<<endl;
    }
	return 0;
}
