void *ft_print_memory(void *addr, unsigned int size);

int ft_strlen(char *s)
{
	int i = 0;
	for (; s[i]; i++)
		;
	return i;
}

int main()
{
	char str[] = "Je mange des bonnes frites avec de la sauce fromagere miam le bon tacos sa mere nik la bac hah\1\2\6\t\f\n\v\r\a";
	ft_print_memory(str, ft_strlen(str));
}