#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

int		check_row(char *str)
{
	int		x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == '1')
			return (1);
		x++;
	}
	return (0);
}

int		main(void)
{
	char *tab[40] = {"Hello Worl2d", "Hello World 1", 0};
	printf("%d", ft_any(tab, &check_row));
}
