#include <stdio.h>

int main()
{
int n_of_TestCases,testlp;
scanf("%d\n",&n_of_TestCases);

for(testlp=1 ; testlp<=n_of_TestCases ; testlp++)
{
    long int input;
    scanf("%ld\n",&input);
    long int copy = input;
    int input_dig_Arr[20];
    int second_dig_Arr[20];
    int i,n_of_dig;

    for(i=0;copy>0;i++,n_of_dig++)
    {
        input_dig_Arr[i] = copy%10;
        copy/=10;

    }

    for(i=0;i<=n_of_dig;i++)
        if(input_dig_Arr[i]==4)
          {
            input_dig_Arr[i]=3;
            second_dig_Arr[i]=1;
          }

        else
            second_dig_Arr[i]=0;

long int reconstr_sec_num = 0;

    for(i=0;i<n_of_dig;i++)
        reconstr_sec_num = reconstr_sec_num*10 + second_dig_Arr[i];


        printf("Case #%d: %ld\t%ld\n",testlp,input,reconstr_sec_num);

  }

  return 0;
}
