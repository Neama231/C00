#include <unistd.h>

void	print_numbers(short n)
{
	char	c;
	if (n < 10){
		write (1, "0", 1);
		c = n + 48;
		write (1, &c, 1);
	}
	else{
	c = (n / 10) + 48;
	write (1, &c, 1);
	c = n % 10 + 48;
	write (1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	short	n1;
	short	n2;
	
	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_numbers(n1);
			write(1, " ", 1);
			print_numbers(n2);
			if ( n1 != 98)
			{
				write (1, ",", 1);
				write (1, " ", 1);
			}
			n2++;
		}
		n1++;
	}
}

int	main()
{
	ft_print_comb2();
}
