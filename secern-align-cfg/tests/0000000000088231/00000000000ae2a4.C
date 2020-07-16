#include <stdio.h>
#include <math.h>

int main(){
    int n_cases;
    int case = 1;
    scanf("%d", &n_cases);
    while(case!=n_cases){
        int target;
        scanf("%d", &target);
        int a = target-1;
        printf("Case #%d: %d %d", case, a, 1);
    }
}