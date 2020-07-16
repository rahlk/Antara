
using namespace std;
long output(int T,long n[]);
int main()
{
    int T,i;
    long N[100];
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N[i];
    }
    output(T,N);
    return 0;
}

long output(int T,long n[100]) {
    int d = 0,q=0;
    long A, B;
    for (int i = 0; i < T; i++){
        long k = n[i];
        d=0;
        while (k != 0) {
            k = k / 10;
            d++;
        }
        k= n[i];
        q=0;
        for (int a = 0; a < d; a++) {
            if (k % 10 == 4) {
               q++;
               k=k/10;
            } 
            else {
                k = k / 10;
            }
        }
    
    if(q==0){
        A= n[i]-1;
        B=1;
    }
    else
    {
        A= n[i]/2;
    }
    
    long a = A;
    d=0;
    while (a != 0) {
        a = a / 10;
        d++;
    }
    a=A;
    long a2 = A ;
    long a1=1;
    int a3=1;
    for(int i =0;i<d;i++){
        if(a%10 == 4)
        {
            a=a-a1;
             a2=a2-a3;
            a3= a3*10;
            a=a/10;
        }
        else{
          a= a/10;
         a3 =a3*10;
          
        }
    }
    A=a2;
    cout<<"Case #"<<i+1<<": "<<A<<" "<<n[i]-A<<"\n";

}
}