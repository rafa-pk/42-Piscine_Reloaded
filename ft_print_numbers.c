#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n <= 57)
	{
		ft_putchar(n);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
