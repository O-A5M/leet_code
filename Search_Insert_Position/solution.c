int searchInsert(int* nums, int numsSize, int target)
{
    int i;

    i = 0;
    while (i < numsSize)
    {
        if (nums[i] == target)
            break ;
        if (nums[i] > target)
            break ;
        i++;
    }
    return (i);
}
