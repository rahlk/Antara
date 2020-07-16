void main(){
int test,p;
p = 0;
scanf("%d",&test);
while(test!=0){
long long int n,a;
int i;
a = 0;
i = 1;
    test--;
    scanf("%lli",&n);
    long long int temp, rem,b;
    temp=n;
    while(n!=0){
        rem = n%10;
        if (rem ==4){
            rem = 2;
        }
        a=a+(rem*i);
        n = n/10;
        i = i*10;
}
    b = temp - a;
    printf("Case #%d: %lli %lli\n",p,a,b);
}
}