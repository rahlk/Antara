#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buf[21];
int buf_used;

void solve_prob(int i){

int input, done, dtwo, dthree, dfour, dfive, dsix, dseven, deight, dnine;
int o1 = 0;
int o2 = 0;

scanf("%d", &input);
done = input%10;//rightmost digit
input/=10;
dtwo = input%10;
input/=10;
dthree = input%10;
input/=10;
dfour = input%10;
input/=10;
dfive = input%10;
input/=10;
dsix = input%10;
input/=10;
dseven = input%10;
input/=10;
deight= input%10;
input/=10;
dnine = input%10;
input/=10;

if(dfive!=0&&dfive!=4)
{
    dfive = dfive*10000;
    o1 = o1+dfive;
}
else if(dfive == 4)
{
    dfive = 2*10000;
    o1 = o1+dfive;
    o2 = o2+dfive;
}

if(dfour!=0&&dfour!=4)
{
    dfour = dfour*1000;
    o1 = o1+dfour;
}
else if(dfour == 4)
{
    dfour = 2*1000;
    o1 = o1+dfour;
    o2 = o2+dfour;
}

if(dthree!=0&&dthree!=4)
{
    dthree = dthree*100;
    o1 = o1+dthree;
}
else if(dthree == 4)
{
    dthree = 2*100;
    o1 = o1+dthree;
    o2 = o2+dthree;
}

if(dtwo!=0&&dtwo!=4)
{
    dtwo = dtwo*10;
    o1 = o1+dtwo;
}
else if(dtwo == 4)
{
    dtwo = 2*10;
    o1 = o1+dtwo;
    o2 = o2+dtwo;
}

if(done!=0&&done!=4)
{
    done = done*1;
    o1 = o1+done;
}
else if(done == 4)
{
    done = 2;
    o1 = o1+done;
    o2 = o2+done;
}

if(dsix!=0&&dsix!=4)
{
    dsix = dsix*100000;
    o1 = o1+dsix;
}
else if(dsix == 4)
{
    dsix = 2*100000;
    o1 = o1+dsix;
    o2 = o2+dsix;
}

if(dseven!=0&&dseven!=4)
{
    dseven = dseven*1000000;
    o1 = o1+dseven;
}
else if(dseven == 4)
{
    dseven = 2*1000000;
    o1 = o1+dseven;
    o2 = o2+dseven;
}

if(deight!=0&&deight!=4)
{
    deight = deight*10000000;
    o1 = o1+deight;
}
else if(deight == 4)
{
    deight = 2*10000000;
    o1 = o1+deight;
    o2 = o2+deight;
}

if(dnine!=0&&dnine!=4)
{
    dnine = dnine*100000000;
    o1 = o1+dnine;
}
else if(dnine == 4)
{
    dnine = 2*100000000;
    o1 = o1+dnine;
    o2 = o2+dnine;
}

printf("Case #%d: %d %d\n", i, o1, o2);

}

int main()
{
    int num_cases;
    scanf("%d", &num_cases);

    for(int i=1;i<=num_cases;i++)
    {
        solve_prob(i);
    }

    return 0;
}
