/*#include <unistd.h>
#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

/*int    main(void)
{
    int n = 10;

    int result = ft_fibonacci(n);

    printf("Fibonacci de %d é: %d\n", n, result);

    return (0);
}*/
