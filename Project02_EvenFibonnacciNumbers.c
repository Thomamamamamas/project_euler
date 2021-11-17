#include <stdio.h>

int	Even_fibonnacci_number(int	limit)
{
	int	res;
	int	prev1;
	int	prev2;
	int	temp;;

	prev2 = 1;
	prev1 = 2;
	temp = 0;
	res = prev1;
	while(prev1 < limit)
	{
		temp = prev1;
		prev1 = prev2 + prev1;
		prev2 = temp;
		if (prev1 % 2 == 0 )
			res = res + prev1;
	}
	return (res);
}
/*
int	main()
{
	printf("%d\n", Even_fibonnacci_number(4000000));
	return(0);
}
*/
