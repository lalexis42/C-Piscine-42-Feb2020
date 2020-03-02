#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int times_2(int nb)
{
	return (nb * 2);
}

int main()
{
	int test[5] = {0, 55, 32, 5, 666};
	int *test2 = (int*)malloc(5 * sizeof(int));
	test2 = ft_map(test, 5, &times_2);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", test2[i]);
	}
	return 0;
}