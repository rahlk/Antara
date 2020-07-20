#include <stdio.h>

int main(){
    int test_numb;
    int test_dim;
    char test_str[50010];
    char res[50010];
    scanf("%d",&test_numb);
    for(int i = 0; i < test_numb; i++)
    {
        scanf("%d",&test_dim);
        scanf("%s",test_str);
        for(int j = 0; j < 2*test_dim - 2; j++)
        {
            if(test_str[j] == 'S')
            {
                res[j]='E';
            }
            else
            {
                res[j]='S';
            }
            res[j+1]=0;
        }
        printf("Case #%d: %s\n",i+1,res);
    }
}