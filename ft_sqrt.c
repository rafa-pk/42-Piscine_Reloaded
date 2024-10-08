int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb)
	{
		i++;
	}
	if (nb % i != 0)
		return (0);
	return (i);
}
