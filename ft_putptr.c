#include "libft.h"

int	ft_putptr(unsigned long p)
{
	int	cout;

	cout = 0;
	if (p != 0)
	{
		cout += ft_putstr("0x");
		cout += ft_puthex(p, 'x');
		return (cout);
	}
	return (ft_putstr("(nil)"));
}
