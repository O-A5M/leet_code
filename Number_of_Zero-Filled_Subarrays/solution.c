long long zeroFilledSubarray(int* nums, int numsSize) {
    long long   ret;
    long long   index;
    long long   occu;

    ret = 0;
    index = 0;
    occu = 0;
    while (index < numsSize)
    {
        while (index + occu < numsSize && nums[index + occu] == 0)
        {
            occu++;
            ret += occu - 1;
        }
        if (occu != 0)
        {
            ret += occu;
            index += occu;
            occu = 0;
        }
        else
            index++;
    }
    return (ret);
}
