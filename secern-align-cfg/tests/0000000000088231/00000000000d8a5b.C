int i=1,k=0;
main()
{
    long int x,a,b,n,t,j,c,d,y;
    scanf("%ld",&t);
    while(t)
    {
    scanf("%ld",&n);
    j=n;
    while(n>=1)
    {
        x=n%10;
        if(x==4)
            x=3;
        i=i*10+x;
        n=n/10;
    }

    while(i>0)
    {
        y=i%10;
        k=k*10+y;
        i=i/10;
    }
    k=k/10;
    a=k;
    b=j-k;
    printf("%ld %ld\n",a,b);
    t--;
}}