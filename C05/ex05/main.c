#include <stdio.h>

int	ft_sqrt(int nb);
int	main(void)
{
	unsigned int check = 2147483647;
	while(check <= 2147483647)
	{
		int sqrt = ft_sqrt(check);
		printf("%d : %d\n", check, sqrt);
		check++;
	}
}
