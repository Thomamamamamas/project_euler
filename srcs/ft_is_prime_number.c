#include "projectEuler.h"

long long	ft_is_prime_number(long long n)
{
	long long	m;

	m = 2;
	if (n % 2 == 0)
		return (0);
	while (m < n / 2)
	{
		if (n % m == 0)
			return (0);
		m++;
	}
	return (1);
}
