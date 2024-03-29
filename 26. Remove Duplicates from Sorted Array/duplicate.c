int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) { return 0;}
    int count = 1;  // counts the number of unique elements
    int j = 0;      // counts the number of duplicates between unique elements
    
    for (int i=0; i< numsSize-1; i++)  {
        if (nums[i] != nums[i+1]) {
            count++;
            nums[i+1-j] = nums[i+1];
        }
        else j++;
    } 
    return count;
}