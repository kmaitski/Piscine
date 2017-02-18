#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "hello";
	char dest[105];
	unsigned int n = 150;

	printf("%s", ft_strncpy(dest, src, n));
}
