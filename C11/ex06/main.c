#include <stdio.h>
void	ft_sort_string_tab(char *tab[]);
int main()
{
	char *tab[4];
	tab[0] = "coucou";
	tab[1] = "bonjour";
	tab[2] = "bondour";
	tab[3] = NULL;

	ft_sort_string_tab(tab);
	int i = 0;
	while (tab[i])
	{
		printf("%s ", tab[i++]);
	}
	return (0);
}
