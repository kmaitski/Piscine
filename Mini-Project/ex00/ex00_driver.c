#include <stdio.h>

int		match(char *s1, char *s2);

void	test(char *s1, char *s2)
{
	printf("%s & %s -> %d\n", s1, s2, match(s1, s2));
}

int		main(void)
{
	test("main.c", "*.c");
	test("cat ", "*a*");
	test("catfffffff", "*a*");
	test("asoghaoihjeroijgoisdjgoija", "*a");
	test("ajjjjjjjjajjjjjajjja", "a*");
	test("ajjjjjjajjjjajjja", "*a*");
	test("abcbc", "*b*");
	test("abc", "a**");
	test("abc", "a**b**c**d");
	test("ab", "a**");
	test("ab", "**b");
	test("aaaaaaaba", "**b**");
	test("test", "*s");
	test("abcabc", "bc*");
	test("bccc", "b***");
	test("bbbbb", "***b***");
	test("bbbbbbbbbbbbbbbbbbbbbbbbbbb", "******b******");
}
