#include <stdio.h>
#include <stdbool.h>
bool numb_four(int liczba){

    while(liczba>1)
    {
        if(liczba%10 == 4) return false;
        else
       liczba=liczba/10;
    }
    return true;
}

int answer(int num){

for(int i=1;i<=num/2;i++){

    if(numb_four(i) && numb_four(num-i))
        return i;
}

}

int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++){
            int temp = answer(arr[i]);
        printf("Case #%d: %d %d\n",i+1, temp, arr[i] - temp);
    }
    return 0;
}

