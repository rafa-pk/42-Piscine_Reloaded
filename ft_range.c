#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*range;

	i = 0;
	j = max - min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (j + 1));
	if (!range)
		return (NULL);
	while (max > min)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
