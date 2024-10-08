void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	i;

	i = 0;
	while (i <= lenght)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
void	print_int(int n)
{
	printf("%d\n", n);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	ft_foreach(tab, 5, print_int);
	return (0);
}*/
