#include <stdio.h>

void	ft_advanced_sort_string_tab(char *tab[], int (*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char *tab[])
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	char *tab[10] = {"YFxVpy","6","hvPi0cDj9lT","OalhZkr6ntJm","YKm9DBv4xVnp","LrOftTgU","JKdoTWZBL3","0ubxom","7PY4", 0};
	ft_advanced_sort_string_tab(tab, ft_strcmp);
	int i = 0;
	while (tab[i])
	{
		printf("tab[%d]: %s\n", i, tab[i]);
		i++;
	}
	char *tab2[10] = {"YFxVpy","6","hvPi0cDj9lT","OalhZkr6ntJm","YKm9DBv4xVnp","LrOftTgU","JKdoTWZBL3","0ubxom","7PY4", 0};
	printf("\n");
	ft_sort_string_tab(tab2);
	i = 0;
	while (tab2[i])
	{
		printf("tab2[%d]: %s\n", i, tab2[i]);
		i++;
	}
	return (0);
}
