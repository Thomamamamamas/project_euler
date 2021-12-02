#include "projectEuler.h"

void	ft_fibonnacci(long long limit, long long *nbArray)
{
	long long	prev1;
	long long	prev2;
	long long	temp;
	size_t		i;

	prev2 = 1;
	prev1 = 2;
	temp = 0;
	nbArray[0] = 2;
	i = 1;
	while (prev1 < limit)
	{
		temp = prev1;
		prev1 = prev2 + prev1;
		nbArray[i] = prev1;
		prev2 = temp;
		i++;
	}
}
