//#include <unistd.h>
//#include <stdio.h>

int    ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 1;
	r = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (i++ < power)
		r *= nb;
	return (r);
}

/*int    main(void)
{
    int base = 7;
    int exp = 8;

    int result = ft_iterative_power(base, exp);

    printf("%d^%d = %d\n", base, exp, result);

    return (0);
}*/
