#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[15];
	char orig[] = "trucmachin";
	printf("%u\n", ft_strlcpy(dest, orig, 5));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest, orig, 5));
	printf("%s\n", dest);
	return (0);
}
