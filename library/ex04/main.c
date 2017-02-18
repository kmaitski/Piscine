#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		check_row(char *str)
{
	int		x;
	int 	y;
	
	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (str[x] == '1')
			return (1);
		x++;
	}
	return (y);
}

int		main(void)
{
	char *tab[40] = {"Hello Wor11l2d", "Hello World 1", 0};
	printf("%d", ft_count_if(tab, &check_row));
}
