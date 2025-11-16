#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long	nbl;
	char	c[10];
	int	i;

	i = 0;
	nbl = nbr;
	if (nbl == 0)
	{
		write (1, "0", 1);
		return;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write (1, "-", 1);
	}

	while (nbl > 0)
	{
		c[i++] = (nbl % 10) + 48; //	from int to char we add 48
		nbl /= 10;//then checks the while condition again and REPEAT
	}
	
	while (i > 0)
		write (1, &c[--i], 1);

}

int	main(){
	ft_putnbr(10);
	write (1, "\n", 1);
	ft_putnbr(214);
	write (1, "\n", 1);
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
}
