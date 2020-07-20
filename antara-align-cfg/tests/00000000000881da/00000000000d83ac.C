#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      int n;
      cin>>n;
      string a;
      cin>>a;
	  printf("Case #%d: ",i+1);
	  for(int j=0;j<n;j++)
      {  
 		if(a[j]=='S')
 		printf("E");
 		else
        printf("S");
	  }
  
      printf("\n");
  }
}
