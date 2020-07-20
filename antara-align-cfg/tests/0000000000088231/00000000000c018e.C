    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
        long num,N,val,value;
        int l,i,j,k,T;
        int *a,*b,*c;
        num=0;
        i=0;
        j=0;
        k=0;
        scanf("%d",T);
        for(l=0;l<T;l++)
        {
            scanf("%d",&N);
            val=N;
            while(val)
            {
                val=val/10;
                num++;
            }
            a=(int *)calloc(num,sizeof(int));
            c=(int *)calloc(num,sizeof(int));
            b=(int *)calloc(num,sizeof(int));
            while(N)
            {
                a[i++]=N%10;
                N=N/10;
            }
            for(i=0;i<num;i++)
            {
                if(a[i]==4)
                {
                    b[j++]=2;
                    c[k++]=2;
                }
                else
                {
                    b[j++]=a[i];
                    k++;
                }
            }
            j=num;
            i=0;
            value=0;
            val=0;
            while(i<j)
            {
                if(b[i]!=0)
                    val=(val*10)+b[i];
                if(c[i]!=0)
                    value=(value*10)+c[i];
            
                i++;
            }
            printf("%d %d\n",val,value);
            free(a);
            free(b);
            free(c);
        }

    }