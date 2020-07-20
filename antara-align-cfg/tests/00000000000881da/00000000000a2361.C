#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t_count = 0, n = 0, a = 0;
    char * ch = NULL;
    scanf("%d", &t_count);
    for(int i = 0, i<t_count; i++)
    {
        a = 0;
        scanf("%d", &n);
        ch = (char*)malloc((2*n-1)*sizeof(char));
        scanf("%[^\n]%*c", ch);
        printf("Case #%d: ", i+1);
        while(ch[a]!= '\0')
        {
            if(ch[a] == 'S')
                printf("E");
            else
                printf("S");
            a++;
        }
        printf("\n");
        free(ch);
    }
    return 0;
}