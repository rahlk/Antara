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
    int x[t];
    e=0;
    while(e<t)
    {
	while(1)

        {

            printf("Enter the prize :");

            scanf("%lld",&x[e]);
            f=0;

            g=x[e];

            while(g>0)

            {

                g/=10;

                f++;

            }

            g=x[e];

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

    
    e++;
    }
    
e=0;

    while(e<t)

    {

        
        a=1;

        found=0;
	af=0;
        while(a<x[e])

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
            b=x[e]-a;
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
        printf("Case #%lld: %lld %lld\n",e+1,a,b);

	}


        ++e;

    }

    return 0;

}