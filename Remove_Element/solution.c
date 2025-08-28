int removeElement(int* nums, int numsSize, int val) {
    int ret = 0;
    int flag = 0;
    int tmp = 0;
    int len = numsSize - 1;
    
    if (numsSize == 0)
        return (0);
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            flag = 1;
            while (len > i && nums[i] == nums[len])
                len--;
            if (len > i)
            {
                tmp = nums[i];
                nums[i] = nums[len];
                nums[len] = tmp;
            }
            if (len < i)
                break ;
        }
        ret++;
    }
    if (flag == 0)
        return (ret);
    return (ret - 1);
}
