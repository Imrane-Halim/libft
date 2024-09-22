#include "libft.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (*s)
		count += write(1, (s++), 1);
	return (count);
}
