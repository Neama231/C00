#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_arr(char *v, int size, int last)
{
	int	i;
	i = 0;
	if (v[0] == last)
	{
		while (i < size)
		{
			ft_putchar(v[i++]);
		}
		write (1, ".\n", 2);
		return;
	}
	while ( i < size)
	{
		ft_putchar(v[i++]);
	}
	write (1, ", ", 2);
}


void	ft_print_combn(int n)
{
	char	v[9];//because 0 < n < 10
	char	V_MAX[9];
	int	flag;//to find the "pivot" value the rightmost value to increment
	int	base;//becomes the new value of that pivot used to fill the rest of digits in ascending order
	int	i;

	i = 0;
	while (i < n)
	{
		v[i] = i + '0';//the minimal combo
		V_MAX[i] = (10 - n) + i + '0';
		++i;
	}
	ft_print_arr(v, n, V_MAX[0]);

	while (v[0] != V_MAX[0])
	{
		flag = n-1;
		while (v[flag] == V_MAX[flag])
			--flag;//predicrement the index to find the value 'PIVOT'
		base = ++(v[flag]);//BASE +1 > base + 2 ....etc
		while (flag < n - 1)
			v[++flag] = ++base;//the combo need to be in an increpented order
		ft_print_arr(v, n, V_MAX[0]);
	}

}
int main(){
	ft_print_combn(2);
}


