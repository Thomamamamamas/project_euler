long	ft_smallestMultiple(long min, long max)
{
	long	n;
	long	res;
	int		is_searching;

	res = max + 1;
	while (res)
	{
		n = min;
		is_searching = 1;
		while (n <= max && is_searching == 1)
		{
			if (res % n != 0)
				is_searching = 0;
			n++;
		}
		if (is_searching == 1)
			return (res);
		res++;
	}
	return (0);
}
#include <stdio.h>

int	main()
{
	printf("%ld\n", ft_smallestMultiple(1, 20));
	return (0);
}
