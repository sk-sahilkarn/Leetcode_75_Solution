void moveZeroes(int* nums, int numsSize) {
    int j=0;
    int Left;

    for(int i = 0; i < numsSize; i++){
        Left = nums[j];
        if(nums[i]>0 || nums[i]<0){
            int temp = nums[i];
            nums[i] = Left;
            nums[j]= temp;
            j++;
        }
        printf("%d", nums[i]);
    }
    
}
