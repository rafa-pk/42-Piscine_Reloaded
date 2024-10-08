#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(value)

int	abs(int value)
{
	if (value < 0)
		value = -value;
	return (value);
}
#endif
