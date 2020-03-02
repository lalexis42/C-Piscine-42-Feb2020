#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{
	char str1[] = "Bonjour je suis une baeille";
	char str2[] = "Bonjour ze";
	printf("%d\n", ft_strncmp(str1, str2, 15));
	printf("%d\n", strncmp(str1, str2, 15));
	return (0);
}
