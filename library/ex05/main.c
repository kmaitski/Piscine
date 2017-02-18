int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		ft_intcmp(int x, int y)
{
	int z;

	z = x - y;
	return (z);
}

int		main(void)
{
	int		tab[] = { 6, 7, 4, 3, 2, 1 };

	printf("%d",ft_is_sort(tab, 6, &ft_intcmp));
}
