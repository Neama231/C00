#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	short	x;
	x = 123;//IN ASCII the value 123 represent the symbol ({) after the letter (z)
	while (--x >= 97)
	{
		ft_putchar(x);
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	write (1, "\n", 1);
}

