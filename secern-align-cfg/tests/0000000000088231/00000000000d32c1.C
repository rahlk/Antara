int checkDiv(int num)
{
    while(num)
    {
        num1 = num % 10;
        if(num1 == 4)
            return 0;
        num = num / 10;
    }
    return 1;
}
int main()
{
    int i,j,k;
    int N,T;
    for(i = 0; i < T; i++)
    {
        scanf("%d",&N);
        for(j =N ; j<0; j--)
        {
            if(checkDiv(j));
            {
                k = N - J;
                if(checkDiv(k))
                {
                    print("Case #" +i+": "+j+" "+k);
                }
            }
        }
    }
}