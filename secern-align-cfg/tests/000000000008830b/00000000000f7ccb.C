#include<stdio.h>
#include<math.h>

main()
{
    int l, ti, t, i, ci, ai, j, used, k;
    char print[101];
    long long int temp, n, products[100], divisors[2], cipherHash[101], alphaHash[26];
    scanf("%d",&ti);
    for(t=0;t<ti;t++)
    {
        scanf("%lld %d",&n,&l);
        scanf("%lld",&products[0]);
        i = 3;
        ci = 0;
        while(products[0]%i != 0)
        {
            i++;
        }
        divisors[0] = i;
        divisors[1] = products[0]/i;
        for(i=1;i<l;i++)
        {
            scanf("%lld",&products[i]);
            if(products[i]%divisors[0] == 0)
            {
                cipherHash[ci] = divisors[1];
                cipherHash[ci+1] = divisors[0];
                divisors[1] = products[i]/divisors[0]; 
            }
            else
            {
                cipherHash[ci] = divisors[0];
                cipherHash[ci+1] = divisors[1];
                divisors[0] = products[i]/divisors[1];
            }
            ci++;
        }
        printf("%lld %lld\n",products[i-1],cipherHash[ci]);
        cipherHash[ci+1] = products[i-1]/cipherHash[ci];
        ci += 1;
        ai = 0;
        for(i=0;i<=ci;i++)
        {
            used = 0;
            for(j=0;j<ai;j++)
            {
                if(cipherHash[i] == alphaHash[j])
                {
                    used = 1;
                }
            }
            if(used == 0)
            {
                alphaHash[ai] = cipherHash[i];
                ai++;
            }
        }
        for(i=0;i<ai-1;i++)
        {
            for(j=0;j<ai-i-1;j++)
            {
                if(alphaHash[j]>alphaHash[j+1])
                {
                    temp = alphaHash[j];
                    alphaHash[j] = alphaHash[j+1];
                    alphaHash[j+1] = temp;
                }
            }
        }
        k=0;
        for(i=0;i<=ci;i++)
        {
            for(j=0;j<ai;j++)
            {
               if(cipherHash[i] == alphaHash[j])
               {
                   print[k] = 65+j;
                   k++;
               }
            }
        }
        print[k] = '\0';
        used = 0;
        for(j=0;j<ai;j++)
        {
            if(alphaHash[j] > n)
            {
                printf("Case #%d: -\n",t+1);
                used = 1;
                break;
            }
        }
        if(used == 0)
        {
            printf("Case #%d: %s\n",t+1,print);
        }
        fflush(stdout);
    }
}