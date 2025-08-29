int lengthOfLongestSubstring(char* s) {
    int map[255];
    int ret = 0;
    int start = 0;

    memset(map, -1, 255 * 4);
    for (int i = 0; s[i]; i++)
    {
        if (map[s[i]] == -1)
        {
            map[s[i]] = i;
            start++;
        }
        else
        {
            if (ret < start)
                ret = start;
            start = 0;
            i = map[s[i]];
            memset(map, -1, 255 * 4);
        }
    }
    if (start > ret)
        return (start);
    return (ret);
}
