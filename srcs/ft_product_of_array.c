#include "projectEuler.h"

long long	ft_product_of_array(long long *nbArray)
{
	size_t		n;
	long long	res;

	if (!nbArray)
		return (0);
	res = 1;
	n = 0;
	while (nbArray[n])
	{
		res = res * nbArray[n];
		n++;
	}
	return (res);
}
