#include "libft.h"

int	ft_print_format(const char s, va_list *args)
{
	int	cout;

	cout = 0;
	if (s == 'c')
		cout += ft_putchar(va_arg(*args, int));
	else if (s == 's')
		cout += ft_putstr(va_arg(*args, char *));
	else if (s == 'p')
		cout += ft_putptr(va_arg(*args, unsigned long));
	else if (s == 'd' || s == 'i')
		cout += ft_putnbr(va_arg(*args, int));
	else if (s == 'u')
		cout += ft_unsigned(va_arg(*args, unsigned int));
	else if (s == 'x' || s == 'X')
		cout += ft_puthex(va_arg(*args, unsigned int), s);
	else
		cout += write(1, &s, 1);
	return (cout);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, string);
	while (*string != '\0')
	{
		if (*string == '%')
			count += ft_print_format(*(++string), &args);
		else
			count += write(1, string, 1);
		string++;
	}
	va_end(args);
	return (count);
}
