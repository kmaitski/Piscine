#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[50] = "hi";
	char src[50] = "hello";

	printf("%s", ft_strcpy(dest, src));
}
