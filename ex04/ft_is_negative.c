#include<unistd.h>

void	ft_is_negative(int n)
{
	if(n < 0)
		write(1, "NEGATIVO", 8);
	else
		write(1, "POSITIVO", 8);
	
}
int main()
{
	ft_is_negative(5670);
	return 0;
}
