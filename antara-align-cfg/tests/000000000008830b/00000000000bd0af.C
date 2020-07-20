#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main() {
	// your code goes here
	 int n,i,t,p,k,j,c,g;
	vector< int> v,v1,v2,v3;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n>>p;
	    for(j=0;j<p;j++){
	        cin>>k;
	        v.push_back(k);
	    }
	    for(j=0;j<p-1;j++){
	        k=gcd(v[j],v[j+1]);
	        if(j==0||j==p-2){
	            if(j==0){
	                v1.push_back(v[j]/k);
	                v1.push_back(k);
	            }
	            if(j==p-2){
	                v1.push_back(k);
	                v1.push_back(v[j+1]/k);
	                
	            }
	        }else{
	            v1.push_back(k);
	        }
	        
	    }
	     k=v1.size();
	     for(j=0;j<k;j++){
	         v3.push_back(v1[j]);
	     }
	    sort(v1.begin(),v1.end());
	    v2.push_back(v1[0]);
	    g=0;
	   
	    for(j=1;j<k;j++){
	        if(v1[j]!=v2[g]){
	            v2.push_back(v1[j]);
	            g++;
	            
	        }
	    }
	    
	   
	    cout<<"Case #"<<i+1<<": ";
	    for(j=0;j<k;j++){
	        for(c=0;c<26;c++){
	            if(v3[j]==v2[c]){
	                 if(c==0){
	            cout<<"A";
	        }
	        if(c==1){
	            cout<<"B";
	        }
	        if(c==2){
	            cout<<"C";
	        }
	        if(c==3){
	            cout<<"D";
	        }
	        if(c==4){
	            cout<<"E";
	        }
	        if(c==5){
	            cout<<"F";
	        }
	        if(c==6){
	            cout<<"G";
	        }
	        if(c==7){
	            cout<<"H";
	        }
	        if(c==8){
	            cout<<"I";
	        }
	        if(c==9){
	            cout<<"J";
	        }
	        if(c==10){
	            cout<<"K";
	        }
	        if(c==11){
	            cout<<"L";
	        }
	        if(c==12){
	            cout<<"M";
	        }
	        if(c==13){
	            cout<<"N";
	        }
	        if(c==14){
	            cout<<"O";
	        }
	        if(c==15){
	            cout<<"P";
	        }
	        if(c==16){
	            cout<<"Q";
	        }
	        if(c==17){
	            cout<<"R";
	        }
	        if(c==18){
	            cout<<"S";
	        }
	        if(c==19){
	            cout<<"T";
	        }
	        if(c==20){
	            cout<<"U";
	        }
	        if(c==21){
	            cout<<"V";
	        }
	        if(c==22){
	            cout<<"W";
	        }
	        if(c==23){
	            cout<<"X";
	        }
	        if(c==24){
	            cout<<"Y";
	        }
	        if(c==25){
	            cout<<"Z";
	        }
	            }
	        }
	    }
	    
	cout<<endl;
	    v.clear();
	    v1.clear();
	    v2.clear();
	    v3.clear();
	}
	return 0;
}

