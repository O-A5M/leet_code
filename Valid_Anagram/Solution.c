bool isAnagram(char* s, char* t)
{
    int  i;
    int  set[26] = {0};

    i = 0;
    while (s[i]) 
    {
        set[s[i] - 97]+=1;
        i++;    
    }
    i = 0;
    while (t[i])
    {
        set[t[i] - 97]-=1;
        i++;
    }
    i = 0;
    while (i < 26)
    {
        if (set[i] != 0)
            return (false);
        i++;
    }
    return (true);
}
