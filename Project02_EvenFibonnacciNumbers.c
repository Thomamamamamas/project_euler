#include "srcs/projectEuler.h"

int	main()
{
	long long	*nbArray;
	long long	limit;

	limit = 4000000;
	nbArray = (long long *)malloc(sizeof(long long) * limit / 2);
	ft_fibonnacci(limit, nbArray);
	printf("%lld\n", ft_sum_even_nb_array(nbArray));
	return(0);
}

