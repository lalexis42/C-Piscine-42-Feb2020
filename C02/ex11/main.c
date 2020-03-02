void	ft_putstr_non_printable(char *str);

int		main(void)
{
	ft_putstr_non_printable("Bonjour\rAu revoir.\n\f\t\v");
	return (0);
}
