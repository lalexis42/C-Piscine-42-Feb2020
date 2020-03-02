#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);
int main()
{
	char string[] = "Lol le string\0 mange des chips de crevette";
	char string2[] = " est rouge";
	printf("%s\n", ft_strcat(string, string2));
	char string0[] = "Lol le string\0 mange des chips de crevette";
	printf("%s\n", strcat(string0, string2));
	return (0);
}