#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k;
    char data[101], x[101], y[101], temp[101],list[100][101],list1[100][101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", data);
        x[strlen(data)] = '\0';
        y[strlen(data)] = '\0';
        for (j = 0; j < strlen(data); j++)
        {
            if (data[j] == '4')
            {
                x[j] = '2';
                y[j] = '2';
            }
            else
            {
                x[j] = '0';
                y[j] = data[j];
            }
        }

        if (x[0] != '0')
        {
            strcpy(list[i],x);
            strcpy(list1[i],y);
        }
        else
        {
            for (j = 0; j < strlen(x) - 1; j++)
            {
                if (x[j] != '0') break;
            }
            
            for (k=j-1;k<strlen(x);k++){
                temp[k-j] = x[k];
            }
            temp[strlen(x)-j] = '\0';
            strcpy(list[i],temp);
            strcpy(list1[i],y);
        }
    }
    for(i=0;i<n;i++){
        printf("Case #%d: %s %s\n",i+1,list[i],list1[i]);
    }
}
