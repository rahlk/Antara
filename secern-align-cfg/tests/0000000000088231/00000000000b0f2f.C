#include <stdio.h>
#include <malloc.h>

int* split_num() {
    int num;
    scanf("%d", &num);
    
    printf("Num to split is: %d\n", num);
    
    int *nums;
    nums = (int*)malloc(2 * sizeof(int));
    
    if (num > 4 && num % 4 != 0) {
        nums[0] = (num / 4) * 4;
        nums[1] = num - nums[0];
    } else if (num > 4 && num % 4 == 0) {
        nums[0] = (num / 2) + 1;
        nums[1] = num - nums[0];
    } else {
        nums[0] = num / 2;
        nums[1] = num - nums[0];
    }
    
    return nums;
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i) {
        int *nums = split_num();
        printf("Case #%d: %d %d\n", i, nums[0], nums[1]);
    }
}

