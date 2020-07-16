//beat my code
#include<bits/stdc++.h>
using namespace std;

bool searchit(vector<long int>arr,long int x)
{
    bool y = false;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==x)
        {
            y = true;
            break;
        }
    }
    return y;
}

int finder(vector<long int>arr, long int x)
{
    int t;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==x)
        {
            t = i;
            break;
        }
    }
    return t;
}

bool is_prime(int n)
{
    bool x =true;
    if (n <= 2)  x = false;
    else
    {
          for (int i=2; i<=n/2; i++)
        {
        if (n%i == 0)
            { x=false;
            break;

            }
        }
}
return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int i=0;

    while(t)
    {
        int n;
        cin>>n;
        int l;
        cin>>l;
        long int a[l+1];
        a[0] =0;
        for(int j=1;j<l+1;j++)
        {
            cin>>a[j];
        }
        long int temp;
        for(int j=3;j<=n;j++)
        {
            if(is_prime(j))
            {
                if(a[1]%j==0)
                    {temp = j;
                    break;
                    }
            }
        }
        long int temp2 = temp;
        long int temp3 = a[1];
        for(int j=0;j<l-1;j++)
        {
            temp = temp3/temp;
             temp3 = a[j+2];
            a[j+1] = temp;
        }
        a[l] = temp3/a[l-1];
        a[0] = temp2;

    vector<long int>arr;
            for(int k=0;k<l+1;k++)
            {
               if(!searchit(arr,a[k]))
               {
               arr.push_back(a[k]);
               }

            }
        sort(arr.begin(),arr.end());
        string b;
        b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout<<"Case #"<<i+1<<": ";
string c = "";
for(int j=0;j<l+1;j++)
{
    int p = finder(arr,a[j]);
    c +=b[p];
}
cout<<c;

          cout<<endl;


--t;
++i;
    }

}
