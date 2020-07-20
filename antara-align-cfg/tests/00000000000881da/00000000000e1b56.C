#include<stdio.h>

int main()

{

    long long int t,e,f,g,h,z,i,j,af,bf,d,S,E,found;

    int n;

    while(1)

    {

        scanf("%lld",&t);

        if(t<1 || t>100) continue;

        else break;

    }

    long long int x[t];

    char a[t][100000];

    e=0;

    while(e<t)

    {

        scanf("%lld",&x[e]);

        n=x[e];

        while(1)

        {

            scanf("%s",&a[e]);
            g=0;

            h=0;

            S=0;

            E=0;

            while(a[e][g]!='\0')

            {

                if(a[e][g]!='S' && a[e][g]!='E')

                {

                    h=1;

                    break;

                }

                if(a[e][g]=='S') S++;

                if(a[e][g]=='E') E++;

                g++;

            }

            if(h==1)

            {                
		printf("Input should contain either uppercase 'S' or uppercase 'E'\n");

                continue;

            }

            if(S!=n-1 || E!=n-1 || S+E!=(2*n)-2)

            {

                printf("String should contain exactly %d E characters and exactly %d S characters\n",n-1,n-1);

                continue;

            }

	    break;
        }

	++e;
    }

    e=0;

    while(e<t)

    {

        printf("Case #%lld: ",e+1);

        f=0;

        while(a[e][f]!='\0')

        {

            if(a[e][f]=='S') printf("E");

            else printf("S");

            ++f;

        }

        printf("\n");

        ++e;

    }

    return 0;

}