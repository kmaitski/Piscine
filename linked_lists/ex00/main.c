#include "ft_list.h"

t_list		*ft_create_elm(void *data);

int	main(void)
{
	char *var;
	t_list	*elem;

	var  = "Hello";
	elem = ft_create_elm(var);
	printf("%s", (char *)elem->data);
	return (0);
}
