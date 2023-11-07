int     count(int nbr)
{
        int     i;

        i = 1;
        if (nbr < 0)
        {
                nbr = nbr * -1;
                i++;
        }
        while (nbr > 9)
        {
                nbr = nbr / 10;
                i++;
        }
        return (i);
}

char    *ft_strev(char *str)
{
        int     i;
        int     j;
        char    tmp;

        i = 0;
        while(str[j])
                j++;
        j--;
        while (i < j)
        {
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
                i++;
                j--;
        }
        return (str);

}

char    *itoa(int nbr)
{
        char    *res;
        int     i;
        int     j;
	long int	nb;

	nb = nbr;
        i = 0;
        j = 0;
        res = malloc(sizeof(char) * count(nb) + 1);
        if (!res)
                return (0);
        if (nb < 0)
        {
                nbr *= -1;
                j++;
        }
        while (nb > 9)
        {
                res[i] = (nb % 10) + '0';
                nb = nb / 10;
                i++;
        }
        res[i] = (nb % 10) + '0';
        if (j == 1)
        {
                i++;
                res[i] = '-';
        }
        i++;
        res[i] = '\0';
        return (ft_strev(res));

}
