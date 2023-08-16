/*#include <unistd.h>
#include <stdio.h>*/

int	ft_interative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (1 <= nb)
	{
		r = r * i;
		i++;
	}
	return(r);
}

/*int	main(void)
{
	int numero = 5;
	int resultado = ft_interative_factorial(numero);

	printf("Resultado de %d e: %d\n", numero, resultado);
	return (0);
}*/
