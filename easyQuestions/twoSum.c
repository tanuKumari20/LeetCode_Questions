//Q.1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include<stdio.h>
int main(){
int* twoSum(int* nums, int numsSize, int target, int* returnSize);//given function prototype
//DMA used
int*nums=(int*)malloc(2*sizeof(int));
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        sum = nums[i]+nums[i+1];  //Adding the current element with the next element
        if(sum==target)
        {
            //RETURNING THE INDICES OF THE TWO NUMBERS
            nums[0]=i;
            nums[1]=i+1;
            *returnSize=2;
            return nums;
        }
    }
    return 0;
}






