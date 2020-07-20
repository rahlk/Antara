#include<stdio.h>
#include<math.h>

int fun(int n)
{
   int four=0;
   while(n!=0)
    {
        four=n%10;
        if(four==4)
        {

            return 1;
        }
        n=n/10;
    }
    return 0;
}
int find(int n)
{
    int four=0;
    int count=0;
    while(n!=0)
    {
        four=n%10;
        if(four==4)
            return count;
        n=n/10;
        count++;
    }
}

int main()
{
    int N=0;
    scanf("%d",&N);
    //printf("\n");
    int j=0;
    int k=0;
    for(j=1;j<=N;j++){
    int flag2=0;
    int flag=0;
    int num=0;
    int num1=0,num2=0;
    scanf("%d",&num);
    int temp=num,four=0;
    int prime=1;
    while(temp!=0)
    {
        four=temp%10;
        if(four==4)
        {
            flag=1;
            break;
        }
        temp=temp/10;
    }
    int i=0;
    if(flag){

    int k=0;
   /* for(k=2;k<=sqrt(num);k++)
    {
        if(num%k==0)
            prime=0;
    }
    if(prime==0){
    for(i=2;i<num;++i)
    {
        temp=num;
        if(temp%i==0)
        {
        temp=num/i;
        }
        else{
            continue;
        }

        int s1=fun(temp);
        int s2=fun(num-temp);
        if(s1!=1 && s2!=1)
        {
            num1=temp;
            num2=num-temp;
            printf("Case #%d: %d %d\n",j,num1,num2);
            flag2=1;
            break;

        }
    }
    if(!flag2)
    {
        int count=0;
        int i=0;
        temp=num;
       do{

            count++;
            temp=temp/10;
        }while(temp);
        int a[count];
        temp=num;
        do
        {
            a[i++]=(temp%10);
            temp=temp/10;

        }while(temp);
        int b[count];
        int k=0;
        for(k=0;k<count;k++)
        {
            if(a[k]==4)
                b[k]=3;
            else
                b[k]=a[k];
        }
        int temp1=0;
        //for(i=0;i<count;++i)
          //  printf("%d",b[i]);
        for(i=0;i<count;++i)
        {
            temp1=temp1*10+b[i];
        }
        //temp1=temp1*10+1;
        printf("Case #%d: %d %d\n",j,temp1,num-temp1);

    }
    //}
    else
    {*/
        int count=0;
        int i=0;
        temp=num;
       do{

            count++;
            temp=temp/10;
        }while(temp);
        int a[count];
        temp=num;
        do
        {
            a[i++]=(temp%10);
            temp=temp/10;

        }while(temp);
        int b[count];
        //int k=0;
        for(k=0;k<count;k++)
        {
            if(a[k]==4)
                b[k]=3;
            else
                b[k]=a[k];
        }
        int temp1=0;
        //for(i=0;i<count;++i)
          //  printf("%d",b[i]);
        for(i=count-1;i>=0;--i)
        {
            temp1=temp1*10+b[i];
        }
        //temp1=temp1*10+1;
        printf("Case #%d: %d %d\n",j,temp1,num-temp1);

    }
   // }
    else
        printf("Case #%d: %d\n",j,num);

    }
    return 0;

}
