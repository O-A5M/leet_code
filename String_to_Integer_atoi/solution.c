int myAtoi(char* s) {
    long    ret = 0;
    short   sign = 1;
    int     i = 0;

    while (s[i] && (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
        i++;
    if (s[i] && (s[i] == '-' || s[i] == '+'))
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (s[i] && (s[i] <= '9' && s[i] >= '0'))
    {
        if (ret < INT_MIN || ret > INT_MAX)
            break ;
        ret = (s[i] - 48) + ret * 10;
        i++;        
    }
    ret *= sign;
    if (ret < INT_MIN)
        return (INT_MIN);
    if (ret > INT_MAX)
        return (INT_MAX);
    return (ret);
}
