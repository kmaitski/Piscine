#include "ft_btree.h"

t_btree		*btree_create_node(void *item);

int	main(void)
{
	char 	*var;
	t_btree	*node;

	var  = "Hello";
	node = btree_create_node(var);
	printf("%s", (char *)node->item);
	return (0);
}
