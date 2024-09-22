#include "libft.h"
#define UBASE "0123456789ABCDEF"
#define LBASE "0123456789abcdef"

int	ft_puthex(unsigned long n, int isupper)
{
	int		count;
	char	*base;

	if (isupper == 'x')
		base = LBASE;
	else if (isupper == 'X')
		base = UBASE;
	count = 0;
	if (n < 16)
		count += ft_putchar((int)base[n]);
	else
	{
		count += ft_puthex(n / 16, isupper);
		count += ft_puthex(n % 16, isupper);
	}
	return (count);
}
