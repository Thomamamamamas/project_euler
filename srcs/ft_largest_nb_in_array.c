#include "projectEuler.h"

long long	ft_largest_nb_in_array(long long *nbArray)
{
	size_t		n;
	long long	largest;

	n = 0;
	largest = -92233720368547758;
	while (nbArray[n])
	{
		if (nbArray[n] > largest)
			largest = nbArray[n];
		n++;
	}
	return (largest);
}
