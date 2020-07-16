
    for(i=1;i<6;i++)
    {
    n[i]=N%10;
    N=N/10;

    if (n[i]==4)
        {
        printf("the number contain 4\n");
        g++;
        }

    }
    for(i=1;i<6;i++)
    {if (n[i]==4)
            printf("%d",n[i]-1);
    else
        printf("%d",n[i]);
    }
    for(i=1;i<6;i++)
    {
        if (n[i]==4)
x=x+pow(10,i);
    }
printf("+");
printf("%d",x);

