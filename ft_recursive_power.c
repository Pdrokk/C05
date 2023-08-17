//#include <stdio.h>
//#include <unistd.h>

int    ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*int    main(void)
{
    int base = 3;
    int exp = 2;

    int result = ft_recursive_power(base, exp);

    printf("%d^%d = %d\n", base, exp, result);

    return (0);
}*/
