#include<stdio.h>

int main()

{

    long long int t,n,a,b,e,f,g,h,z,i,j,af,bf,d,found;

    while(1)

    {

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

	g=x[e];
	f=0;
	while(g>0)
	{
	    g/=10;
	    f++;
	}
	int a[f];
	int b[f];
	g=x[e];
	h=f-1;
	while(g>0)
	{
	    if(g%10==4)
	    {
		i=3;
		j=1;
	    }
	    else
	    {
		i=g%10;
		j=0;
	    }
	    a[h]=i;
	    b[h--]=j;
	    g/=10;
	}
	printf("Case #%lld: ",e+1);
	h=0;
	while(h<f)
	{
	    printf("%d",a[h]);
	    h++;
	}
	printf(" ");
	h=0;
	while(h<f)
	{
	    printf("%d",b[h]);
	    h++;
	}
	printf("\n");
	e++;
    }

    return 0;

}