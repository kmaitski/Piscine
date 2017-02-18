#inclue <unistd.h>

int		ft_putchar(int i)
{
	write(1, &i, 1);
	return (0);
}
