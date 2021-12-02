#include "projectEuler.h"

void	ft_prime_number_under_limit(long long k, long long *nbArray)
{
	long long	n;
	size_t		i;

	n = 2;
	i = 0;
	while (n < k / 2)
	{
		if (ft_is_prime_number(n) || n == 2)
		{
			nbArray[i] = n;
			i++;
		}
		n++;
	}
}
