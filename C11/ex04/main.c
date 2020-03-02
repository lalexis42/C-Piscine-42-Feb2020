#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*my_sorting_condition)(int, int));

int is_first_bigger(int a, int b)
{
	return (a - b);
}

int main()
{
	int i[5] = {8, 4, 3, 1, -1};
	int i2[5] = {1, 5, 6, 8, 168};
	printf("%d, %d\n", ft_is_sort(i, 5, is_first_bigger), ft_is_sort(i2, 5, is_first_bigger));
	return (0);
}
