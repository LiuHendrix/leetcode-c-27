int removeElement(int* nums, int numsSize, int val) {
    int k =0;
    int newsize=numsSize;
    for (int i=0; i<numsSize; i++) {
        if (nums[i] == val) {
            k++;
            newsize--;
        }
        else {
            nums[i-k] = nums[i];
        }
    }
    return newsize;
}