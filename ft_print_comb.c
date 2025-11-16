#include <unistd.h>

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				ft_putchar(digit1);
				ft_putchar(digit2);
				ft_putchar(digit3);
				if (digit1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}

int main()
{
	ft_print_comb();
}
