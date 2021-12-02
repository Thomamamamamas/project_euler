#include "projectEuler.h"

long long	ft_sum_even_nb_array(long long *nbArray)
{
	long long	res;
	size_t		n;

	res = 0;
	n = 0;
	while (nbArray[n])
	{
		if (nbArray[n] % 2 == 0)
		{
			res = res + nbArray[n];
		}
		n++;
	}
	return (res);
}
