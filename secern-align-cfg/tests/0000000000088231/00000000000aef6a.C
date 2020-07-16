#include <stdio.h>

int* split_num() {
    int num;
    scanf("%d", num);
    
    int *nums;
    nums = (int)malloc(2 * sizeof(int));
    nums[0] = num / 4;
    
    nums[1] = num - (nums[0] * 4);
    
    return nums;
}

int main() {
    int test_cases;
    scanf("%d", test_cases);

    for (int i = 0; i < test_cases; ++i) {
        int *nums = split_nums();
        printf("Case #%d: %d %d\n", i, nums[0], nums[1]);
    }
}

