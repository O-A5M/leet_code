int strStr(char* haystack, char* needle)
{
    int i;
    int j;

    i = 0;
    while (haystack[i])
    {
        j = 0;
        while (haystack[i + j] == needle[j] && needle[j])
        {
            j++;
        }
        if (needle[j] == '\0')
            return (i);
        i++;
    }
    return (-1);
}
