#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[50] = "This is a test to make sure I know";
	char to_find[50] = "tes";

	printf("%s", ft_strstr(str, to_find));
}
