double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int buff[nums1Size + nums2Size];
    int n1 = 0;
    int n2 = 0;
    int ret;

    for (int i = 0; i < (nums1Size + nums2Size); i++)
    {
        if ((n1 < nums1Size && n2 < nums2Size) &&
            (nums1[n1] < nums2[n2]))
        {
            buff[i] = nums1[n1];
            n1++;
        }
        else if ((n1 < nums1Size && n2 < nums2Size) &&(nums1[n1] > nums2[n2]))
        {
            buff[i] = nums2[n2];
            n2++;
        }
        else if (n1 < nums1Size && n2 < nums2Size)
        {
            buff[i] = nums1[n1];
            i++;
            buff[i] = nums2[n2];
            n1++;
            n2++;
        }
        else if (n1 == nums1Size && n2 < nums2Size)
        {
            buff[i] = nums2[n2];
            n2++;
        }
        else if (n1 < nums1Size && n2 == nums2Size)
        {
            buff[i] = nums1[n1];
            n1++;
        }
    }
    if ((nums1Size + nums2Size) % 2 != 0)
    {
        ret = buff[(nums1Size + nums2Size) / 2];
        return (ret);
    }
    double t = (buff[(nums1Size + nums2Size) / 2] + buff[((nums1Size + nums2Size) / 2) - 1]);
    return (t / 2);
}
