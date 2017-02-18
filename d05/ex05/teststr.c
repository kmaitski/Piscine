#include <stdio.h>
#include <string.h>


int main()
{
	const char haystack[200] = "This is a test to make sure I know";
	const char needle[100] = "tes";
	char *ret;

	ret = strstr(haystack, needle);

	printf("The substring is: %s\n", ret);
				      
	return(0);
}
