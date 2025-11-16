#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == INT_MIN){
			ft_putchar('-');

			write (1, "2147483648", 10);
		}
		else
		{	
			n = -n;
			ft_putchar('-');
			ft_putnbr(n);
		}
	}
	else if (n < 10)//BASE CASE
	{
		ft_putchar(n + '0');
	}

	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10 );
	}
}
int	main()
{
	ft_putnbr(404);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
}
