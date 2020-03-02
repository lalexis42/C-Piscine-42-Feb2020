#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *range;
	int taille;

	taille = ft_ultimate_range(&range, 5, 5);
	printf("Taille = %d\n",taille);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}
