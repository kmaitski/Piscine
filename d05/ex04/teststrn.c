#include <stdio.h>
#include <string.h>

int main()
{
	char src[];
	char dest[20];
		    
	memset(dest, '\0', sizeof(dest));
	strcpy(src, "hello");
	strncpy(dest, src, 2);

	printf("%s", dest);
					     
	return(0);
}
