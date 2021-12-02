#include "srcs/projectEuler.h"

int		main()
{
	long long	*nbArray;
	long long	*pfArray;
	size_t	k;
	size_t	i;

	k = 13195;
	i = 0;
	nbArray = (long long *)malloc(sizeof(long long) * k / 2);
	pfArray = (long long *)malloc(sizeof(long long) * k / 2);
	ft_prime_number_under_limit(k, nbArray);
	printf("Nombre premier : ");
	while (nbArray[i])
	{
		printf("%lld, ", nbArray[i]);
		i++;
	}
	printf("\nLargest prime factor = %lld\n", ft_largest_nb_in_array(nbArray));
	return (0);
}
