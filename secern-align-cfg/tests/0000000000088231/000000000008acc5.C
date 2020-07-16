#include<stdio.h>
#include<math.h>
int main()
{
    int t,test;
    int val, trial, mod, i, mod1;
    i = val = trial = mod = mod1 = 0;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        scanf("%d", &val);
        i = trial = mod = mod1 = 0;
        trial = val;
        while(trial) {
            mod = trial%10;
            if(mod == 4) {
                mod1 += 2 * pow(10,i);
            }
            trial = trial/10;
            i++;
        }
        printf("Case #%d: %d %d \n", t, mod1, (val-mod1));
    }
    return 0;
}