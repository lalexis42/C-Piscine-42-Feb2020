#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);
int main(void)
{
	char str1[] = "Bonjour je suis une baeille";
	char str2[] = "Bonjour je suis une abeille";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
	return (0);
} 
