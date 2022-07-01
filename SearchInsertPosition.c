#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int min = 0;
    int max = numsSize - 1;
    int mid = (min + max)/2;
    
    while (min < max) {
        if (target > nums[mid]) {
            min = mid + 1;
        } else {
            max = mid;
        }

        mid = (min + max)/2;
    }
    if (target <= nums[mid]) {
        return mid;
    } else {
        return (mid + 1);
    }
}

int main(void) {
    //Some quick tests:

    int testNums[] = {1,3,5,6};
    int testTarget = 5;
    int testNumsSize = 4;
    int output = searchInsert(testNums, testNumsSize, testTarget);
    printf("%d\n", output);

    int testNumsTwo[] = {1,3,5,6};
    int testTargetTwo = 2;
    int testNumsSizeTwo = 4;
    int outputTwo = searchInsert(testNumsTwo, testNumsSizeTwo, testTargetTwo);
    printf("%d\n", outputTwo);

    int testNumsThree[] = {1,3,5,6};
    int testTargetThree = 7;
    int testNumsSizeThree = 4;
    int outputThree = searchInsert(testNumsThree, testNumsSizeThree, testTargetThree);
    printf("%d\n", outputThree);
}