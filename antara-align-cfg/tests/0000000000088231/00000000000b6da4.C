#include<iostream>
#include<math.h>

int div(int n)
{
    int c2 = 0 ;
    while(n%10 != 4)
    {
        n = n/10;
        c2 += 1;
    }
    return c2;
}

int main()
{
    int k=0 , t, a , s , b , n , c1 , c2 , i , result[300];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        a=n/2;
        c1=0;
        s=a;
        while(s>=0)
        {
            c1+=1;
            s/=10;
        }
        s=a ;
        c2 = div(s);
        while(c2 != c1)
        {
            s += pow(10,c2);
            c2 = div(s);
        }
        a = s;
        b = n-a;
        
        result[k] = a;
        k++;
        result[k] = b;
        k++;
        
    }
    
    for(i=0;i<k;i+=2)
    {
        printf("Case #%d : %d %d" , i/2 , result[i] , result[i+1]);
    }
    return 0;
}
