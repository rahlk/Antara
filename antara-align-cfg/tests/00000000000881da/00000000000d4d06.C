#include<stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int test;
    scanf("%d",&test);
    
    for(int i=0;i<test;i++)
    {
        int n;
        scanf("%d",&n);
        
        char input[2*n-2];
        scanf("%s",input);

        /*for(int j=0;j<2*n-2;j++)
        {
            scanf("%c",input[j]);
        }*/
        char* array[2*n-2];
        for(int j=0;j<2*n-2;j++)
        {
            array[j] = "a";
        }
        for(int j=0;j<n-1;j++)
        {
            array[j] = "S";
        }
        for(int j=n-1;j<2*n-2;j++)
        {
            array[j] = "E";
        }
        
        for(int j=0;j<2*n-3;j++)
        {
            if(input[j] == *array[j] && input[j+1] == *array[j+1])
            {
                char *t= array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
        printf("Case #%d: ",i+1);
        for(int j=0;j<2*n-2;j++)
        {
            printf("%c",*array[j]);
        }
        printf("\n");
    }
}
