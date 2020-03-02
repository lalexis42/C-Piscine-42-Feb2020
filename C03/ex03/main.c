#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char string[] = "Lol le string\0 mange des chips de crevette";
	char string2[] = " est rouge";
	printf("%s\n", ft_strncat(string, string2, 11));
	char string0[] = "Lol le string\0 mange des chips de crevette";
	printf("%s\n", strncat(string0, string2, 11));
	return (0);
}