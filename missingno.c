

int missingNumber(int* nums, int numsSize){
     int total=0;
    for(int i=0;i<numsSize;i++){
        total+=i;
        total-=nums[i];
    }
    if(total<=0){
        return numsSize+total;
    }
    else{
        return total;
    }

}