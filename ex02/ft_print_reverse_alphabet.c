#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
	char	x;
	x = 'Z';

	while(x >= 'A')
	{
	write(1, &x, 1);
	x--;
	}
}
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
