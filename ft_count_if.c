/*#include <stdio.h>

int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/
int	ft_count_if(char **tab, int ( *f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		if ((*f)(tab[i]) == 1)
		{
			printf("if loop: %s\n", tab[i]);
			count++;
		}
		i++;
	}
	return (count);
}
/*
int test(char *str) 
{
	if (ft_strlen(str) > 1)
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[] = {"preparts", "r","wassim", "donald", "2", blob", 0};
	printf("%d\n", ft_count_if(tab, test));
	return (0);
}*/
