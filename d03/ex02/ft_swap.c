#include <stdio.h>

void		ft_swap(int *a, int *b)
{
	int	c  = *a;
	*a = *b;
	*b = c;
}

int		main()
{
	int	d = 2, e = 5;
	ft_swap(&d, &e);
	printf("d: %d, e: %d\n", d, e);
	return (0);
}
