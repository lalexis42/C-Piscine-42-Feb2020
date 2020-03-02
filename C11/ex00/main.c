#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr_unsigned;

	if (nb < 0)
	{
		nbr_unsigned = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		nbr_unsigned = (unsigned int)nb;
	if (nbr_unsigned >= 10)
	{
		ft_putnbr(nbr_unsigned / 10);
		ft_putnbr(nbr_unsigned % 10);
	}
	else
		ft_putchar(nbr_unsigned + '0');
}

int main()
{
	int test[5] = {0, 55, 32, 5, 666};
	ft_foreach(test, 5, &ft_putnbr);
	return 0;
}
