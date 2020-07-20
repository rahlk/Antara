    #include<stdio.h>
    #include<math.h>
    #include<string.h>
    int main()
    {
        int t;
        long int n,i;
        scanf("%d",&t);
        int cs=1;
        while(t--)
        {
            scanf("%li",&n);
            char a[2*n-2];
            scanf("%s",&a);
            for(i=0;i<(2*n-2);i++)
            {
                if(a[i]=='S')
                a[i]='E';
                else
                a[i]='S';
            }
            printf("case #%d: %s",cs,a);
            cs++;
        }
        return 0;

    }
