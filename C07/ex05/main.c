#include <stdio.h>
char	**ft_split(char *str, char *charset);
int main()
{
	char **huhu;
	huhu = ft_split("coucouPjePRsuisOUTunPTpetitRUOTPblagueur.", "PROUT");
	int i = 0;
	while (i < 7)
	{
		printf("%s ", huhu[i++]);
	}
}

