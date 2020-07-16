long int test,rem,n,temp,a,b,i,p;
p = 1;
scanf("%li",&test);
while(test!=0){
a = 0;
i = 1;
    test--;
    scanf("%li",&n);
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
    printf("Case #%li: %li %li\n",p,a,b);
}