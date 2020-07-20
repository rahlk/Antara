int solve(int c)
{
    LL n = 0;
    cin >> n;
    string p;
    cin >> p;
    FOR(i, 0, p.length())
    {
        if (p[i] == 'S')
            p[i] = 'E';
        else
            p[i] = 'S';
    }

    cout << "Case #" << c << ": " << p << endl;
    return 0;
}