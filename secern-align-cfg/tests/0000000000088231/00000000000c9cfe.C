static int i;
 void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        i++;
        scanf("%d",&n);
        c(n);

    }
}
void c(int n)
{

    int r,m;
    m=n;
    while(m>0)
    {
        r=m%10;
        if(r==4)
        {
         d(n);
         break;
        }
        m=m/10;
    }

}
void d(int m)
{
    int a=m/4;
    int b=(m-a);
    printf("case #%d: %d %d\n",i,a,b);
}
