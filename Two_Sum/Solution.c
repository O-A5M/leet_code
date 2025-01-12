#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
   int  i;
   int  j;
   int  *ret;

   j = 0;
   ret = malloc(2 * sizeof(int));
   if (!ret)
        *returnSize = 0;
   while (j < numsSize) 
   {
        i = j + 1;
        while (i < numsSize)
        {
            if (nums[j] + nums[i] == target)
            {
                ret[0] = j;
                ret[1] = i;
                *returnSize = 2;
                return (ret);
            }    
            i++;
        }
        j++;
   }
   return (returnSize);
}
