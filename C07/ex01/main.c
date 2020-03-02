#include <stdio.h>
int *ft_range(int min, int max);

int main()
{
	int *range = ft_range(-15, 5);
	if (range == NULL)
	{
		printf("NULL pointer has been returned.\n");
		return (0);
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}
