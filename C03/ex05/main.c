#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				main()
{
	char string[] = "Lol le string\0 mange des chips de crevette";
	char string2[] = " est rouge fluo";
	printf("%d\n",ft_strlcat(string, string2, 29));
	printf("%s\n", string);
	char string0[] = "Lol le string\0 mange des chips de crevette";
	printf("%lu\n",strlcat(string0, string2, 29));
	printf("%s\n", string0);
	return (0);
}