#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nbr;
	nbr = '/';
	while (++nbr <= '9')
		write (1, &nbr, 1);
}

int	main()
{
	ft_print_numbers();
}
