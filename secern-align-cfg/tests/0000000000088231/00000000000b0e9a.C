    #include <stdio.h>
    #include <math.h>
    #include <string.h>
    unsigned char a_digits[10000]={0};
    //unsigned char b_digits[10000]={0};
    unsigned char n_digits[10000]={0};
    unsigned int n_count=0;
    unsigned long n=0,a=0,b=0;
    int t=0;
    void find_count();
    void find_a();
    
    int main() {
      scanf("%d",&t);
      for (int i = 1; i <= t; ++i) 
      {
        scanf("%lu",&n);
        find_count();
        find_a();
        b=n-a;
        printf("Case #%d: %lu %lu\n",i,a,b);
        n=0;
        a=0;
        b=0;
        memset(a_digits,0,n_count);
        memset(n_digits,0,n_count);
        n_count=0;
      }
      return 0;
    }
    
    void find_a()
    {
        unsigned int i=0;
        for(i=0;i<n_count;i++)
        {
            if(n_digits[i] == 4)
            {
               a_digits[i]=3;
               continue;
            }
            a_digits[i]= n_digits[i];
        }
        
        for(i=0;i<n_count;i++)
        {
            a = a + (pow(10,i)) * a_digits[i];
        }
    }
    
    void find_count()
    {
        unsigned long temp=n,i=0;
        while(1)
        {
            n_count++;
            n_digits[i]=temp%10;
            i++;
            temp=temp/10;
            printf("%d ",n_digits[i]);
            if(temp == 0)
                break;
        }
    }