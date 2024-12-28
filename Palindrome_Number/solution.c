#include <stdlib.h>

static int	ft_intlen(int n)
{
	int			ret;
	long int	nb;

	ret = 0;
	nb = n;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		ret++;
	}
	return (ret);
}

static char	*ft_itoa(int n)
{
	char			*ret;
	int				i;
	long int		nb;

	nb = n;
	i = ft_intlen(n) - 1;
	ret = (char *) malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (ret == NULL)
		return (NULL);
	ret[ft_intlen(n)] = '\0';
	if (nb == 0)
		ret[i] = '0';
	while (nb > 0)
	{
		ret[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	return (ret);
}

int check(char *s)
{
    int i;
    int j;

    i = strlen(s) - 1;
    j = 0;
    while (s[j] && s[j] == s[i])
    {
        i--;
        j++;
    }
    if (s[j] == '\0')
        return (1);
    return (0);
}

bool isPalindrome(int x)
{
    char    *test;

    if (x < 0)
        return (false);
    test = ft_itoa(x);
    if (check(test) == 1)
        return (true);
    return (false);
}
