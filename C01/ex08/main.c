#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);
int main()
{
	int tab[8] = {1, 3, 2, 5, 78, 12, 66, 4};
	ft_sort_int_tab(&tab[0], 8);
	for (int i = 0; i < 8; i++)
	{
		printf("%d ",tab[i]);
	}
} 
