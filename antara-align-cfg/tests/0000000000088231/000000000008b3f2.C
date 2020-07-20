int checkFour(int q)
{
    if (strstr(itoa(q), "4"))
        return 0;
    return 1;
}

int main(void)
{
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &p);
        for (j = 1; j < n; j++)
        {
            if (checkFour(j) && checkFour(n - j))
            {
                printf("Case #%d: %d %d", i, j, n - j);
                break ;
            }
        }
    }
}