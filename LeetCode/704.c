#include <stdio.h>

int search(int* nums, int numsSize, int target){
    int l = 0, r = numsSize - 1;
    while (l <= r) {
        int m = (l+r)/2;
        if (nums[m] < target) {
            l = m + 1;
        } else if (nums[m] > target) {
            r = m - 1;
        } else {
            return m;
        }
    }
    return -1;
}

int main() {
    int arr[10000] = {-1,0,3,5,9,12};
    printf("%d", search(arr, 6, 9));
    return 0;
}