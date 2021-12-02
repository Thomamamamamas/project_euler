#include <stdlib.h>
#include <stdio.h>

int	Sum_multiple_3_or_5(int limit)
{
	int	res;
	int	n;

	res = 0;
	n = 0;
	while (n < limit)
	{
		if (n % 3 == 0 || n % 5 == 0)
			res  = res + n;
		n++;
	}
	return (res);
}

int	main()
{
	printf("%d\n", Sum_multiple_3_or_5(1000));
	return (0);
}
