#include <unistd.h>

void	ft_print_alphabet(void)
{
	char x;
	x = 96;//IN ASCII the value 96 represent the symbol (`) before the letter (a)
	while (++x <= 122)
	{
		write (1, &x, 1);
	}
}

int	main()
{
	ft_print_alphabet();
	write (1, "\n", 1);
}


