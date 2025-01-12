int prefixCount(char** words, int wordsSize, char* pref)
{
    int i;
    int ret;
    int b;

    ret = 0;
    b = 0;
    while (b < wordsSize)
    {
        i = 0;
        while (pref[i])
        {
            if (pref[i] == words[b][i])
                i++;
            else
                break;
        }
        if (pref[i] == '\0')
            ret++;
        b++;
    }
    return (ret);
}
