/*#include <unistd.h>
#include <stdio.h>*/

int    ft_sqrt(int nb)
{
	int    r;

	r = 1;
	while ((r * r <= nb) && (r <= 46340))
	{
		if (r * r == nb)
			return (r);
		r++;
	}
	return (0);
}

/*int    main(void)
{
    int    number;
    int    result;

    number = 2147395600;
    result = ft_sqrt(number);
    printf("%d", result);
    return (0);
}*/
