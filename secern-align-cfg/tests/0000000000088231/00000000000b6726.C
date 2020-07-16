#include<stdio.h>
int main()

{

    long long int t,n,a,b,e,f,g,h,z,i,j,af,bf,d,found;

    while(1)

    {

        printf("Enter the number of testcases :");

        scanf("%lld",&t);
        if(t<1 || t>100) continue;
        else break;

    }
    
e=1;

    while(e<=t)

    {

        while(1)

        {

            printf("Enter the prize :");

            scanf("%lld",&n);
            f=0;

            g=n;

            while(g>0)

            {

                g/=10;

                f++;

            }

            g=n;

            h=0;

            while(g>0)

            {

                z=g%10;

                if(z==4) break;

                g/=10;

                h++;

            }

            if(h==f)

            {

                printf("Prize should contain digit 4\n");

                continue;

            }

	    else
	    {
		break;
	    }
        }

        a=1;

        found=0;
	af=0;
        while(a<n)

        {

            g=a;

	    af=0;
            while(g>0)

            {


                z=g%10;

                if(z==4)

                {

                    af=1;

                    break;

                }

                g/=10;

            }

	    if(af==1)
	    {
		a++;
		continue;
	    }
            b=n-a;
            g=b;

	    bf=0;
            while(g>0)

            {

                z=g%10;

                if(z==4)

                {

                    bf=1;
                    break;

                }
		g/=10;

            }

	    if(bf==1)
	    {
		a++;
		continue;
	    }
            found=1;

            break;

        }

	if(found==1)
	{
        printf("Case #%lld: %lld %lld\n",e,a,b);

	}


        ++e;

    }

    return 0;

}