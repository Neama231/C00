#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_array(char v[], int size, int last)
{
	int	i;
	i = 0;
	if (v[0] == last)
	{
		while (i < size)
		{
			ft_putchar(v[i++]);
		}
		write (1, ".", 1);
		return;
	}
	while (i < size)
	{
		ft_putchar(v[i++]);
	}
	write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	v[9];
	char 	V[9];
	int	flag;
	int	base;
	int	i;

	i = 0;
	while (i < n)
	{
		v[i] = i + 48;
		V[i] = (10 - n) + i + 48;
		++i;
	}

ft_print_array(v, n, V[0]);
while (v[0] != V[0])
{
	flag = n - 1;
	while (v[flag] == V[flag])
		--flag; 
	base = ++(v[flag]);
	while (flag < n - 1)
		v[++flag] = ++base;
	ft_print_array(v, n, V[0]);
}
}

int	main(){
	ft_print_combn(2);
}
